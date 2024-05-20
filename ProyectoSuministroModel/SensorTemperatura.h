#pragma once

#include "Sensor.h"
#include "ControladorAguaCaliente.h"

using namespace System;

namespace ProyectoSuministroModel {
	public ref class SensorTemperatura :Sensor {

	private:

		double lectura;
		String^ ubicacion;
		String^ unidadMedida;
		ControladorAguaCaliente^ objControladorAguaCaliente;

	public:
		SensorTemperatura();
		SensorTemperatura(double lectura, String^ ubicacion, String^ unidadMedida, ControladorAguaCaliente^ objControladorAguaCaliente, String^ TipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, String^ TipoSeñal, double precision);


		double getlectura();
		void setlectura(double lectura);
		String^ getubicacion();
		void setubicacion(String^ ubicacion);
		String^ getunidadMedida();
		void setunidadMedida(String^ unidadMedida);
		/*ControladorAguaCaliente^ getobjControladorAguaCaliente();
		void  setobjControladorAguaCaliente(ControladorAguaCaliente^ objControladorAguaCaliente);*/
	};
}
