#include "RobotController.h"

using namespace RobotBiblioteca_G6_Controller;
using namespace System::IO;//habilita trabajo con .txt	

RobotController::RobotController() {

}
List<Robot^>^ RobotController::buscarRobotxCapacidadCarga(String^ robotCapacidadCarga) {
	List<Robot^>^ listaRobots = gcnew List<Robot^>();
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
		if (capacidadCarga->CompareTo(robotCapacidadCarga)==0) {
			Robot^ objRobot = gcnew Robot(idRobot, velocidad, bateria, capacidadCarga, dimensiones, objMicrocontrolador);
			listaRobots->Add(objRobot);
		}
	}
	return listaRobots;
}
List<Robot^>^ RobotController::buscarRobotAll() {
	List<Robot^>^ listaRobots = gcnew List<Robot^>();
	array<String^>^ lineas = File::ReadAllLines("ReposDatumRobots.txt");
	String^ separadores = ";";//se define el char q separa de un string a otro
	for each (String ^ lineaRobot in lineas) {
		array<String^>^ datos = lineaRobot->Split(separadores->ToCharArray());
		int idRobot = Convert::ToInt32(datos[0]);
		double velocidad = Convert::ToDouble(datos[1]);
		int bateria = Convert::ToInt32(datos[2]);
		String^ capacidadCarga = datos[3];
		String^ dimensiones = datos[4];
		String^ NombreMicro = datos[5];
		Microcontrolador^ objMicrocontrolador;
	}
	return listaRobots;
}
void RobotController::agregarNuevoRobot(int idRobot, double velocidad, int bateria, String^ capacidadCarga, String^ dimensiones, Microcontrolador^ objMicrocontrolador) {
	List<Robot^>^ listaRobots = buscarRobotAll();
	Robot^ objRobotNuevo = gcnew Robot(idRobot,velocidad,bateria,capacidadCarga,dimensiones,objMicrocontrolador);
	listaRobots->Add(objRobotNuevo);
	escribirArchivo(listaRobots);
}
void RobotController::escribirArchivo(List<Robot^>^ listaRobots) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaRobots->Count);
	for (int i = 0; i < listaRobots->Count; i++) {
		Robot^ objRobot = listaRobots[i];
		lineasArchivo[i] = Convert::ToString(objRobot->getidRobot()) + ";" + Convert::ToString(objRobot->getVelocidad()) + ";" + Convert::ToString(objRobot->getBateria()) + ";" + Convert::ToString(objRobot->getCapacidadCarga()) + ";" + objRobot->getDimensiones() + ";" + Convert::ToString(objRobot->getObjMicrocontrolador());
	}
	File::WriteAllLines("ReposDatumRobots.txt", lineasArchivo);
}