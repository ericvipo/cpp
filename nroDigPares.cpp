//Dado un número, determinar la cantidad de dígitos pares

#include<iostream>

using namespace std;

int main(){
	int n,r,c;

	cout<<"\n\tNúmero: "; cin>>n;

	c=0;
	while(n>0){
		r=n%10;
		if(r%2==0)
			c++;
		n/=10;
	}
	
	cout<<"\n\tCantidad de dígitos pares: "<<c<<endl;

	return 0;
}
