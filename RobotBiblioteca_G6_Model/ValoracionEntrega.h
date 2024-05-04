#pragma once
#include "Usuario.h"

using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class ValoracionEntrega {

	private:
		int idValoracion;
		String^ comentario;
		int puntuacion;
		Usuario^ objUsuario;
	public:
		ValoracionEntrega();
		ValoracionEntrega(int idValoracion, String^ comentario, int puntuacion, Usuario^ objUsuario);

		//get set
		int getidValoracion();
		void setidValoracion(int idValoracion);
		String^ getcomentario();
		void setcomentraio(String^ comentario);
		int getpuntuacion();
		void setpuntuacion(int puntuacion);
		Usuario^ getObjUsuario();
		void setUsuario(Usuario^ objUsuario);
	};


}
