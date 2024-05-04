#include "Microcontrolador.h"

using namespace RobotBiblioteca_G6_Model;

Microcontrolador::Microcontrolador() {}

Microcontrolador::Microcontrolador(int idMicrocontrolador, int numeroDeSerie, int cantPines, String^ fabricante, String^ nombre, String^ datasheet) {
	this->idMicrocontrolador = idMicrocontrolador;
	this->numeroDeSerie = numeroDeSerie;
	this->cantPines = cantPines;
	this->fabricante = fabricante;
	this->nombre = nombre;
	this->datasheet = datasheet;
}
int Microcontrolador::getidMicrocontrolador() {
	return this->idMicrocontrolador;
}
void  Microcontrolador::setidMicrocontrolador(int idMicrocontrolador) {
	this->idMicrocontrolador = idMicrocontrolador;
}
int Microcontrolador::getNumeroDeSerie() {
	return this->idMicrocontrolador;
}
void  Microcontrolador::setNumeroDeSerie(int numeroDeSerie) {
	this->numeroDeSerie = numeroDeSerie;
}
int Microcontrolador::getCantPines() {
	return this->cantPines;
}
void  Microcontrolador::setCantPines(int cantPines) {
	this->cantPines = cantPines;
}
String^ Microcontrolador::getFabricante() {
	return this->fabricante;
}
void  Microcontrolador::setFabricante(String^ fabricante) {
	this->fabricante = fabricante;
}
String^ Microcontrolador::getnombre() {
	return this->nombre;
}
void  Microcontrolador::setnombre(String^ nombre) {
	this->nombre = nombre;
}
String^ Microcontrolador::getDatasheet() {
	return this->datasheet;
}
void  Microcontrolador::setDatasheet(String^ datasheet) {
	this->datasheet = datasheet;
}