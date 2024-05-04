#include "Notificacion.h"

using namespace RobotBiblioteca_G6_Model;

Notificacion::Notificacion() {

}

Notificacion::Notificacion(int idNotificacion, String^ asunto, String^ mensaje, String^ fecha, String^ hora, Usuario^ objUsuario) {
	this->idNotificacion = idNotificacion;
	this->asunto = asunto;
	this->mensaje = mensaje;
	this->fecha = fecha;
	this->hora = hora;
	this->objUsuario = objUsuario;
}

int Notificacion::getIdNotificacion() {
	return this->idNotificacion;
}
void Notificacion::setIdNotificacion(int idNotificacion) {
	this->idNotificacion = idNotificacion;
}

String^ Notificacion::getAsunto() {
	return this->asunto;
}
void Notificacion::setAsunto(String^ asunto) {
	this->asunto = asunto;
}
String^ Notificacion::getMensaje() {
	return this->mensaje;
}
void Notificacion::setMensaje(String^ mensaje) {
	this->mensaje = mensaje;
}

String^ Notificacion::getFechaNotificacion() {
	return this->fecha;
}
void Notificacion::setFechaNotificacion(String^ FechaNotificacion) {
	this->fecha = fecha;
}
String^ Notificacion::getHoraNotificacion() {
	return this->hora;
}
void Notificacion::setHoraNotificacion(String^ HoraNotificacion) {
	this->hora = hora;
}
Usuario^ Notificacion::getObjUsuario() {
	return this->objUsuario;
}
void Notificacion::setObjUsuario(Usuario^ objUsuario) {
	this->objUsuario = objUsuario;
}