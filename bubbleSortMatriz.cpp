//Alcenar 9 números en una matriz 3x3
//y obtener los números ordenados

#include<iostream>

using namespace std;

int main(){
	int m[3][3];
	int i,j,aux;
	int v[9];

	cout<<endl;

	aux=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			cout<<"\tNúmero ["<<i<<"|"<<j<<"]: ";
			cin>>m[i][j];
			v[aux]=m[i][j];
			aux++;
		}

	for(i=0;i<8;i++)
		for(j=0;j<8;j++)
			if(v[j]>v[j+1]){
				aux=v[j+1];
				v[j+1]=v[j];
				v[j]=aux;
			}

	cout<<endl;
	cout<<"=============================="<<endl;
	cout<<"\tORDENANDO"<<endl;
	cout<<"=============================="<<endl;
	cout<<endl;

	aux=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++){
			cout<<"\tNúmero ["<<i<<"|"<<j<<"]: "<<v[aux]<<endl;
			aux++;
		}

	return 0;
}
