#pragma once

#include "Biblioteca.h"
#include "SolicitudPrestamo.h"
#include "Mantenimiento.h"

using namespace System;
using namespace System::Collections::Generic;


namespace RobotBiblioteca_G6_Model {

	public ref class Libro {

	private:
		int idLibro;
		String^ titulo;
		String^ categoria;
		String^ estado;
		int edicion;
		String^ reseña;
		String^ etiqueta;
		String^ autorlibro;
		String^ disponibilidad;
		Biblioteca^ objBiblioteca;
		List<Mantenimiento^>^ listaMantenimiento;


	public:
		Libro();
		Libro(int idLibro, String^ titulo, String^ categoria, String^ estado, int edicion, String^ reseña, String^ etiqueta, String^ autorlibro, String^ disponibilidad, Biblioteca^ objBiblioteca,  List<Mantenimiento^>^ listaMantenimiento);

		int getIdLibro();
		void setIdLibro(int idLibro);
		String^ getTitulo();
		void setTitulo(String^ titulo);
		String^ getcategoria();
		void setcategoria(String^ categoria);
		String^ getEstado();
		void setEstado(String^ estado);
		int getEdicion();
		void setEdicion(int edicion);
		String^ getReseña();
		void setReseña(String^ reseña);
		String^ getEtiqueta();
		void setEtiqueta(String^ etiqueta);
		String^ getAutorlibro();
		void setAutorlibro(String^ autorlibro);
		String^ getDisponibilidad();
		void setDisponibilidad(String^ disponibilidad);
		Biblioteca^ getObjBiblioteca();
		void setObjBiblioteca(Biblioteca^ objBiblioteca);

	};

}