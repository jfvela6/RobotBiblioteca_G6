#pragma once
using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class Microcontrolador {
	private:
		int idMicrocontrolador;
		int numeroDeSerie;
		int cantPines;
		String^ fabricante;
		String^ nombre;
		String^ datasheet;
	public:
		Microcontrolador();
		Microcontrolador(int idMicrocontrolador, int numeroDeSerie, int cantPines, String^ fabricante, String^ nombre, String^ datasheet);
		int getidMicrocontrolador();
		void setidMicrocontrolador(int idMicrocontrolador);
		int getNumeroDeSerie();
		void setNumeroDeSerie(int numeroDeSerie);
		int getCantPines();
		void setCantPines(int cantPines);
		String^ getFabricante();
		void setFabricante(String^ fabricante);
		String^ getnombre();
		void setnombre(String^ nombre);
		String^ getDatasheet();
		void setDatasheet(String^ datasheet);
	};
}