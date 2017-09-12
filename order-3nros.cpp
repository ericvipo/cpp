//Dado 3 números, devolver los números en orden ascendente

#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3,aux;
	cout<<endl;
	cout<<"\tIngresa número 1: "; cin>>n1;
	cout<<"\tIngresa número 2: "; cin>>n2;
	cout<<"\tIngresa número 3: "; cin>>n3;

	if(n1>n2){
		aux=n2;
		n2=n1;
		n1=aux;
	}
	if(n1>n3){
		aux=n3;
		n3=n1;
		n1=aux;
	}
	if(n2>n3){
		aux=n3;
		n3=n2;
		n2=aux;
	}

	cout<<"\n\t "<<n1<<" "<<n2<<" "<<n3<<endl;
	return 0;
}
