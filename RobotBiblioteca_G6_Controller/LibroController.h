#pragma once

namespace RobotBiblioteca_G6_Controller {

	using namespace System::Collections::Generic;
	using namespace RobotBiblioteca_G6_Model;
	using namespace System;


	public ref class LibroController {
	public:
		LibroController();
		List<Libro^>^ buscarLibrosxTitulo(String^ Titulo);
		void agregarNuevoLibro(int idlibro, String^ titulo, String^ categoria, String^ estado, int edicion, String^ reseña, String^ etiqueta, String^ autorLibro, String^ disponibilidad);
		void escribirArchivo(List<Libro^>^ listaLibros);
	};
}
