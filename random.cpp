
//

#include<iostream>
#include<cstdlib>
#include<iomanip>


using namespace std;

int main(){
	int s;

	cout<<"\n\tIntroduzca la semilla: "; cin>>s;
	srand(s);

	for(unsigned int i=1; i<=50; i++){
		cout<<setw(4)<<(rand()%6)+1;
		if(i%5==0)
			cout<<endl;
	}

	return 0;
}
