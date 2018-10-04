#include<iostream>

using namespace std;

int main(){
	int a=5;
	int &apd=a; 

	apd=apd*5;

	cout<<apd<<endl;
	cout<<a<<endl;

	cout<<"por 5"<<endl;
	apd = apd *5;

	cout<<endl;
	cout<<apd<<endl;
	cout<<a<<endl;

	return 0;
}
