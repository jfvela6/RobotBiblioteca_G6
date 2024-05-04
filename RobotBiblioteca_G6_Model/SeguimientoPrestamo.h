#pragma once
#include "Usuario.h"

using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class SeguimientoPrestamo {
	private:
		int idSeguimientoPrestamo;
		int vencimientoPrestamoHoras;
		int renovacionPrestamoHoras;
		int numerodesolicitud;
		Usuario^ objUsuario;
	public:
		SeguimientoPrestamo();
		SeguimientoPrestamo(int idSeguimientoPrestamo, int vencimientoPrestamoHoras, int renovacionPrestamoHoras, String^ nombre, int numerodesolicitud, Usuario^ objUsuario);
		int getIdSeguimientoPrestamo();
		void setIdSeguimientoPrestamo(int idSeguimientoPrestamo);
		int getVencimientoPrestamoHoras();
		void setVencimientoPrestamoHoras(int vencimientoPrestamoHoras);
		int getRenovacionPrestamoHoras();
		void setRenovacionPrestamoHoras(int renovacionPrestamoHoras);
		int getnumerodesolicitud();
		void setnumerodesolicitud(int numerodesolicitud);
		Usuario^ getObjUsuario();
		void setObjUsuario(Usuario^ objUsuario);

	};
}