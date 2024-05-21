#pragma once

namespace ProyectoSuministroController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace ProyectoSuministroModel;

	public ref class ProveedorController {
	public:
		ProveedorController();
		List<Proveedor^>^ buscarProveedorxRUC(String^ RUCResidencial);
	};
}