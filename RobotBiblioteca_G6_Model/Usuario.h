#pragma once
#include "IngresoDatos.h"

using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class Usuario : IngresoDatos {
	private:
		int idUsuario;
		String^ direccion;
		String^ estado;

	public:
		Usuario();
		Usuario(int idUsuario, String^ direccion, String^ estado, int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono);

		int getIdUsuario();
		void setIdUsuario(int idUsuario);

		String^ getDireccion();
		void setDireccion(String^ direccion);

		String^ getEstado();
		void setEstado(String^ estado);

	};
}