//Implemente una lista enlazada
//con el método de puntero al
//primer elemento, hacer que los elementos
//ingresados se inserten al final de la lista
//
#include<iostream>
using namespace std;

struct nodo {
	int nro;
	struct nodo *sgte;
};

int main() {
	nodo *lista, *nuevo, *ant;
	size_t n;

	lista = nullptr;

	cout<<"Número de datos: "; cin>>n;
	cout<<endl;

	for(size_t i=0; i<n; i++) {
		nuevo =  new(struct nodo);
		nuevo->sgte = nullptr;
		cout<<"Número "<<i+1<<": "; cin>>nuevo->nro;

		if(lista == nullptr) {
			lista = nuevo;
			ant = nuevo;
		}else {
			ant->sgte = nuevo;
			ant = nuevo;
		}
	}

	nuevo = lista;
	
	while(nuevo){
		cout<<nuevo->nro<<" ";
		nuevo = nuevo->sgte;
	}

	return 0;
}
