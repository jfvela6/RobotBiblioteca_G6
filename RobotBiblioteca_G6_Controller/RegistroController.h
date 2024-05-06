#pragma once

namespace RobotBiblioteca_G6_Controller {

	using namespace System::Collections::Generic;
	using namespace RobotBiblioteca_G6_Model;
	using namespace System;

	public ref class RegistroController {
	public:
		RegistroController();
		List<Registro^>^ buscarRegistrosxCuenta(String^ cuentaRegistro);
		List<Registro^>^ buscarRegistrosAll();
		void agregarNuevoRegistro(int codigo, String^ direccion, String^ telefono, String^ cuenta, String^ DNI, String^ correo, String^ contraseña, String^ fecha, int idRegistro, int idIngreso);
		void escribirArchivo(List<Registro^>^ listaRegistros);
	};
	
}
