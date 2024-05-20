#pragma once

#include "InterfazResidencial.h"
using namespace System;

namespace ProyectoSuministroModel {
	public ref class ControladorAguaCaliente {

	private:
		String^ Conexion;
		String^ EstadoConexion;
		double Temperaturadeseada;
		double IndicadorTemperatura;
		InterfazResidencial^ objInterfazResidencial;

	public:
		ControladorAguaCaliente();
		ControladorAguaCaliente(String^ Conexion, String^ EstadoConexion, double Temperaturadeseada, double IndicadorTemperatura, InterfazResidencial^ objInterfazResidencial);


		String^ getConexion();
		void setConexion(String^ Conexion);
		String^ getEstadoConexion();
		void setEstadoConexion(String^ EstadoConexion);
		double getTemperaturadeseada();
		void setTemperaturadeseada(double Temperaturadeseada);
		double getIndicadorTemperatura();
		void setIndicadorTemperatura(double IndicadorTemperatura);
		InterfazResidencial^ getobjInterfazResidencial();
		void setobjInterfazResidencial(InterfazResidencial^ objInterfazResidencial);

	};
}

