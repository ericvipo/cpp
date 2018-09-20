#include<iostream>

using namespace std;

int main(){
	int y=5;
	int *yPtr=nullptr; // * Operador de indirección
	int x = 3;

	cout<<"===================="<<endl;
	cout<<"\tAl comienzo"<<endl;
	cout<<"\tValor inicial de y: "<<y<<endl;
	cout<<"\tValor inicial de yPtr: "<<yPtr<<endl;

	yPtr = &y; // Operador & de dirección

	cout<<"===================="<<endl;
	cout<<"\tLuego de asignar"<<endl;
	cout<<"\tValor de yPtr: "<<yPtr<<endl;
	cout<<"\tValor de *yPtr: "<<*yPtr<<endl;


	x = *yPtr;
	cout<<"Numero x: "<<x<<endl;
	cout<<"valor de &X: "<<&x<<endl;
	cout<<"valor de &Y: "<<&y<<endl;
	cout<<"valor de &yPtr: "<<&yPtr<<endl;



	cout<<"\n===================="<<endl;
	cout<<"\tDesreferenciando"<<endl;

	*yPtr = 9;

	cout<<"\n\tNuevo valor de *yPtr: "<<*yPtr<<endl;
	cout<<"\n\tNueveo valor de y: "<<y<<endl;

	return 0;
}
