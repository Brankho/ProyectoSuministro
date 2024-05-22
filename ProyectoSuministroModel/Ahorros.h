#pragma once

#include "InformacionUsuario.h"
#include "Tipo.h"

using namespace System;

namespace ProyectoSuministroModel {
	public ref class Ahorros {

	private:
		double AhorroMensual;
		double AhorroAnual;
		double volumenAhorrado;
		double descuentos;
		InformacionUsuario^ objInformacionUsuario;
		Tipo^ objTipo;
	public:

		Ahorros();
		Ahorros(double AhorroMensual, double AhorroAnual, double volumenAhorrado, double descuentos, InformacionUsuario^ objInformacionUsuario, Tipo^ objTipo);


		double getAhorroMensual();
		void setAhorroMensual(double AhorroMensual);
		double getAhorroAnual();
		void setAhorroAnual(double AhorroAnual);
		double getvolumenAhorrado();
		void setvolumenAhorrado(double volumenAhorrado);
		double getdescuentos();
		void setdescuentos(double descuentos);
		InformacionUsuario^ getobjInformacionUsuario();
		void setobjInformacionUsuario(InformacionUsuario^ objInformacionUsuario);
		Tipo^ getobjTipo();
		void setobjTipo(Tipo^ objTipo);

		
	};
}

