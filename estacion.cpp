//Ingresar número de un mes y determinar una estación

#include<iostream>

using namespace std;

int main(){
	int m,d;
	string e;

	cout<<"\n\tMes: "; cin>>m;
	cout<<"\tDía: "; cin>>d;

	switch(m){
		case 1:
		case 2:
		case 3:
			e="Verano";
			if(m==3 && d>20)
				e="Otoño";
			break;
		case 4:
		case 5:
		case 6:
			e="Otoño";
			if(m==6 && d>21)
				e="Invierno";
			break;
		case 7:
		case 8:
		case 9:
			e="Invierno";
			if(m==9 && d>22)
				e="Primavera";
			break;
		case 10:
		case 11:
		case 12:
			e="Primavera";
			if(m==12 && d>20)
				e="Verano";
			break;
	}

	cout<<"\n\tEstación: "<<e<<endl;
	return 0;
}
