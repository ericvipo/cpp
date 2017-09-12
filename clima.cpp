//Al ingresar un valor de temperatura se determina el clima correspondiente

#include<iostream>

using namespace std;

int main(){
	int temp;
	string r;
	cout<<"\n\tTemperatura: "; cin>>temp;

	if(temp<10)
		r="Frío";
	else{
		if(temp<=20)
			r="Nublado";
		else{
			if(temp<=30)
				r="Calor";
			else
				r="Tropical";
		}
	}

	cout<<"\n\tClima: "<<r<<endl;

	return 0;
}
