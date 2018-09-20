#include<iostream>

using namespace std;

int cuadrado (int);
double cuadrado (double);


int main() {
	int a = 5;

	cout<<"Cuadrado: "<<cuadrado(8.5)<<endl;

	return 0;
}

int cuadrado (int n) {
	cout<<"entero"<<endl;
	return n*n;
}

double cuadrado (double n) {
	cout<<"decimal"<<endl;
	return n*n;
}
