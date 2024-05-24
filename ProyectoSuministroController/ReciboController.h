#pragma once

namespace ProyectoSuministroController {
	using namespace System;
	using namespace System::Collections::Generic;
	using namespace ProyectoSuministroModel;
	//ENCABEZADO DEL CONTROLLER
	public ref class ReciboController {
	public:
		ReciboController();
		List<ReciboUsuario^>^ buscarReciboxFecha(String^ fechaEmisionRecibo);
		List<ReciboUsuario^>^ buscarRecibosAll();
		void agregarNuevoRecibo(int codigo, String^ fechaEmision, String^ fechaVencimiento, String^ tarifa, String^ periodoConsumo);
		void escribirArchivo(List<ReciboUsuario^>^ listaRecibos);
		ReciboUsuario^ buscarReciboxCodigo(int codigoBuscar);
		void actualizarRecibo(int codigo, String^ fechaEmision, String^ fechaVencimiento, String^ tarifa, String^ periodo);
		void eliminarRecibo(int codigo);
	};
}