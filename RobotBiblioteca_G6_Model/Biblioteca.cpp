#include "Biblioteca.h"

using namespace RobotBiblioteca_G6_Model;

Biblioteca::Biblioteca() {

}

Biblioteca::Biblioteca(int idBiblioteca, String^ direccion, String^ nombre, String^ horarioAtencion, String^ registrosPrestamo) {
	this->idBiblioteca = idBiblioteca;
	this->direccion = direccion;
	this->nombre = nombre;
	this->horarioAtencion = horarioAtencion;
	this->registrosPrestamo = registrosPrestamo;
}


int Biblioteca::getIdBiblioteca() {
	return this->idBiblioteca;
}
void Biblioteca::setIdBiblioteca(int idBiblioteca) {
	this->idBiblioteca = idBiblioteca;
}

String^ Biblioteca::getDireccion() {
	return this->direccion;
}
void Biblioteca::setDireccion(String^ direccion) {
	this->direccion = direccion;
}


String^ Biblioteca::getNombre() {
	return this->nombre;
}
void Biblioteca::setNombre(String^ nombre) {
	this->nombre = nombre;
}

String^ Biblioteca::getHorarioAtencion() {
	return this->horarioAtencion;
}
void Biblioteca::setHorarioAtencion(String^ horarioAtencion) {
	this->horarioAtencion = horarioAtencion;
}

String^ Biblioteca::getRegistrosPrestamo() {
	return this->registrosPrestamo;
}
void Biblioteca::setRegistrosPrestamo(String^ registrosPrestamo) {
	this->registrosPrestamo = registrosPrestamo;
}