#include "SolicitudMantenimiento.h"

using namespace RobotBiblioteca_G6_Model;

SolicitudMantenimiento::SolicitudMantenimiento() {

}

SolicitudMantenimiento::SolicitudMantenimiento(int idSolicitudMantenimiento, String^ idObjeto, String^ problema, String^ fecha, Biblioteca^ objBiblioteca) {
	this->idSolicitudMantenimiento = idSolicitudMantenimiento;
	this->idObjeto = idObjeto;
	this->problema = problema;
	this->fecha = fecha;
	this->objBiblioteca = objBiblioteca;
}