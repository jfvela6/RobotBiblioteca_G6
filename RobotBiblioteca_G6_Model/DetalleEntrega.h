#pragma once
#include "Robot.h"
#include "ConstanciaDePrestamo.h"
#include "ValoracionEntrega.h"
#include "SeguimientoPrestamo.h"

using namespace System;

namespace RobotBiblioteca_G6_Model {
	public ref class DetalleEntrega {
	private:
		int idEntrega;
		String^ declaracionPrestamo;
		String^ ubicacionCampus;
		SeguimientoPrestamo^ objSeguimiento;
		ValoracionEntrega^ objValoracionEntrega;
		Robot^ objRobot;
		ConstanciaDePrestamo^ objConstanciaDePrestamo;
	public:
		//BobsConstructor
		DetalleEntrega();
		DetalleEntrega(int idEntrega, String^ declaracionPrestamo, String^ ubicacionCampus, SeguimientoPrestamo^ objSeguimiento, ValoracionEntrega^ objValoracionEntrega, Robot^ objRobot, ConstanciaDePrestamo^ objConstanciaDePrestamo);
		//Get(ObtenerValor) - Set (DarValor)
		//idEntrega
		int getidEntrega();
		void setidEntrega(int idEntrega);
		//DeclaracionPrestamo
		String^ getDeclaracionPrestamo();
		void setDeclaracionPrestamo(String^ declaracionPrestamo);
		//UbicacionCampus
		String^ getUbicacionCampus();
		void setUbicacionCampus(String^ ubicacionCampus);
		//ObjSeguimiento
		SeguimientoPrestamo^ getObjSeguimiento();
		void setObjSeguimiento(SeguimientoPrestamo^ objSeguimiento);
		//ObjValoracion
		ValoracionEntrega^ getObjValoracion();
		void setObjValoracion(ValoracionEntrega^ objValoracionEntrega);
		//ObjRobot
		Robot^ getObjRobot();
		void setObjRobot(Robot^ objRobot);
		//ConstanciaDePrestamo
		ConstanciaDePrestamo^ getConstanciaDePrestamo();
		void setObjConstanciaDePrestamo(ConstanciaDePrestamo^ objConstanciaDePrestamo);

	};
}