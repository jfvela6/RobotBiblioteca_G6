#include "Multa.h"

using namespace RobotBiblioteca_G6_Model;


Multa::Multa() {

}

Multa::Multa(int idMulta, String^ motivo, double montoSoles, Usuario^ objUsuario) {

	this->idMulta = idMulta;
	this->motivo = motivo;
	this->montoSoles = montoSoles;
	this->objUsuario = objUsuario;

}

// GET - SET

int Multa::getIdMulta() {
	return this->idMulta;
}

void Multa::setIdMulta(int idMulta) {
	this->idMulta = idMulta;
}

String^ Multa::getMotivo() {
	return this->motivo;
}

void Multa::setMotivo(String^ motivo) {
	this->motivo = motivo;
}

double Multa::getMontoSoles() {
	return this->montoSoles;
}

void Multa::setMontoSoles(double montoSoles) {
	this->montoSoles = montoSoles;
}

Usuario^ Multa::getObjUsuario() {
	return this->objUsuario;
}

void Multa::setObjUsuario(Usuario^ objUsuario) {
	this->objUsuario = objUsuario;
}