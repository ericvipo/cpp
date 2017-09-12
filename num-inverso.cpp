//devolver un número inverso de "x" dígitos

#include<iostream>

using namespace std;

int main(){
	int n,ni,r;

	cout<<"\n\tIngresa un número: "; cin>>n;
	
	ni=0;
	while(n>=10){
		r=n%10;
		ni=(ni+r)*10;
		n=n/10;
	}
	ni=ni+n;

	cout<<"\n\tEl número inverso es "<<ni<<endl;

	return 0;
}
