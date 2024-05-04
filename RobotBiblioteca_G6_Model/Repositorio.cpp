#include "Repositorio.h"

using namespace RobotBiblioteca_G6_Model;

Repositorio::Repositorio() {

}

Repositorio::Repositorio(int idRepositorio, String^ estante, String^ piso, String^ categoria, String^ autores, String^ etiqueta, Biblioteca^ objBiblioteca) {
	this->idRepositorio = idRepositorio;
	this->estante = estante;
	this->piso = piso;
	this->categoria = categoria;
	this->autores = autores;
	this->etiqueta = etiqueta;
	this->objBiblioteca = objBiblioteca;
}