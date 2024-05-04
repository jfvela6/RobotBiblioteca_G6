#pragma once

#include "Biblioteca.h"
using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class Repositorio {

	private:
		int idRepositorio;
		String^ estante;
		String^ piso;
		String^ categoria;
		String^ autores;
		String^ etiqueta;

		Biblioteca^ objBiblioteca;

	public:
		Repositorio();
		Repositorio(int idRepositorio, String^ estante, String^ piso, String^ categoria, String^ autores, String^ etiqueta, Biblioteca^ objBiblioteca);

		int getIdRepositorio();
		void setIdRepositorio(int idRepositorio);

		String^ getEstante();
		void setEstante(String^ estante);

		String^ getPiso();
		void setPiso(String^ piso);

		String^ getCategoria();
		void setCategoria(String^ categoria);

		String^ getAutores();
		void setAutores(String^ autores);

		String^ getEtiqueta();
		void setEtiqueta(String^ etiqueta);

		Biblioteca^ getObjBiblioteca();
		void setObjBiblioteca(Biblioteca^ objBiblioteca);

	};

}

