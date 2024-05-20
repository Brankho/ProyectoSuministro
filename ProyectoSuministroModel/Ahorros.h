#pragma once

#include "InterfazResidencial.h"

using namespace System;

namespace ProyectoSuministroModel {
	public ref class Ahorros {

	private:
		double AhorroMensual;
		double AhorroAnual;
		double volumenAhorrado;
		double descuentos;
		InterfazResidencial^ objInterfazResidencial;
	public:

		Ahorros();
		Ahorros(double AhorroMensual, double AhorroAnual, double volumenAhorrado, double descuentos, InterfazResidencial^ objInterfazResidencial);


		double getAhorroMensual();
		void setAhorroMensual(double AhorroMensual);
		double getAhorroAnual();
		void setAhorroAnual(double AhorroAnual);
		double getvolumenAhorrado();
		void setvolumenAhorrado(double volumenAhorrado);
		double getdescuentos();
		void setdescuentos(double descuentos);
		InterfazResidencial^ getobjInterfazResidencial();
		void setobjInterfazResidencial(InterfazResidencial^ objInterfazResidencial);
	};
}

