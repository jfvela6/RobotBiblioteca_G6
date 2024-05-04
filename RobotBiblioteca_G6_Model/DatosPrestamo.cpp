#include "DatosPrestamo.h"
//

using namespace RobotBiblioteca_G6_Model;

DatosPrestamo::DatosPrestamo() {

}

DatosPrestamo::DatosPrestamo(int idDatosP, int cantLibros, double pesoLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega) {

	this->idDatosP = idDatosP;
	this->cantLibros = cantLibros;
	this->pesoLibros = pesoLibros;
	this->fechaDevolucion = fechaDevolucion;
	this->horaDevolucion = horaDevolucion;
	this->fechaEntrega = fechaEntrega;
	this->horaEntrega = horaEntrega;

}

// Propiedades GET - SET
int DatosPrestamo::getIdDatosP() {
	return this->idDatosP;
}

void DatosPrestamo::setIdDatosP(int idDatosP) {
	this->idDatosP = idDatosP;
}

int DatosPrestamo::getCantLibros() {
	return this->cantLibros;
}

void DatosPrestamo::setCantLibros(int cantLibros) {
	this->cantLibros = cantLibros;
}

double DatosPrestamo::getPesoLibros() {
	return this->pesoLibros;
}

void DatosPrestamo::setPesoLibros(double pesoLibros) {
	this->pesoLibros = pesoLibros;
}


String^ DatosPrestamo::getFechaDevolucion() {
	return this->fechaDevolucion;
}

void DatosPrestamo::setFechaDevolucion(String^ fechaDevolucion) {
	this->fechaDevolucion = fechaDevolucion;
}

String^ DatosPrestamo::getHoraDevolucion() {
	return this->horaDevolucion;
}

void DatosPrestamo::setHoraDevolucion(String^ horaDevolucion) {
	this->horaDevolucion = horaDevolucion;
}

String^ DatosPrestamo::getFechaEntrega() {
	return this->fechaEntrega;
}

void DatosPrestamo::setFechaEntrega(String^ fechaEntrega) {
	this->fechaEntrega = fechaEntrega;
}

String^ DatosPrestamo::getHoraEntrega() {
	return this->horaEntrega;
}

void DatosPrestamo::setHoraEntrega(String^ horaEntrega) {
	this->horaEntrega = horaEntrega;
}