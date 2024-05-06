#include "LibroController.h"

using namespace RobotBiblioteca_G6_Controller;
using namespace System::IO;
using namespace RobotBiblioteca_G6_Model;

LibroController::LibroController() {

}

List<Libro^>^ LibroController::buscarLibrosxTitulo(String^ Titulo) {

	List<Libro^>^ listaLibros = gcnew List<Libro^>();
	array<String^>^ lineas = File::ReadAllLines("Libros.txt");

	String^ separadores = ";"; //Caracter de separación en el archivo texto
	for each (String ^ lineaLibro in lineas) {

		array<String^>^ datos = lineaLibro->Split(separadores->ToCharArray()); // Separación de los datos

		int idLibro = Convert::ToInt32(datos[0]);
		String^ titulo = datos[1];
		String^ categoria = datos[2];
		String^ estado = datos[3];
		int edicion = Convert::ToInt32(datos[4]);
		String^ reseña = datos[5];
		String^ etiqueta = datos[6];
		String^ autorLibro = datos[7];
		String^ disponibilidad = datos[8];

		if (titulo->CompareTo(Titulo) == 0) {
			Libro^ objLibro = gcnew Libro(idLibro, titulo, categoria, estado, edicion, reseña, etiqueta, autorLibro, disponibilidad);
			listaLibros->Add(objLibro);
		}
	}
	return listaLibros;
}

List<Libro^>^ LibroController::buscarLibrosAll() {

	List<Libro^>^ listaLibros = gcnew List<Libro^>();
	array<String^>^ lineas = File::ReadAllLines("Libros.txt");

	String^ separadores = ";"; //Caracter de separación en el archivo texto
	for each (String ^ lineaLibro in lineas) {

		array<String^>^ datos = lineaLibro->Split(separadores->ToCharArray()); // Separación de los datos

		int idLibro = Convert::ToInt32(datos[0]);
		String^ titulo = datos[1];
		String^ categoria = datos[2];
		String^ estado = datos[3];
		int edicion = Convert::ToInt32(datos[4]);
		String^ reseña = datos[5];
		String^ etiqueta = datos[6];
		String^ autorLibro = datos[7];
		String^ disponibilidad = datos[8];
		Libro^ objLibro = gcnew Libro(idLibro, titulo, categoria, estado, edicion, reseña, etiqueta, autorLibro, disponibilidad);
		listaLibros->Add(objLibro);
	}
	return listaLibros;
}

void LibroController::agregarNuevoLibro(int idlibro, String^ titulo, String^ categoria, String^ estado, int edicion, String^ reseña, String^ etiqueta, String^ autorLibro, String^ disponibilidad) {
	List<Libro^>^ listaLibros = buscarLibrosAll();
	Libro^ objLibroNuevo = gcnew Libro(idlibro, titulo, categoria, estado, edicion, reseña, etiqueta, autorLibro, disponibilidad);
	listaLibros->Add(objLibroNuevo);
	escribirArchivo(listaLibros);
}

void LibroController::escribirArchivo(List<Libro^>^ listaLibros) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaLibros->Count);
	for (int i = 0; i < listaLibros->Count; i++) {
		Libro^ objLibro = listaLibros[i];
		lineasArchivo[i] = Convert::ToString(objLibro->IdLibro) + ";" + objLibro->Titulo + ";" + objLibro->Categoria + ";" + objLibro->Estado + ";" + Convert::ToString(objLibro->Edicion) + ";" + objLibro->Resena + ";" + objLibro->Etiqueta + ";" + objLibro->AutorLibro + ";" + objLibro->Disponibilidad;
	}
	File::WriteAllLines("Libros.txt", lineasArchivo);
}