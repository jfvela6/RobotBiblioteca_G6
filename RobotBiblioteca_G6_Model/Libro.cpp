#include "Libro.h"

using namespace RobotBiblioteca_G6_Model;

Libro::Libro() {

}

Libro::Libro(int idLibro, String^ titulo, String^ categoria, String^ estado, int edicion, String^ reseña, String^ etiqueta, String^ autorlibro, String^ disponibilidad, Biblioteca^ objBiblioteca, SolicitudPrestamo^ objSolicitudPrestamo, List<Mantenimiento^>^ listaMantenimiento) {
	this->idLibro = idLibro;
	this->titulo = titulo;
	this->categoria = categoria;
	this->estado = estado;
	this->edicion = edicion;
	this->reseña = reseña;
	this->etiqueta = etiqueta;
	this->autorlibro = autorlibro;
	this->disponibilidad = disponibilidad;
	this->objBiblioteca = objBiblioteca;
	this->objSolicitudPrestamo = objSolicitudPrestamo;
}

int Libro::getIdLibro() {
	return this->idLibro;
}
void Libro::setIdLibro(int idLibro) {
	this->idLibro = idLibro;
}

String^ Libro::getTitulo() {
	return this->titulo;
}
void Libro::setTitulo(String^ titulo) {
	this->titulo = titulo;
}


String^ Libro::getcategoria() {
	return this->categoria;
}
void Libro::setcategoria(String^ categoria) {
	this->categoria = categoria;
}

String^ Libro::getEstado() {
	return this->estado;
}
void Libro::setEstado(String^ estado) {
	this->estado = estado;
}

int Libro::getEdicion() {
	return this->edicion;
}
void Libro::setEdicion(int edicion) {
	this->edicion = edicion;
}


String^ Libro::getReseña() {
	return this->reseña;
}
void Libro::setReseña(String^ reseña) {
	this->reseña = reseña;
}

String^ Libro::getEtiqueta() {
	return this->etiqueta;
}
void Libro::setEtiqueta(String^ etiqueta) {
	this->etiqueta = etiqueta;
}


String^ Libro::getAutorlibro() {
	return this->autorlibro;
}
void Libro::setAutorlibro(String^ autorlibro) {
	this->autorlibro = autorlibro;
}

String^ Libro::getDisponibilidad() {
	return this->disponibilidad;
}
void Libro::setDisponibilidad(String^ disponibilidad) {
	this->disponibilidad = disponibilidad;
}

Biblioteca^ Libro::getObjBiblioteca() {
	return this->objBiblioteca;
}

void Libro::setObjBiblioteca(Biblioteca^ objBiblioteca) {
	this->objBiblioteca = objBiblioteca;
}

SolicitudPrestamo^ Libro::getObjSolicitudPrestamo() {
	return this->objSolicitudPrestamo;
}
void Libro::setObjSolicitudPrestamo(SolicitudPrestamo^ objSolicitudPrestamo) {
	this->objSolicitudPrestamo = objSolicitudPrestamo;
}