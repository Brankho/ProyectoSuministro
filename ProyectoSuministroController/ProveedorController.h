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
		List<Proveedor^>^ buscarProveedoresAll();
		void agregarNuevoProveedor(int codigo, String^ razonSocial, String^ ruc, String^ calidadAgua, String^ telefono, String^ correo, String^ calidadInfraestructura, String^ servicioEmergencia, String^ estacion);
		void escribirArchivo(List<Proveedor^>^ listaProveedores);
	};
}