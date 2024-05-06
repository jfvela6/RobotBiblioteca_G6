#pragma once
#include "Microcontrolador.h"

using namespace System;
namespace RobotBiblioteca_G6_Model {

	public ref class Robot {
	private:
		int idRobot;
		double velocidad;
		int bateria;
		String^ capacidadCarga;
		String^ dimensiones;
		Microcontrolador^ objMicrocontrolador;
	public:
		Robot();
		Robot(int idRobot, double velocidad, int bateria, String^ capacidadCarga, String^ dimensiones, Microcontrolador^ objMicrocontrolador);
		int getidRobot();
		void setidRobot(int idRobot);
		double getVelocidad();
		void setVelocidad(double velocidad);
		int getBateria();
		void setBateria(int bateria);
		String^ getCapacidadCarga();
		void setCapacidadCarga(String^ capacidadCarga);
		String^ getDimensiones();
		void setDimensiones(String^ dimensiones);
		Microcontrolador^ getObjMicrocontrolador();
		void setObjMicrocontrolador(Microcontrolador^ objMicrocontrolador);

	};

}
