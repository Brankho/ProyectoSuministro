#pragma once

#include "Residencial.h"
#include "MedidorTemperatura.h"
using namespace System;

namespace ProyectoSuministroModel {
	public ref class ControladorAguaCaliente {

	private:
		String^ Conexion;
		String^ EstadoConexion;
		double Temperaturadeseada;
		double IndicadorTemperatura;
		Residencial^ objResidencial;
		MedidorTemperatura^ objMedidorTemperatura;

	public:
		ControladorAguaCaliente();
		ControladorAguaCaliente(String^ Conexion, String^ EstadoConexion, double Temperaturadeseada, double IndicadorTemperatura, Residencial^ objResidencial, MedidorTemperatura^ objMedidorTemperatura);


		String^ getConexion();
		void setConexion(String^ Conexion);
		String^ getEstadoConexion();
		void setEstadoConexion(String^ EstadoConexion);
		double getTemperaturadeseada();
		void setTemperaturadeseada(double Temperaturadeseada);
		double getIndicadorTemperatura();
		void setIndicadorTemperatura(double IndicadorTemperatura);
		Residencial^ getobjResidencial();
		void setobjResidencial(Residencial^ objResidencial);

		MedidorTemperatura^ getobjMedidorTemperatura();
		void setobjMedidorTemperatura(MedidorTemperatura^ objMedidorTemperatura);

	};
}

