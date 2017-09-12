//Funciones y procedimientos

#include<iostream>
#include<string>

using namespace std;

//prototipos
int menu();
void ParImpar(int , string &);
int factorial(int );

//funciones
int menu(){
	int resp;//variable local

	cout<<"\n\t[1] FACTORIAL"<<endl;
	cout<<"\t[2] NUMERO PAR O IMPAR"<<endl;
	cout<<"\t[3] SALIR"<<endl;
	cout<<"\n\tOpción: "; cin>>resp;
	return resp;
}

//Procedimiento con paso
//de parámetros por referencia
void ParImpar(int num, string &res){
	string r="";

	if(num%2==0)
		r="PAR";
	else
		r="IMPAR";
	res=r;
}

int factorial(int num){
	int f,i;//variables locales

	f=1;
	for(i=1;i<=num;i++)
		f*=i;
	return f;
}

int main(){
	int r,fact,n;
	string res="";

	do{
		system("clear");
		r=menu();

		switch(r){
			case 1:
				system("clear");
				cout<<"=============================="<<endl;
				cout<<"\tFactorial de un número"<<endl;
				cout<<"=============================="<<endl;
				cout<<"\n\t Número: "; cin>>n;
				fact=factorial(n);
				cout<<"\n\tFactorial: "<<fact<<endl;
				//fflush(stdin);
				getchar();
				getchar();
				break;
			case 2:
				system("clear");
				cout<<"=============================="<<endl;
				cout<<"\tNúmero par o impar"<<endl;
				cout<<"=============================="<<endl;
				cout<<"\n\t Número: "; cin>>n;
				ParImpar(n,res);
				cout<<"\n\tResultado: "<<res<<endl;
				getchar();
				getchar();
				break;
			case 3:
				break;
			default:
				system("clear");
				cout<<"=============================="<<endl;
				cout<<"\tOpción no válida"<<endl;
				cout<<"=============================="<<endl;
				break;
		}
	}while(r!=3);

	return 0;
}
