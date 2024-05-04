#include "SolicitudPrestamo.h"

using namespace RobotBiblioteca_G6_Model;

SolicitudPrestamo::SolicitudPrestamo() : DatosPrestamo() {

}


SolicitudPrestamo::SolicitudPrestamo(int idSolicitudP, int cantLibros, double pesoLibros, int idDatosP, int numeroSolicitud, int diasPrestamo, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega, ValidacionSolicitud^ objValidacionSolicitud, List<DetalleEntrega^>^ listaDetalle) : DatosPrestamo(idDatosP, cantLibros, pesoLibros, fechaDevolucion, horaDevolucion, fechaEntrega, horaEntrega) {
	this->idSolicitudP = idSolicitudP;
	this->numeroSolicitud = numeroSolicitud;
	this->diasPrestamo = diasPrestamo;
	this->objValidacionSolicitud = objValidacionSolicitud;
	this->listaDetalle = listaDetalle;
}

// GET - SET
/*
DetalleEntrega^ SolicitudPrestamo::getObjDetalleEntrega() {
	return this->objDetalleEntrega;
}

void SolicitudPrestamo::setObjDetalleEntrega(DetalleEntrega^ objDetalleEntrega) {
	this->objDetalleEntrega = objDetalleEntrega;
}


int SolicitudPrestamo::getCantLibros() {
	return this->cantLibros;
}

void SolicitudPrestamo::setCantLibros(int cantLibros) {
	this->cantLibros = cantLibros;
}

int SolicitudPrestamo::getPesoLibros() {
	return this->pesoLibros;
}

void SolicitudPrestamo::setPesoLibros(int pesoLibros) {
	this->pesoLibros = pesoLibros;
}



String^ SolicitudPrestamo::getFechaDevolucion() {
	return this->fechaDevolucion;
}

void SolicitudPrestamo::setFechaDevolucion(String^ fechaDevolucion) {
	this->fechaDevolucion = fechaDevolucion;
}

String^ SolicitudPrestamo::getHoraDevolucion() {
	return this->horaDevolucion;
}

void SolicitudPrestamo::setHoraDevolucion(String^ horaDevolucion) {
	this->horaDevolucion = horaDevolucion;
}

String^ SolicitudPrestamo::getFechaEntrega() {
	return this->fechaEntrega;
}

void SolicitudPrestamo::setFechaEntrega(String^ fechaEntrega) {
	this->fechaEntrega = fechaEntrega;
}

String^ SolicitudPrestamo::getHoraEntrega() {
	return this->horaEntrega;
}

void SolicitudPrestamo::setHoraEntrega(String^ horaEntrega) {
	this->horaEntrega = horaEntrega;
}
*/




int SolicitudPrestamo::getIdSolicitudP() {
	return this->idSolicitudP;
}

void SolicitudPrestamo::setIdSolicitudP(int idSolicitudP) {
	this->idSolicitudP = idSolicitudP;
}

ValidacionSolicitud^ SolicitudPrestamo::getObjValidacionSolicitud() {
	return this->objValidacionSolicitud;
}

void SolicitudPrestamo::setObjValidacionSolicitud(ValidacionSolicitud^ objValidacionSolicitud) {
	this->objValidacionSolicitud = objValidacionSolicitud;
}


int SolicitudPrestamo::getNumeroSolicitud() {
	return this->numeroSolicitud;
}

void SolicitudPrestamo::setNumeroSolicitud(int numeroSolicitud) {
	this->numeroSolicitud = numeroSolicitud;
}

int SolicitudPrestamo::getDiasPrestamo() {
	return this->diasPrestamo;
}

void SolicitudPrestamo::setDiasPrestamo(int diasPrestamo) {
	this->diasPrestamo = diasPrestamo;
}