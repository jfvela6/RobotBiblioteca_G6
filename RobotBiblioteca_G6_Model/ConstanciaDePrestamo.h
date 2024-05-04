#pragma once

#include "DatosPrestamo.h"
#include "Usuario.h"

using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class ConstanciaDePrestamo :DatosPrestamo {
	private:
		int idConstancia;
		int idlibros;
		Usuario^ objUsuario;

	public:

		//Constructores
		ConstanciaDePrestamo();
		ConstanciaDePrestamo(int idConstancia, int idlibros, Usuario^ objUsuario, int idDatosPrestamo, int cantLibros, double pesoLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega);

		//Propiedades GET SET
		int getIdConstancia();
		void setIdConstancia(int idConstancia);

		int getIdlibros();
		void setIdlibros(int idlibros);

		Usuario^ getObjUsuario();
		void setObjUsuario(Usuario^ objUsuario);

	};

}