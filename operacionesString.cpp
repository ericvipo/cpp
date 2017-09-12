//Operaciones con String

#include<iostream>
#include<string>

using namespace std;

int main(){
	string n,a,id,aux,nom;
	unsigned int i;
	int p;

	cout<<endl;
	//la función getline(cin,n) es para leer entrada con espacios
	cout<<"\tNombres: "; getline(cin,n);
	cout<<"\tApellidos: "; getline(cin,a);
	//convertimos la cadena a minusculas
	for(i=0;i<n.length();i++)
		n[i]=tolower(n[i]);

	for(i=0;i<a.length();i++)
		a[i]=tolower(a[i]);

	id=n.substr(0,3)+a.substr(0,3);

	p=0;
	nom="";
	for(i=0;i<n.length();i++)
		if(n[i]==' '){
			cout<<"Espacio vacio encontrado"<<endl;
			aux=n.substr(p,i-p);
			nom=nom+aux;
			p=i+1;
		}

	aux=n.substr(p,i-p);
	nom+=aux;

	cout<<"\n\tID: "<<id<<endl;
	cout<<"\tNombres: "<<nom<<endl;

	return 0;
}
