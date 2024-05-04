#include "Usuario.h"

using namespace RobotBiblioteca_G6_Model;

Usuario::Usuario() : IngresoDatos() {

}

Usuario::Usuario(int idUsuario, String^ direccion, String^ estado, int idIngreso, int codigo, String^ correo, String^ cuenta, String^ telefono) : IngresoDatos(idIngreso, codigo, correo, cuenta, telefono) {
	this->idUsuario = idUsuario;
	this->direccion = direccion;
	this->estado = estado;
}

int Usuario::getIdUsuario() {
	return this->idUsuario;
}
void Usuario::setIdUsuario(int idUsuario) {
	this->idUsuario = idUsuario;
}


String^ Usuario::getDireccion() {
	return this->direccion;
}
void Usuario::setDireccion(String^ direccion) {
	this->direccion = direccion;
}

String^ Usuario::getEstado() {
	return this->estado;
}
void Usuario::setEstado(String^ estado) {
	this->estado = estado;
}