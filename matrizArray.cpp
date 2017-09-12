// Incicialización de arreglos multidimensionales

#include<iostream>
#include<array>

using namespace std;

const size_t fila=2;
const size_t colu=3;

void imprimirArray(const array<array<int,colu>,fila>&);

void imprimirArray(const array<array<int,colu>,fila>& a){
	for(auto const &f:a){
		for(const auto &c:f)
			cout<<c<<" ";
	cout<<endl;
	}
}

int main(){
	array<array<int,colu>,fila>arreglo={ { {{1,2,3}}, {{4,5,6}} } };

	cout<<"\n\tLos valores del arreglo son"<<endl;
	imprimirArray(arreglo);

	cout<<"\n\n\n\a";
	// controlado por un contador
	for(size_t f=0;f<arreglo.size();f++){
		for(size_t c=0;c<arreglo[f].size();c++)
			cout<<" "<<arreglo[f][c];
		cout<<endl;
	}

	return 0;
}

