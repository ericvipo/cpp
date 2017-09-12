//Principal

#include<iostream>
#include"LibroCalificaciones.h"

using namespace std;

int main(){
	LibroCalificaciones libro1("Introducción a la Ingeniería de Software");
	//LibroCalificaciones libro2("Métodos Numéricos");

	//cout<<"Libro1 creado para "<<libro1.obtenerNombreCurso()<<endl;
	//cout<<"Libro2 creado para "<<libro2.obtenerNombreCurso()<<endl;

	libro1.mostrarMensaje();
	libro1.determinarPromedio();

	return 0;
}
