// Pasando un arreglo por referencia tipo apuntador

#include<iostream>

using namespace std;

void mostrar(int *);

int main(){
	int n[5] = {4,5,6,7,8};

	cout<<"\n\tArreglo al inicio"<<endl;
	cout<<"\t";

	mostrar(n);
	
	return 0;
}

void mostrar(int *ptrA){
	for(size_t i=0;i<5;i++)
		cout<<" "<<*(ptrA+i);
}
