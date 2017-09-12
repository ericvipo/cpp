//incluiremos la clase LibroCalificaciones

#include<iostream>
#include"LibroCalificaciones.h"

using namespace std;

int main(){
	LibroCalificaciones libro1("Sistemas Digitales");
	LibroCalificaciones libro2("Métodos Numéricos");

	cout<<"\tlibro1 creado para: "<<libro1.obtenerNombreCurso()<<endl;
	cout<<"\tlibro2 creado para: "<<libro2.obtenerNombreCurso()<<endl;

	return 0;
}
