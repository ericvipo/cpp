#include<iostream>
using namespace std;

struct nodo{
	int nro;
	struct nodo *sgte;
};

typedef struct nodo *TLista;

int main(){
	TLista lista = nullptr;
	int opc,valor,pos;

	do{
		cout<<"*** Menu ***"<<endl;
		cout<<"1. Inserta al inicio"<<endl;
		cout<<"2. Inserta al final"<<endl;
		cout<<"3. Inserta en una posición"<<endl;
		cout<<"4. Listado"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<endl;
		cout<<"Ingrese opción: "; cin>>opc;

		switch(opc){
			case 1:
				cout<<"Valor a insertar al inicio: "; cin>>valor;
				break;
		}
	}while(opc!=5);

	return 0;
}
