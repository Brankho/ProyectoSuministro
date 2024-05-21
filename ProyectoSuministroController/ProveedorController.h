#pragma once

namespace ProyectoSuministroController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace ProyectoSuministroModel;
	//ENCABEZADO DEL CONTROLLER
	public ref class ProveedorController {
	public:
		ProveedorController();
		List<Proveedor^>^ buscarProveedorxRUC(String^ RUCResidencial);
	};
}