//Determinar si la fecha es correcta, considere años bisiestos

#include<iostream>

using namespace std;

int main(){
	int d,m,a;
	string r;

	cout<<"\n";
	cout<<"\tDía: "; cin>>d;
	cout<<"\tMes: "; cin>>m;
	cout<<"\tAnio: "; cin>>a;

	switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(d<=31)
				r="Fecha correcta";
			else
				r="Fecha incorrecta";
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(d<=30)
				r="Fecha correcta";
			else
				r="Fecha incorrecta";
			break;
		case 2:
			if(a%4==0 && (a%400==0 ||  a%100!=0)){
				if(d<=29)
					r="Fecha correctaB";
				else
					r="Fecha incorrectaB";
			}
			else{
				if(d<=28)
					r="Fecha correcta";
				else
					r="Fecha incorrecta";
			}
			break;
		default:
			r="Fecha incorrecta";
			break;
	}

	cout<<"\n\tRespuesta: "<<r<<endl;

	return 0;
}
