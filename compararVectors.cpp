//Leer 4 números y almacenar en vector A y otros 4
//en otro vector llamado B, determinar cuántos
//números de A se encuentran en B

#include<iostream>

using namespace std;

int main(){
	int A[4],B[4];
	int i,j,c;
	char resp;

	do{
		cout<<"\n";
		cout<<"================================"<<endl;
		cout<<"\tLeyendo vector A"<<endl;
		cout<<"================================"<<endl;

		for(i=0; i<4; i++){
			cout<<"\tNúmero "<<i+1<<": "; cin>>A[i];
		}

		cout<<"\n";
		cout<<"================================"<<endl;
		cout<<"\tLeyendo vector B"<<endl;
		cout<<"================================"<<endl;

		for(i=0; i<4; i++){
			cout<<"\tNúmero "<<i+1<<": "; cin>>B[i];
		}

		c=0;
		for(i=0;i<4;i++)
			for(j=0;j<4;j++)
				if(A[i]==B[j])
					c++;

		cout<<"\n\tCantidad de números: "<<c<<endl;

		cout<<"\n\tContinuar? "; cin>>resp;
		//El siguiente comando hace uso de la librería cstdlib
		//para ejecutar comandos del sistema
		system("clear");

	}while(resp=='s'||resp=='S');

	return 0;
}
