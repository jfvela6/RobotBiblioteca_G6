#include "RegistroController.h"

using namespace RobotBiblioteca_G6_Controller;
using namespace System::IO; /*Nos permite trabajar con archivos de texto*/

RegistroController::RegistroController() {

}

List<Registro^>^ RegistroController::buscarRegistrosxCuenta(String^ cuentaRegistro) {
	List<Registro^>^ listaRegistro = gcnew List<Registro^>();
	array<String^>^ lineas = File::ReadAllLines("Registros.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaRegistro in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaRegistro->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ direccion = datos[1];;
		String^ telefono = datos[2];
		String^ cuenta = datos[3];
		String^ DNI = datos[4];
		String^ correo = datos[5];
		String^ contraseña = datos[6];
		String^ fecha = datos[7];
		int idRegistro = Convert::ToInt32(datos[8]);
		int idIngreso = Convert::ToInt32(datos[9]);


		if (cuenta->CompareTo(cuentaRegistro) == 0) {
			Registro^ objRegistro = gcnew Registro(codigo, direccion, telefono, cuenta, DNI, correo, contraseña, fecha, idRegistro, idIngreso);
			listaRegistro->Add(objRegistro);
		}
	}
	return listaRegistro;
}


List<Registro^>^ RegistroController::buscarRegistrosAll() {
	List<Registro^>^ listaRegistro = gcnew List<Registro^>();
	array<String^>^ lineas = File::ReadAllLines("Registros.txt");
	String^ separadores = ";"; /*Aqui defino el caracter por el cual voy a separar los elementos de una linea*/
	for each (String ^ lineaRegistro in lineas) {
		/*Voy a separar los datos de una linea en sub strings*/
		array<String^>^ datos = lineaRegistro->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ direccion = datos[1];
		String^ telefono = datos[2];
		String^ cuenta = datos[3];
		String^ DNI = datos[4];
		String^ correo = datos[5];
		String^ contraseña = datos[6];
		String^ fecha = datos[7];
		int idRegistro = Convert::ToInt32(datos[8]);
		int idIngreso = Convert::ToInt32(datos[9]);

		Registro^ objRegistro = gcnew Registro(codigo, direccion, telefono, cuenta, DNI, correo, contraseña, fecha, idRegistro, idIngreso);
		listaRegistro->Add(objRegistro);
		//void agregarNuevoRegistro(int codigo, String ^ direccion, String ^ telefono, String ^ cuenta, String ^ DNI, String ^ correo, String ^ contraseña, String ^ fecha, int idRegistro, int idIngreso);
	}
	return listaRegistro;

}


void RegistroController::agregarNuevoRegistro(int codigo, String^ direccion, String^ telefono, String^ cuenta, String^ DNI, String^ correo, String^ contraseña, String^ fecha, int idRegistro, int idIngreso) {
	List<Registro^>^ listaRegistro = buscarRegistrosAll();
	Registro^ objRegistroNuevo = gcnew Registro(codigo, direccion, telefono, cuenta, DNI, correo, contraseña, fecha, idRegistro, idIngreso);
	listaRegistro->Add(objRegistroNuevo);
	escribirArchivo(listaRegistro);
}

void RegistroController::escribirArchivo(List<Registro^>^ listaRegistro) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaRegistro->Count);
	for (int i = 0; i < listaRegistro->Count; i++) {
		Registro^ objRegistro = listaRegistro[i];
		lineasArchivo[i] = Convert::ToString(objRegistro->getCodigo()) + ";" + objRegistro->getDireccion() + ";" + objRegistro->getTelefono() + ";" + objRegistro->getCuenta() + ";" + objRegistro->getDNI() + ";" + objRegistro->getCorreo() + ";" + objRegistro->getContraseña() + ";" + objRegistro->getFecha() + ";" + Convert::ToString(objRegistro->getIdRegistro()) + ";" + Convert::ToString(objRegistro->getIdIngreso());
	}
	File::WriteAllLines("Registros.txt", lineasArchivo);
}

