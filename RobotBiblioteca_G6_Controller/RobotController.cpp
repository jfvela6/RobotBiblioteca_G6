#include "RobotController.h"

using namespace RobotBiblioteca_G6_Controller;
using namespace System::IO;//habilita trabajo con .txt	

RobotController::RobotController() {

}
List<Robot^>^ RobotController::buscarRobotxCapacidadCarga(String^ robotCapacidadCarga) {
	array<String^>^ lineas = File::ReadAllLines("ReposDatumRobots.txt");
	String^ separadores = ";";//se define el char q separa de un string a otro
	for each (String^ lineaRobot in lineas) {
		array<String^>^ datos = lineaRobot->Split(separadores->ToCharArray());
		int idRobot = Convert::ToInt32(datos[0]);
		double velocidad = Convert::ToDouble(datos[1]);
		int bateria = Convert::ToInt32(datos[2]);
		String^ capacidadCarga = datos[3];
		String^ dimensiones = datos[4];
		String^ NombreMicro = datos[5];
		Microcontrolador^ objMicrocontrolador;
		if (String::Compare(robotCapacidadCarga, capacidadCarga) > 0) {
			Robot^ objRobot = gcnew Robot(idRobot, velocidad, bateria, capacidadCarga, dimensiones, objMicrocontrolador);
		}
	}
}
