#pragma once
#include "Usuario.h"

using namespace System;

namespace RobotBiblioteca_G6_Model {

	public ref class Notificacion {

	private:
		int idNotificacion;
		String^ asunto;
		String^ mensaje;
		String^ fecha;
		String^ hora;
		Usuario^ objUsuario;

	public:
		Notificacion();
		Notificacion(int idNotificacion, String^ asunto, String^ mensaje, String^ fecha, String^ hora, Usuario^ objUsuario);

		int getIdNotificacion();
		void setIdNotificacion(int idNotificacion);

		String^ getAsunto();
		void setAsunto(String^ asunto);

		String^ getMensaje();
		void setMensaje(String^ mensaje);

		String^ getFechaNotificacion();
		void setFechaNotificacion(String^ fecha);

		String^ getHoraNotificacion();
		void setHoraNotificacion(String^ hora);

		Usuario^ getObjUsuario();
		void setObjUsuario(Usuario^ objUsuario);

	};

}