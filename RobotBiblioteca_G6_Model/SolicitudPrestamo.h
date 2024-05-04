#pragma once
#include "DatosPrestamo.h"
#include "ValidacionSolicitud.h"
#include "Libro.h"
#include "DetalleEntrega.h"

using namespace System;
using namespace System::Collections::Generic;


namespace RobotBiblioteca_G6_Model {

	public ref class SolicitudPrestamo : DatosPrestamo {
	private:
		int idSolicitudP;
		int numeroSolicitud;
		int diasPrestamo;
		ValidacionSolicitud^ objValidacionSolicitud;
		List<DetalleEntrega^>^ listaDetalle;
		
	public:
		SolicitudPrestamo();
		SolicitudPrestamo(int idSolicitudP, int cantLibros, double pesoLibros, int idDatosP, int numeroSolicitud, int diasPrestamo, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega, ValidacionSolicitud^ objValidacionSolicitud,  List<DetalleEntrega^>^ listaDetalle);

		// GET - SET


		int getIdSolicitudP();
		void setIdSolicitudP(int idSolicitudP);

		int getNumeroSolicitud();
		void setNumeroSolicitud(int numeroSolicitud);

		int getDiasPrestamo();
		void setDiasPrestamo(int diasPrestamo);

		ValidacionSolicitud^ getObjValidacionSolicitud();
		void setObjValidacionSolicitud(ValidacionSolicitud^ objValidacionSolicitud);
			   

		/*

		int getCantLibros();
		void setCantLibros(int cantLibros);

		int getPesoLibros();
		void setPesoLibros(int pesoLibros);



		int getIdDatosP();
		void setIdDatosP(int idDatosP);



		String^ getFechaDevolucion();
		void setFechaDevolucion(String^ fechaDevolucion);

		String^ getHoraDevolucion();
		void setHoraDevolucion(String^ horaDevolucion);

		String^ getFechaEntrega();
		void setFechaEntrega(String^ fechaEntrega);

		String^ getHoraEntrega();
		void setHoraEntrega(String^ horaEntrega);*/

	};

}

