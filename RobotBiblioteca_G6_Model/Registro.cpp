#include "Registro.h"

using namespace RobotBiblioteca_G6_Model;

Registro::Registro(): IngresoDatos() {

}

Registro::Registro(int idRegistro, String^ direccion, String^ DNI, String^ contraseña, String^ fecha, int codigo, String^ correo, String^ cuenta, String^ telefono,int idIngreso) : IngresoDatos(idIngreso,codigo, correo, cuenta, telefono) {

	this->idRegistro = idRegistro;
	this->direccion = direccion;
	this->DNI = DNI;
	this->contraseña = contraseña;
	this->fecha = fecha;
}



int Registro::getIdRegistro() {
	return this->idRegistro;
}
void Registro::setIdRegistro(int idRegistro) {
	this->idRegistro = idRegistro;
}

String^ Registro::getDireccion() {
	return this->direccion;
}

void Registro::setDireccion(String^ direccion) {
	this->direccion = direccion;
}

String^ Registro::getDNI() {
	return this->DNI;
}

void Registro::setDNI(String^ DNI) {
	this->DNI = DNI;
}

String^ Registro::getContraseña() {
	return this->contraseña;
}

void Registro::setContraseña(String^ contraseña) {
	this->contraseña = contraseña;
}

String^ Registro::getFecha() {
	return this->fecha;
}

void Registro::setFecha(String^ fecha) {
	this->fecha = fecha;
}
