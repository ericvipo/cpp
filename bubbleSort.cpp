//Ordenar 4 números usando el método de burbuja

#include<iostream>

using namespace std;

int main(){
	int v[4];
	int i,j,aux;

	cout<<endl;
	for(i=0;i<4;i++){
		cout<<"\tNúmero "<<i+1<<": "; cin>>v[i];
	}
	//Método burbuja
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			if(v[j]>v[j+1]){
				aux=v[j+1];
				v[j+1]=v[j];
				v[j]=aux;
			}

	cout<<"\n";
	cout<<"================================"<<endl;
	cout<<"\tOrdenando vector"<<endl;
	cout<<"================================"<<endl;
	cout<<endl;

	for(i=0;i<4;i++)
		cout<<"Número "<<i+1<<": "<<v[i]<<endl;

	return 0;
}
