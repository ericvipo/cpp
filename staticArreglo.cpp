//veremos un arreglo estático y otro automático

#include<iostream>
#include<array>
#include<iomanip>

using namespace std;

const size_t tamanio = 3;
void inicArregloStatic();
void inicArregloAutomatic();

void inicArregloStatic(){
	static array<int,tamanio>arr1 = {};

	cout<<"\n\tValores al iniciar inicArregloStatic"<<endl;

	for(int i : arr1)
		cout<<setw(10)<<i;
	cout<<endl;

	//modificamos el arreglo1
	cout<<"\n\tValores al salir inicArregloStatic"<<endl;

	for(size_t j=0;j<arr1.size();j++)
		cout<<setw(10)<<"arr1["<<j<<"] = "<<(arr1[j]+=5);
}

void inicArregloAutomatic(){
	array<int,tamanio>arr2 = {{1,2,3}};

	cout<<"\n\n\tValores al iniciar inicArregloAutomatic"<<endl;

	for(size_t i=0;i<arr2.size();i++)
		cout<<setw(10)<<"arr2["<<i<<"] = "<<arr2[i];
	cout<<endl;

	//modificamos el arreglo1
	cout<<"\n\tValores al salir inicArregloAutomatic"<<endl;
	for(size_t i=0;i<arr2.size();i++)
		cout<<setw(10)<<"arr2["<<i<<"] = "<<(arr2[i]+=5);
}

int main(){
	cout<<"\n\tPrimera llamada a cada función"<<endl;
	inicArregloStatic();
	inicArregloAutomatic();
	cout<<endl;
	cout<<"\n\tSegunda llamada a cada función"<<endl;
	inicArregloStatic();
	inicArregloAutomatic();

	return 0;
}
