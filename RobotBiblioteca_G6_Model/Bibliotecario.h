#pragma once
#include "Biblioteca.h"
using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class Bibliotecario {

	private:
		int idBibliotecario;
		String^ nombre;
		String^ disponibilidad;
		Biblioteca^ objBiblioteca;

	public:
		Bibliotecario();
		Bibliotecario(int idBibliotecario, String^ nombre, String^ disponibilidad, Biblioteca^ objBiblioteca);

		int getIdBibliotecario();
		void setIdBibliotecario(int idBibliotecario);

		String^ getNombre();
		void setNombre(String^ nombre);

		String^ getDisponibilidad();
		void setDisponibilidad(String^ disponibilidad);

		Biblioteca^ getObjBiblioteca();
		void setObjBiblioteca(Biblioteca^ objBiblioteca);

	};

}
