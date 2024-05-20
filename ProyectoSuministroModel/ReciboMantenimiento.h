#pragma once

#include "Residencial.h"

using namespace System;

namespace ProyectoSuministroModel {
	public ref class ReciboMantenimiento {

	private:
		double MantenimientoTuberias;
		double MantenimientoRedesElectricas;
		double MantenimientoGas;
		double MantenimientoGeneralMensual;
		double montototalMensual;
		Residencial^ objResidencial;

	public:
		ReciboMantenimiento();
		ReciboMantenimiento(double MantenimientoTuberias, double MantenimientoRedesElectricas, double MantenimientoGas, double MantenimientoGeneralMensual, double montototalMensual, Residencial^ objResidencial);

		double getMantenimientoTuberias();
		void setMantenimientoTuberias(double MantenimientoTuberias);
		double getMantenimientoRedesElectricas();
		void setMantenimientoRedesElectricas(double MantenimientoRedesElectricas);
		double getMantenimientoGas();
		void setMantenimientoGas(double MantenimientoGas);
		double getMantenimientoGeneralMensual();
		void setMantenimientoGeneralMensual(double MantenimientoGeneralMensual);
		double getmontototalMensual();
		void setmontototalMensual(double montototalMensual);
		Residencial^ getobjResidencial();
		void setobjResidencial(Residencial^ objResidencial);
	};
}

