#include "Mantenimiento.h"

using namespace RobotBiblioteca_G6_Model;
using namespace System;

Mantenimiento::Mantenimiento() {

}
Mantenimiento::Mantenimiento(int idMantenimiento, String^ nombreDelResponsable, List<SolicitudMantenimiento^>^ listaMantenimiento) {
	this->idMantenimiento = idMantenimiento;
	this->nombreDelResponsable = nombreDelResponsable;
	this->listaMantenimiento = listaMantenimiento;
}
int Mantenimiento::getidMantenimiento() {
	return this->idMantenimiento;
}
void Mantenimiento::setidMantenimiento(int idMantenimiento) {
	this->idMantenimiento = idMantenimiento;
}
String^ Mantenimiento::getNombreDelResponsable() {
	return this->nombreDelResponsable;
}
void Mantenimiento::setNombreDelResponsable(String^ nombreDelResponsable) {
	this->nombreDelResponsable = nombreDelResponsable;
}
List<SolicitudMantenimiento^>^ Mantenimiento::getlistaMantenimiento() {
	return this->listaMantenimiento;
}
void Mantenimiento::setlistaMantenimiento(List<SolicitudMantenimiento^>^ listaMantenimiento) {
	this->listaMantenimiento = listaMantenimiento;
}