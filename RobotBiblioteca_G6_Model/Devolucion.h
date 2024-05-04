#pragma once
#include "Usuario.h"
#include "Multa.h"

using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class Devolucion {

	private:

		int idDevolucion;
		String^ estado;
		int restrasoMinutos;
		int tolerancia;
		int robot;
		Usuario^ objUsuario;
		Multa^ objMulta;

	public:

		Devolucion();
		Devolucion(int idDevolucion, String^ estado, int restrasoMinutos, int tolerancia, int robot, Usuario^ objUsuario, Multa^ objMulta);

		// Propiedades GET - SET

		int getIdDevolucion();
		void setIdDevolucion(int idDevolucion);

		String^ getEstado();
		void setEstado(String^ estado);

		int getRetrasoMinutos();
		void setRetrasoMinutos(int restrasoMinutos);

		int getTolerancia();
		void setTolerancia(int tolerancia);

		int getRobot();
		void setRobot(int robot);

		Usuario^ getObjUsuario();
		void setObjUsuario(Usuario^ objUsuario);

		Multa^ getObjMulta();
		void setObjMulta(Multa^ objMulta);
	};
}