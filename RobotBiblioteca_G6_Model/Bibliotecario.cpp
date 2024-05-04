#include "Bibliotecario.h"

using namespace RobotBiblioteca_G6_Model;

Bibliotecario::Bibliotecario() {

}

Bibliotecario::Bibliotecario(int idBibliotecario, String^ nombre, String^ disponibilidad, Biblioteca^ objBiblioteca) {
	this->idBibliotecario = idBibliotecario;
	this->nombre = nombre;
	this->disponibilidad = disponibilidad;
	this->objBiblioteca = objBiblioteca;
}


int Bibliotecario::getIdBibliotecario() {
	return this->idBibliotecario;
}
void Bibliotecario::setIdBibliotecario(int idBibliotecario) {
	this->idBibliotecario = idBibliotecario;
}

String^ Bibliotecario::getNombre() {
	return this->nombre;
}
void Bibliotecario::setNombre(String^ nombre) {
	this->nombre = nombre;
}

String^ Bibliotecario::getDisponibilidad() {
	return this->disponibilidad;
}
void Bibliotecario::setDisponibilidad(String^ disponibilidad) {
	this->disponibilidad = disponibilidad;
}

Biblioteca^ Bibliotecario::getObjBiblioteca() {
	return this->objBiblioteca;
}
void Bibliotecario::setObjBiblioteca(Biblioteca^ objBiblioteca) {
	this->objBiblioteca = objBiblioteca;
}