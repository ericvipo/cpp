//lista enlazada
//método de puntero
//al primer elemento

#include<iostream>
using namespace std;

struct nodo {
	int nro;
	struct nodo *sgte;
};

int main() {
	nodo *lista;
	nodo *q; //variable de trabajo
	int n=0,i=0;

	lista = nullptr;

	cout<<"Número de elementos: "; cin>>n;

	for(i=0; i<n; i++){
		q = new(struct nodo);
		cout<<"Elemento "<<i+1<<": "; cin>>q->nro;
		q->sgte = lista;
		lista = q;
	}

	cout<<"\nMostrando números: ";

	while(q) {
		cout<<" "<<q->nro;
		q = q->sgte;
	}
return 0;
}
