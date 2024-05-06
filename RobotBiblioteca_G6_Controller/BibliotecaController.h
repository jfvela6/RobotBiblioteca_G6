#pragma once

namespace RobotBiblioteca_G6_Controller {

	using namespace System::Collections::Generic;
	using namespace RobotBiblioteca_G6_Model;
	using namespace System;

	public ref class BibliotecaController {
	public:
		BibliotecaController();
		List<Biblioteca^>^ buscarBibliotecasxidBiblioteca(String^ idBiblioteca);
		List<Biblioteca^>^ buscarRegistrosAll();
		void agregarNuevaBiblioteca(int codigo, String^ direccion, String^ telefono, String^ cuenta, String^ DNI, String^ correo, String^ contraseña, String^ fecha, int idRegistro, int idIngreso);
		void escribirArchivo(List<Biblioteca^>^ listaBibliotecas);
	};

}
