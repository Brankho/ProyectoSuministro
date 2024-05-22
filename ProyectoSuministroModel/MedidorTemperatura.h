#pragma once

#include "Medidor.h"
using namespace System;

namespace ProyectoSuministroModel {
	public ref class MedidorTemperatura:Medidor {

	private:
		double lectura;
		String^ ubicacion;
		String^ unidadMedida;
		

	public:
		MedidorTemperatura();
		MedidorTemperatura(double lectura, String^ ubicacion, String^ unidadMedida, String^ ID, String^ tipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, double precision);


		double getLectura(); 
		void setLectura(double lectura);
		String^ getUbicacion(); 
		void setUbicacion(String^ ubicacion);
		String^ getUnidadMedida(); 
		void setUnidadMedida(String^ unidadMedida);
	};
}
