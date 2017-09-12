// funciones con arreglos integrados

#include<iostream>
#include<algorithm>

using namespace std;

void  imprime(int []);

int main(){
	int v[5]={4,6,1,7,3};

	imprime(v);
	sort(begin(v),end(v)); //Ordenando
	imprime(v);
	return 0;
}

void imprime(int a[]){
	cout<<"\n\t"<<endl;
	for(size_t i=0; i<5; i++)
		cout<<" "<<a[i];
}

