#include<iostream>
//lista enlazada
//método nodo cabecera
using namespace std;

struct nodo {
	int nro;
	struct nodo *sgte;
};

int main() {
	struct nodo cabeza;
	struct nodo *q; //variable de trabajo
	int n=0,i=0;

	cabeza.sgte = nullptr;

	cout<<"Número de elementos: "; cin>>n;

	for(i=0; i<n; i++) {
		q = new(struct nodo);
		cout<<"Elemento "<<i+1<<": "; cin>>q->nro;

		q->sgte = cabeza.sgte;

		cabeza.sgte = q;
	}

	cout<<"\nNúmeros: ";

	while(q != nullptr) {
		cout<<" "<<q->nro;
		q = q->sgte;
	}

	return 0;
}

