//clase LibroCalificaciones en un archivo separado
//del main, los encabezados nunca deben tener la directiva using

#include<iostream>
#include<string>

class LibroCalificaciones{
	private:
		std::string nombreCurso;
	public:
		explicit LibroCalificaciones(std::string nombre)
			:nombreCurso(nombre)
		{
			//cuerpo vacio
		}

		void establecerNombreCurso(std::string nombre){
			nombreCurso=nombre;
		}

		std::string obtenerNombreCurso() const{
			return nombreCurso;
		}

		void mostrarMensaje() const{
			std::cout<<"\nBienvenido al libro: "<<obtenerNombreCurso()<<std::endl;
		}
};

