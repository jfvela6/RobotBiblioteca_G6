#include "ValidacionSolicitud.h"

using namespace RobotBiblioteca_G6_Model;

ValidacionSolicitud::ValidacionSolicitud() {

}

ValidacionSolicitud::ValidacionSolicitud(int idValidacionSolicitud, String^ fechaValidacionSolicitud, String^ horaValidacionSolicitud, int pesoLibros) {

	this->idValidacionSolicitud = idValidacionSolicitud;
	this->fechaValidacionSolicitud = fechaValidacionSolicitud;
	this->horaValidacionSolicitud = horaValidacionSolicitud;
	this->pesoLibros = pesoLibros;

}
// SET - GET 

int ValidacionSolicitud::getIdValidacionSolicitud() {
	return this->idValidacionSolicitud;
}

void ValidacionSolicitud::setIdValidacionSolicitud(int idValidacionSolicitud) {
	this->idValidacionSolicitud = idValidacionSolicitud;
}

String^ ValidacionSolicitud::getFechaValidacionSolicitud() {
	return this->fechaValidacionSolicitud;
}

void ValidacionSolicitud::setFechaValidacionSolicitud(String^ fechaValidacionSolicitud) {
	this->fechaValidacionSolicitud = fechaValidacionSolicitud;
}

String^ ValidacionSolicitud::getHoraValidacionSolicitud() {
	return this->horaValidacionSolicitud;
}

void ValidacionSolicitud::setHoraValidacionSolicitud(String^ horaValidacionSolicitud) {
	this->horaValidacionSolicitud = horaValidacionSolicitud;
}

int ValidacionSolicitud::getPesoLibros() {
	return this->pesoLibros;
}

void ValidacionSolicitud::setPesoLibros(int pesoLibros) {
	this->pesoLibros = pesoLibros;
}