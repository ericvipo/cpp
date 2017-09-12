//Búsqueda y ordenamiento de arreglos

#include<iostream>
#include<array>
#include<string>
#include<algorithm> //contiene sort y binary_search

using namespace std;

int main(){
	const size_t tamanio=7;
	array<string,tamanio>color={{"rojo","naranja","amarillo","verde","azul","indigo","violeta"}};
	// imprime el arreglo original
	cout<<"\n\tArreglo desordenado"<<endl;
	for(string i:color)
		cout<<i<<" ";
	
	sort(color.begin(),color.end()); //ordena el contenido de colores
	cout<<endl;

	// imprime el arreglo ordenado
	cout<<"\n\tArreglo ordenado"<<endl;
	for(string &ind:color)
		cout<<ind<<" ";

	//busca Indigo en los colores
	bool res=binary_search(color.begin(),color.end(),"indigo");
	cout<<"\n\nindigo "<<(res?"se":"no se")<<" encuentra en colores"<<endl;
	
	res=binary_search(color.begin(),color.end(),"cian");
	cout<<"\n\ncian "<<(res?"se":"no se")<<" encuentra en colores"<<endl;

	return 0;
}
