#pragma once
#include "Usuario.h"

using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class Multa {

	private:

		int idMulta;
		String^ motivo;
		double montoSoles;
		Usuario^ objUsuario;

	public:

		Multa();
		Multa(int idMulta, String^ motivo, double montoSoles, Usuario^ objUsuario);

		// GET - SET

		int getIdMulta();
		void setIdMulta(int idMulta);

		String^ getMotivo();
		void setMotivo(String^ motivo);

		double getMontoSoles();
		void setMontoSoles(double montoSoles);

		Usuario^ getObjUsuario();
		void setObjUsuario(Usuario^ objUsuario);

	};

}