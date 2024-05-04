#pragma once

#include "Biblioteca.h"
using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class Biblioteca {

	private:
		int idBiblioteca;
		String^ direccion;
		String^ nombre;
		String^ horarioAtencion;
		String^ registrosPrestamo;

	public:
		Biblioteca();
		Biblioteca(int idBiblioteca, String^ direccion, String^ nombre, String^ horarioAtencion, String^ registrosPrestamo);

		int getIdBiblioteca();
		void setIdBiblioteca(int idBiblioteca);

		String^ getDireccion();
		void setDireccion(String^ direccion);

		String^ getNombre();
		void setNombre(String^ nombre);

		String^ getHorarioAtencion();
		void setHorarioAtencion(String^ horarioAtencion);

		String^ getRegistrosPrestamo();
		void setRegistrosPrestamo(String^ registrosPrestamo);

	};

}