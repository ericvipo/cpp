//Compra de maiz a determinado precio y determinado peso
//a cuanto debe venderse para no ganar o perder?
//usaremos punteros ;)

#include<iostream>
#define MAX 10

using namespace std;

struct compra{
	float precio;
	float cantidad;
};

void leerCompra(size_t *, struct compra *);
float calcPonderado(size_t *, struct compra *);

int main(){
	struct compra s[MAX];
	size_t n=0;

	cout<<"\n\tIngresa número de compras: "; cin>>n;
	leerCompra(&n,s);
	
	cout<<"\n\tPrecio ponderado: "<<calcPonderado(&n,s)<<endl;

	return 0;
}

void leerCompra(size_t *n, struct compra *ptrS){
	
	for(size_t i=0;i<(*n);i++){
		cout<<"\n\tCompra Nro "<<i+1<<endl;
		cout<<"\tPrecio: "; cin>>(*(ptrS+i)).precio;
		cout<<"\tCantidad: "; cin>>(*(ptrS+i)).cantidad;
	}
}

float calcPonderado(size_t *n, struct compra *ptrS){
	float D=0, d=0;

	for(size_t i=0; i<(*n); i++){
		D = D + ((*(ptrS+i)).precio)*((*(ptrS+i)).cantidad);
		d = d + (*(ptrS+i)).cantidad;
	}
	return D/d;
}
