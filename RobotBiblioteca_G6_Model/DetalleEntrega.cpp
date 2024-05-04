#include "DetalleEntrega.h"
#include "SeguimientoPrestamo.h"
#include "ValoracionEntrega.h"
#include "Robot.h"
#include "ConstanciaDePrestamo.h"

using namespace RobotBiblioteca_G6_Model;
using namespace System;

DetalleEntrega::DetalleEntrega() {

}

DetalleEntrega::DetalleEntrega(int idEntrega, String^ declaracionPrestamo, String^ ubicacionCampus, SeguimientoPrestamo^ objSeguimiento, ValoracionEntrega^ objValoracionEntrega, Robot^ objRobot, ConstanciaDePrestamo^ objConstanciaDePrestamo) {
	this->idEntrega = idEntrega;
	this->declaracionPrestamo = declaracionPrestamo;
	this->ubicacionCampus = ubicacionCampus;
	this->objSeguimiento = objSeguimiento;
	this->objValoracionEntrega = objValoracionEntrega;
	this->objRobot = objRobot;
	this->objConstanciaDePrestamo = objConstanciaDePrestamo;
}
int DetalleEntrega::getidEntrega() {
	return this->idEntrega;
}
void DetalleEntrega::setidEntrega(int idEntrega) {
	this->idEntrega = idEntrega;
}
String^ DetalleEntrega::getDeclaracionPrestamo() {
	return this->declaracionPrestamo;
}
void DetalleEntrega::setDeclaracionPrestamo(String^ declaracionPrestamo) {
	this->declaracionPrestamo = declaracionPrestamo;
}
String^ DetalleEntrega::getUbicacionCampus() {
	return this->ubicacionCampus;
}
void DetalleEntrega::setUbicacionCampus(String^ ubicacionCampus) {
	this->ubicacionCampus = ubicacionCampus;
}
SeguimientoPrestamo^ DetalleEntrega::getObjSeguimiento() {
	return this->objSeguimiento;
}
void DetalleEntrega::setObjSeguimiento(SeguimientoPrestamo^ objSeguimiento) {
	this->objSeguimiento = objSeguimiento;
}
ValoracionEntrega^ DetalleEntrega::getObjValoracion() {
	return this->objValoracionEntrega;
}
void DetalleEntrega::setObjValoracion(ValoracionEntrega^ objValoracionEntrega) {
	this->objValoracionEntrega = objValoracionEntrega;
}
Robot^ DetalleEntrega::getObjRobot() {
	return this->objRobot;
}
void DetalleEntrega::setObjRobot(Robot^ objRobot) {
	this->objRobot = objRobot;
}
ConstanciaDePrestamo^ DetalleEntrega::getConstanciaDePrestamo() {
	return this->objConstanciaDePrestamo;
}
void DetalleEntrega::setObjConstanciaDePrestamo(ConstanciaDePrestamo^ objConstanciaDePrestamo) {
	this->objConstanciaDePrestamo = objConstanciaDePrestamo;
}