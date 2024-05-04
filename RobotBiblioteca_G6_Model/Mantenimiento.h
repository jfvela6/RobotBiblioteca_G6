#pragma once
#include "Robot.h"
#include "SolicitudMantenimiento.h"

using namespace System::Collections::Generic;

namespace RobotBiblioteca_G6_Model {

	public ref class Mantenimiento {
	private:
		int idMantenimiento;
		String^ nombreDelResponsable;
		List<SolicitudMantenimiento^>^ listaMantenimiento;

	public:
		Mantenimiento();
		Mantenimiento(int idMantenimiento, String^ nombreDelResponsable, List<SolicitudMantenimiento^>^ listaMantenimiento);
		int getidMantenimiento();
		void setidMantenimiento(int idMantenimiento);
		String^ getNombreDelResponsable();
		void setNombreDelResponsable(String^ nombreDelResponsable);
		List<SolicitudMantenimiento^>^ getlistaMantenimiento();
		void setlistaMantenimiento(List<SolicitudMantenimiento^>^ listaMantenimiento);
	};
}