// Usaremos paso por referencia
// tipo puntero

#include<iostream>

using namespace std;

void alCubo(int *);

int main(){
	int n=5;

	cout<<"\n\tValor inicial de n: "<<n<<endl<<endl;

	alCubo(&n);

	cout<<"\n\tNuevo valor de n: "<<n<<endl;
	return 0;
}

void alCubo(int *ptrn){
	*ptrn = *ptrn**ptrn**ptrn;
}
