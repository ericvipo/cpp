//Dado un número, devolver el dígito mayor

#include<iostream>

using namespace std;

int main(){
	int n,r,m=0;

	cout<<"\n\tNúmero: "; cin>>n;

	while(n>0){
		r=n%10;
		if(r>m)
			m=r;
		n/=10;
	}

	cout<<"\n\tDígito Mayor: "<<m<<endl;

	return 0;
}
