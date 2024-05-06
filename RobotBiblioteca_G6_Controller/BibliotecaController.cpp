#include "BibliotecaController.h"

using namespace RobotBiblioteca_G6_Controller;
using namespace System::IO;
using namespace RobotBiblioteca_G6_Model;

BibliotecaController::BibliotecaController() {

}

List<Biblioteca^>^ BibliotecaController::buscarBibliotecasxidBiblioteca(String^ idBiblioteca) {

	List<Biblioteca^>^ listaBibliotecas = gcnew List<Biblioteca^>();
	array<String^>^ lineas = File::ReadAllLines("Bibliotecas.txt");

	String^ separadores = ";"; //Caracter de separación en el archivo texto
	for each (String ^ lineaBiblioteca in lineas) {

		array<String^>^ datos = lineaBiblioteca->Split(separadores->ToCharArray()); // Separación de los datos

		int idBiblioteca = Convert::ToInt32(datos[0]);
		String^ direccion = datos[1];
		String^ nombre = datos[2];
		String^ horarioAtencion = datos[3];
		String^ resgistrosPrestamo = datos[4];

		if (idBiblioteca->CompareTo(idBiblioteca) == 0) {
			Biblioteca^ objBiblioteca = gcnew Biblioteca(idBiblioteca, direccion, nombre, horarioAtencion, registrosPrestamo);
			listaBibliotecas->Add(objBiblioteca);
		}
	}
	return listaBibliotecas;
}

List<Biblioteca^>^ BibliotecaController::buscarBibliotecasAll() {

	List<Biblioteca^>^ listaBibliotecas = gcnew List<Biblioteca^>();
	array<String^>^ lineas = File::ReadAllLines("Bibliotecas.txt");

	String^ separadores = ";"; //Caracter de separación en el archivo texto
	for each (String ^ lineaBiblioteca in lineas) {

		array<String^>^ datos = lineaBiblioteca->Split(separadores->ToCharArray()); // Separación de los datos

		int idBiblioteca = Convert::ToInt32(datos[0]);
		String^ direccion = datos[1];
		String^ nombre = datos[2];
		String^ horarioAtencion = datos[3];
		String^ resgistrosPrestamo = datos[4];
		listaBibliotecas->Add(objBiblioteca);
	}
	return listaBibliotecas;
}

void BibliotecaController::agregarNuevoLibro(int idBiblioteca, String^ direccion, String^ nombre, String^ horarioAtencion, String^ registrosPrestamo) {
	List<Biblioteca^>^ listaBibliotecas = buscarBibliotecasAll();
	Libro^ objBibliotecaNuevo = gcnew Biblioteca(idBiblioteca, direccion, nombre, horarioAtencion, registrosPrestamo);
	listaBibliotecas->Add(objBibliotecaNuevo);
	escribirArchivo(listaBibliotecas);
}

void BibliotecaController::escribirArchivo(List<Biblioteca^>^ listaBibliotecas) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaBibliotecas->Count);
	for (int i = 0; i < listaBibliotecas->Count; i++) {
		Biblioteca^ objBiblioteca = listaBibliotecas[i];
		lineasArchivo[i] = Convert::ToString(objBiblioteca->IdBiblioteca) + ";" +objBiblioteca->Direccion + ";" + objBiblioteca->Nombre + ";" +objBiblioteca->horarioAtencion + ";" +objBiblioteca->registrosPrestamo; 
	}
	File::WriteAllLines("Bibliotecas.txt", lineasArchivo);
}