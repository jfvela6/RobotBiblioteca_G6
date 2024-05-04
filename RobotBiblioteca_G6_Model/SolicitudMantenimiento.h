#pragma once
#include "Biblioteca.h"

using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class SolicitudMantenimiento {

	private:
		int idSolicitudMantenimiento;
		String^ idObjeto;
		String^ problema;
		String^ fecha;
		Biblioteca^ objBiblioteca;

	public:
		SolicitudMantenimiento();
		SolicitudMantenimiento(int idSolicitudMantenimiento, String^ idObjeto, String^ problema, String^ fecha, Biblioteca^ objBiblioteca);
	};

}