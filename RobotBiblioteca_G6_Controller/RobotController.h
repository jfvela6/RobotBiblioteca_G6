#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace RobotBiblioteca_G6_Model;
namespace RobotBiblioteca_G6_Controller {
	public ref class RobotController {
		public:
			RobotController();
			List<Robot^>^ buscarRobotxCapacidadCarga(String^ capacidadCarga);
	};
}
