//Dado un número, determinar si el número es primo o no

#include<iostream>

using namespace std;

int main(){
	int n,i;
	string r="Es primo";

	cout<<"\n\tNúmero: "; cin>>n;

	i=2;
	while(i<=n/2){
		if(n%i==0){
			r="No es primo";
			break;
		}
		i++;
	}

	cout<<"\n\t Respuesta: "<<r<<endl;

	return 0;
}
