#pragma once

namespace ProyectoSuministroController {
	using namespace System::Collections::Generic;
	using namespace ProyectoSuministroModel;
	using namespace System;

	public ref class ResidencialController {
	public:
		ResidencialController();
		List<Residencial^>^ buscarResidencialxConstructora(String^ constructoraResidencial);
		List<Residencial^>^ buscarResidencialesAll();
		void agregarNuevaResidencial(String^ sectorUrbano, String^ constructora, int cantBloques, int cantDepartamentos, int cantTanques);
		void escribirArchivo(List<Residencial^>^ listaResidenciales);
		Residencial^ buscarResidencialxCons(String^ constructoraRES);
		void actualizarResidencial(String^ sectorUrbano, String^ constructora, int cantBloques, int cantDepartamentos, int cantTanques);
		void eliminarResidencial(String^ constructora);
	};
}