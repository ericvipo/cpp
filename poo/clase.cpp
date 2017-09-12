//

#include<iostream>
#include<string>
using namespace std;

class LibroClasificaciones
{
	private:
		string nombreCurso;

	public:
		void establecerNombreCurso(string nombre){
			nombreCurso=nombre;
		}

		string obtenerNombreCurso() const{
			return nombreCurso;
		}

		void mostrarMensaje() const{
			cout<<"\n\tBienvenido al libro de calificaciones para "<<obtenerNombreCurso()<<endl;
		}
};

int main(){
	string nombreDelCurso;
	LibroClasificaciones miLibroCalificaciones;

	cout<<"El nombre inicial del curso es: "<<miLibroCalificaciones.obtenerNombreCurso();
	cout<<"\n\tEscriba el nombre del curso: "; getline(cin, nombreDelCurso);
	miLibroCalificaciones.establecerNombreCurso(nombreDelCurso);
	miLibroCalificaciones.mostrarMensaje();

	return 0;
}
