//LibroCalificaciones.cpp
//Definiciones de las funciones miembro de LibroCalificaciones
//Contiene implementaciones de las funciones miembro cuyo
//prototipos están en LibroCalificaciones.h
#include<iostream>
#include"LibroCalificaciones.h"
#include<iomanip>//Preprocesador para manipulador de flujo parametrizado

using namespace std;

LibroCalificaciones::LibroCalificaciones(string nombre)
	//: nombreCurso(nombre)
{
	establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre){
	if(nombre.size()<=25)
		nombreCurso=nombre;
	else{
		nombreCurso=nombre.substr(0,25);
		cerr<<"\tEl nombre excede, se limitará"<<endl;
	}
}

string LibroCalificaciones::obtenerNombreCurso() const{
	return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const{
	cout<<"\n\tBienvenidos al curso: "<<obtenerNombreCurso()<<endl;
}

void LibroCalificaciones::determinarPromedio() const{
	int total=0, cont=0, calif=0;
	double promedio;

	cout<<endl;
	cout<<cont+1;
	cout<<"\tEscriba calificación o -1 para salir: "; cin>>calif;

	while(calif!=-1){
		total=total+calif;
		cont++;

		cout<<cont+1;
		cout<<"\tEscriba calificación o -1 para salir: "; cin>>calif;
	}

	if(cont!=0){
		promedio=static_cast<double>(total)/cont;
	}
	else{
		cout<<"\n\tNo ingresó ninguna calificación"<<endl;
		promedio=0;
	}

	cout<<"\n\t Contador en : "<<cont<<endl;

	cout<<"\n\tTotal de las notas: "<<total<<endl;
	cout<<setprecision(3)<<fixed;//para manipular la salida de decimales
	cout<<"\tPromedio: "<<promedio<<endl;
}



