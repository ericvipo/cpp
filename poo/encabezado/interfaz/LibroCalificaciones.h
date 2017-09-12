//LibroCalificaciones.h
//Una recomendación sutil es que los encabezados no deben tener using
//Este archivo presenta la interfaz public de
//LibroCalificaciones sin revelar las implementaciones
//de sus funciones miembro, que están definidas 
//en LibroCalificaciones.cpp
#include<string>

class LibroCalificaciones{
	private:
		std::string nombreCurso;
	public:
		explicit LibroCalificaciones(std::string);
		void establecerNombreCurso(std::string);
		std::string obtenerNombreCurso() const;
		void mostrarMensaje() const;
		void determinarPromedio() const;
};
