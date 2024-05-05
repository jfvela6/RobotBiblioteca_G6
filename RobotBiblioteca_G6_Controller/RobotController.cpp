#include "RobotController.h"

using namespace RobotBiblioteca_G6_Controller;
using namespace System::IO;//habilita trabajo con .txt	

RobotController::RobotController() {

}
List<Robot^>^ RobotController::buscarRobotxCapacidadCarga(String^ capacidadCarga) {
	array<String^>^ lineas = File::ReadAllLines("ReposDatumRobots.txt");
	String^ separadores = ";";//se define el char q separa de un string a otro
	for each (String^ lineaRobot in lineas) {
		array<String^>^ datos = lineaRobot->Split(separadores->ToCharArray());
	}
}
