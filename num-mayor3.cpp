//Calcular el número mayor de tres números

#include<iostream>

using namespace std;

int main(){
	int n1,n2,n3,m;
	cout<<endl;
	cout<<"\tIngresa número 1: "; cin>>n1;
	cout<<"\tIngresa número 2: "; cin>>n2;
	cout<<"\tIngresa número 3: "; cin>>n3;
	
	if(n1>n2){
		if(n1>n3)
			m=n1;
		else
			m=n3;
	}
	else{
		if(n2>n3)
			m=n2;
		else
			m=n3;
	}

	cout<<"\n\tEl número mayor es: "<<m<<endl;
	return 0;
}
