//

#include<iostream>
#include<string>

using namespace std;

class LibroClasificaciones{
	private:
		string nombreCurso;
	public:
		explicit LibroClasificaciones(string nombre)
			:nombreCurso(nombre)
		{
			//cuerpo vacío del constructor
		}
		
		void establecerNombreCurso(string nombre){
			nombreCurso=nombre;
		}

		string obtenerNombreCurso() const{
			return nombreCurso;
		}

		void mostrarMensaje() const{
			cout<<"Bienvenido al libro: "<<obtenerNombreCurso()<<endl;
		}
};

int main(){
	LibroClasificaciones libro1("sistemas digitales");
	LibroClasificaciones libro2("metodos numericos");

	cout<<"\tlibro1 se creo para: "<<libro1.obtenerNombreCurso()<<endl;
	cout<<"\tlibro2 se creo para: "<<libro2.obtenerNombreCurso()<<endl;

	return 0;
}
