//Convertir segundos a horas, minutos y segundos

#include<iostream>

using namespace std;

int main(){
	int n,h,m,s;

	cout<<"\n\tIngrese cantidad de segundos: "; cin>>n;

	h=n/3600;
	m=(n%3600)/60;
	s=(n%3600)%60;

	cout<<"\n\tHoras: "<<h<<endl;
	cout<<"\tMinutos: "<<m<<endl;
	cout<<"\tSegundos: "<<s<<endl;
	return 0;
}
