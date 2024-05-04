#include "SeguimientoPrestamo.h"
#include "Usuario.h"

using namespace RobotBiblioteca_G6_Model;
using namespace System;

SeguimientoPrestamo::SeguimientoPrestamo() {}

SeguimientoPrestamo::SeguimientoPrestamo(int idSeguimientoPrestamo, int vencimientoPrestamoHoras, int renovacionPrestamoHoras, String^ string, int numerodesolicitud, Usuario^ objUsuario) {

	this->idSeguimientoPrestamo = idSeguimientoPrestamo;
	this->vencimientoPrestamoHoras = vencimientoPrestamoHoras;
	this->renovacionPrestamoHoras = renovacionPrestamoHoras;
	this->numerodesolicitud = numerodesolicitud;
	this->objUsuario = objUsuario;
}
int SeguimientoPrestamo::getIdSeguimientoPrestamo() {
	return this->idSeguimientoPrestamo;
}
void SeguimientoPrestamo::setIdSeguimientoPrestamo(int idSeguimientoPrestamo) {
	this->idSeguimientoPrestamo = idSeguimientoPrestamo;
}
int SeguimientoPrestamo::getVencimientoPrestamoHoras() {
	return this->vencimientoPrestamoHoras;
}
void SeguimientoPrestamo::setVencimientoPrestamoHoras(int vencimientoPrestamoHoras) {
	this->vencimientoPrestamoHoras = vencimientoPrestamoHoras;
}
int SeguimientoPrestamo::getRenovacionPrestamoHoras() {
	return this->renovacionPrestamoHoras;
}
void SeguimientoPrestamo::setRenovacionPrestamoHoras(int renovacionPrestamoHoras) {
	this->renovacionPrestamoHoras = renovacionPrestamoHoras;
}
int SeguimientoPrestamo::getnumerodesolicitud() {
	return this->numerodesolicitud;
}
void SeguimientoPrestamo::setnumerodesolicitud(int numerodesolicitud) {
	this->numerodesolicitud = numerodesolicitud;
}
Usuario^ SeguimientoPrestamo::getObjUsuario() {
	return this->objUsuario;
}
void SeguimientoPrestamo::setObjUsuario(Usuario^ objUsuario) {
	this->objUsuario = objUsuario;
}