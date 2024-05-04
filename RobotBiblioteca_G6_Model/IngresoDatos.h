#pragma once

using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class IngresoDatos {

	private:
		int idIngreso;
		int codigo;
		String^ correo;
		String^ cuenta;
		String^ telefono;

	public:
		IngresoDatos();
		IngresoDatos(int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono);

		int getIdIngreso();
		void setIdIngreso(int idIngreso);

		int getCodigo();
		void setCodigo(int codigo);

		String^ getCorreo();
		void setCorreo(String^ correo);

		String^ getCuenta();
		void setCuenta(String^ cuenta);

		String^ getTelefono();
		void setTelefono(String^ telefono);

	};


}