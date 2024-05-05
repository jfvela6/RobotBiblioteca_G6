#pragma once


namespace RobotBiblioteca_G6_Controller {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace RobotBiblioteca_G6_Model;

	public ref class RobotController {
		public:
			RobotController();
			List<Robot^>^ buscarRobotxCapacidadCarga(String^ capacidadCarga);
	};
}
