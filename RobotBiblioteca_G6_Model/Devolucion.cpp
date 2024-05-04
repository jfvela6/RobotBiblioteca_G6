#include "Devolucion.h"

using namespace RobotBiblioteca_G6_Model;

Devolucion::Devolucion() {

}

Devolucion::Devolucion(int idDevolucion, String^ estado, int restrasoMinutos, int tolerancia, int robot, Usuario^ objUsuario, Multa^ objMulta) {

	this->idDevolucion = idDevolucion;
	this->estado = estado;
	this->restrasoMinutos = restrasoMinutos;
	this->tolerancia = tolerancia;
	this->robot = robot;
	this->objUsuario = objUsuario;
	this->objMulta = objMulta;

}

// Propiedades GET - SET

int Devolucion::getIdDevolucion() {
	return this->idDevolucion;
}

void Devolucion::setIdDevolucion(int idDevolucion) {
	this->idDevolucion = idDevolucion;
}

String^ Devolucion::getEstado() {
	return this->estado;
}

void Devolucion::setEstado(String^ estado) {
	this->estado = estado;
}

int Devolucion::getRetrasoMinutos() {
	return this->restrasoMinutos;
}

void Devolucion::setRetrasoMinutos(int restrasoMinutos) {
	this->restrasoMinutos = restrasoMinutos;
}

int Devolucion::getTolerancia() {
	return this->tolerancia;
}

void Devolucion::setTolerancia(int tolerancia) {
	this->tolerancia = tolerancia;
}

int Devolucion::getRobot() {
	return this->robot;
}

void Devolucion::setRobot(int robot) {
	this->robot = robot;
}

Usuario^ Devolucion::getObjUsuario() {
	return this->objUsuario;
}

void Devolucion::setObjUsuario(Usuario^ objUsuario) {
	this->objUsuario = objUsuario;
}

Multa^ Devolucion::getObjMulta() {
	return this->objMulta;
}

void Devolucion::setObjMulta(Multa^ objMulta) {
	this->objMulta = objMulta;
}