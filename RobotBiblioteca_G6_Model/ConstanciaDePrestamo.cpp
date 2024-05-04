#include "ConstanciaDePrestamo.h"

using namespace RobotBiblioteca_G6_Model;

ConstanciaDePrestamo::ConstanciaDePrestamo() : DatosPrestamo() {

}


ConstanciaDePrestamo::ConstanciaDePrestamo(int idConstancia, int idlibros, Usuario^ objUsuario, int idDatosP, int cantLibros, double pesoLibros, String^ fechaDevolucion, String^ horaDevolucion, String^ fechaEntrega, String^ horaEntrega) : DatosPrestamo(idDatosP, cantLibros, pesoLibros, fechaDevolucion, horaDevolucion, fechaEntrega, horaEntrega) {
	this->idConstancia = idConstancia;
	this->idlibros = idlibros;
	this->objUsuario = objUsuario;
}


// Propiedades GET - SET

int ConstanciaDePrestamo::getIdlibros() {
	return this->idlibros;
}
void ConstanciaDePrestamo::setIdlibros(int idlibros) {
	this->idlibros = idlibros;
}

Usuario^ ConstanciaDePrestamo::getObjUsuario() {
	return this->objUsuario;
}
void ConstanciaDePrestamo::setObjUsuario(Usuario^ objUsuario) {
	this->objUsuario = objUsuario;
}


int ConstanciaDePrestamo::getIdConstancia() {
	return this->idConstancia;
}
void ConstanciaDePrestamo::setIdConstancia(int idConstancia) {
	this->idConstancia = idConstancia;
}

