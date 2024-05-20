#pragma once

#include "HistorialConsumo.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSuministroModel {
	public ref class InfoConsumo {

	private:

		String^ mesConsumido;
		double nivelConsumido;
		double lecturaAnteriorVolumen;
		double lecturaActualVolumen;
		List<HistorialConsumo^>^ listaHistorialConsumo;

	public:
		InfoConsumo();
		InfoConsumo(String^ mesConsumido, double nivelConsumido, double lecturaAnteriorVolumen, double lecturaActualVolumen, List<HistorialConsumo^>^ listaHistorialConsumo);


		String^ getmesConsumido();
		void setmesConsumido(String^ mesConsumido);
		double getnivelConsumido();
		void setnivelConsumido(double nivelConsumido);
		double getlecturaAnteriorVolumen();
		void setlecturaAnteriorVolumen(double lecturaAnteriorVolumen);
		double getlecturaActualVolumen();
		void setlecturaActualVolumen(double lecturaActualVolumen);
		List<HistorialConsumo^>^ getlistaHistorialConsumo();
		void setlistaHistorialConsumo(List<HistorialConsumo^>^ listaHistorialConsumo);



	};
}

