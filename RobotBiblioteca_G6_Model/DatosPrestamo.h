#pragma once

using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class DatosPrestamo {

	private:
		int idDatosP;
		int cantLibros;
		double pesoLibros;
		String^ fechaDevolucion;
		String^ horaDevolucion;
		String^ fechaEntrega;
		String^ horaEntrega;

	public:
		// Constructores
		DatosPrestamo();
		DatosPrestamo(int idDatosP, int cantLibros, double pesoLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega);

		// Propiedades GET - SET
		int getIdDatosP();
		void setIdDatosP(int idDatosP);

		int getCantLibros();
		void setCantLibros(int cantLibros);

		double getPesoLibros();
		void setPesoLibros(double pesoLibros);

		String^ getFechaDevolucion();
		void setFechaDevolucion(String^ fechaDevolucion);

		String^ getHoraDevolucion();
		void setHoraDevolucion(String^ horaDevolucion);

		String^ getFechaEntrega();
		void setFechaEntrega(String^ fechaEntrega);

		String^ getHoraEntrega();
		void setHoraEntrega(String^ horaEntrega);
	};

}