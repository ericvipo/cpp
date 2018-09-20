#include<iostream>

using namespace std;

template <typename T>
T cuadrado (T n) {
	return n*n;
}

int main() {
	cout<<"cuadrado: "<<cuadrado(5.5)<<endl;
	return 0;
}

