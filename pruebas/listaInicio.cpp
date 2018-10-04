#include<iostream>

using namespace std;

struct nodo {
	int nro;
	struct nodo *sgte;
};

int main(){
	nodo *lista;
	nodo *q; //variable de trabajo
	size_t n;

	lista = nullptr; //inicializa lista

	cout<<"Números de elementos: "; cin>>n;

	for(size_t i=0; i<n; i++) {
		q = new(struct nodo); //asigna dirección de memoria
		q->sgte = lista;
		cout<<"Número "<<i+1<<": "; cin>>q->nro;
		lista = q;
	}

	while(lista) {
		cout<<lista->nro<<" ";
		lista = lista->sgte;
	}

	return 0;
}
