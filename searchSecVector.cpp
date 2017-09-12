//Buscar un número en 7 números ingresados y determine la posición
//y si existe o no el número buscado
//Usaremos el método de búsqueda secuencial.

#include<iostream>

using namespace std;

int main(){
	int n[7],i,num;
	bool s=true;
	
	cout<<endl;
	for(i=0; i<7; i++){
		cout<<"\tNúmero "<<i+1<<": ";
		cin>>n[i];
	}
	cout<<"\n\tNúmero a buscar: "; cin>>num;

	cout<<endl;
	for(i=0; i<7; i++)
		if(n[i]==num){
			cout<<"\tNúmero encontrado en la posición "<<i<<endl;
			s=false;
		}
	if(s)
		cout<<"\n\tNúmero no encontrado :s "<<endl;

	return 0;
}
