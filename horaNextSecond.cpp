//Encontrar la hora del siguiente segundo

#include<iostream>

using namespace std;

int main(){
	int h,m,s;

	cout<<"\n";
	cout<<"\tHora: "; cin>>h;
	cout<<"\tMinuto: "; cin>>m;
	cout<<"\tSegundo: "; cin>>s;

	s+=1;

	if(s==60){
		s=0;
		m+=1;
		if(m==60){
			m=0;
			h+=1;
			if(h==24)
				h=0;
		}
	}

	cout<<"\n";
	cout<<"\tHora: "<<h<<endl;
	cout<<"\tMinuto: "<<m<<endl;
	cout<<"\tSegundo: "<<s<<endl;

	return 0;
}
