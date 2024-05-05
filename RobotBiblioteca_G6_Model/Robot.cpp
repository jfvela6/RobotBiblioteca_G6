#include "Robot.h"
#include "Microcontrolador.h"

using namespace RobotBiblioteca_G6_Model;
using namespace System;

Robot::Robot() {

}
Robot::Robot(int idRobot, double velocidad, int bateria, double capacidadCarga, String^ dimensiones, Microcontrolador^ objMicrocontrolador) {
	this->idRobot = idRobot;
	this->velocidad = velocidad;
	this->bateria = bateria;
	this->capacidadCarga = capacidadCarga;
	this->dimensiones = dimensiones;
	this->objMicrocontrolador = objMicrocontrolador;
}
int Robot::getidRobot() {
	return this->idRobot;
}
void Robot::setidRobot(int idRobot) {
	this->idRobot = idRobot;
}
double Robot::getVelocidad() {
	return this->idRobot;
}
void Robot::setVelocidad(double velocidad) {
	this->velocidad = velocidad;
}
int Robot::getBateria() {
	return this->bateria;
}
void Robot::setBateria(int bateria) {
	this->bateria = bateria;
}
double Robot::getCapacidadCarga() {
	return this->capacidadCarga;
}
void Robot::setCapacidadCarga(double capacidadCarga) {
	this->capacidadCarga = capacidadCarga;
}
String^ Robot::getDimensiones() {
	return this->dimensiones;
}
void Robot::setDimensiones(String^ dimensiones) {
	this->dimensiones = dimensiones;
}
Microcontrolador^ Robot::getObjMicrocontrolador() {
	return this->objMicrocontrolador;
}
void Robot::setObjMicrocontrolador(Microcontrolador^ objMicrocontrolador) {
	this->objMicrocontrolador = objMicrocontrolador;
}