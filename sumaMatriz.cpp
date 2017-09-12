//Ingrese 6 números en un arreglo de 2 dimensiones 3x2
//y obtenga la suma de los números ingresados

#include<iostream>

using namespace std;

int main(){
	int m[3][2];
	int i,j,s;

	s=0;
	for(i=0;i<3;i++)
		for(j=0;j<2;j++){
			cout<<"\tNúmero ["<<i<<"|"<<j<<"]: ";
			cin>>m[i][j];
			s+=m[i][j];
		}

	cout<<"\n\tSuma: "<<s<<endl;

	return 0;
}
