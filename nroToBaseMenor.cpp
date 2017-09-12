//Dado un número entero en base 10,
//convertir el número a otra base menor que 10

#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n,b,nn,r,i;
	cout<<"\n";
	cout<<"\tNúmero Base Decimal: "; cin>>n;
	cout<<"\tBase: "; cin>>b;
	
	nn=0;
	i=0;
	while(n>0){
		r=n%b;
		n/=b;
		nn=nn+r*pow(10,i);
		i++;
	}

	cout<<"\n\tResultado: "<<nn<<endl;

	return 0;
}
