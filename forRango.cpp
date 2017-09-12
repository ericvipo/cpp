//instruccion for basada en rango

#include<iostream>
#include<array>

using namespace std;

int main(){
	array<int,5>arre={{1,2,3,4,5}};
	
	//mostramos los valores iniciales
	cout<<"\n\t";
	for(int i:arre)
		cout<<i<<" ";
	
	//modificando el arreglo
	cout<<"\n\t";
	for(int &aux:arre)
		cout<<(aux*=2)<<" ";
	
	return 0;
}
