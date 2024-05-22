#pragma once
#include "Medidor.h"
#include "Tanque.h"

using namespace System;

namespace ProyectoSuministroModel {
	public ref class MedidorConsumo:Medidor {

	private:
		String^ ID;
		double longBandaMuerta;
		String^ alarma;
		String^ volumenSuministrado;
		double conversionVolumen;
		Tanque^ objTanque;

	public:
		MedidorConsumo();
		MedidorConsumo(String^ ID, double longBandaMuerta, String^ alarma, String^ volumenSuministrado, double conversionVolumen, Tanque^ objTanque, String^ tipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, double precision);


		String^ getID();
		void setID(String^ ID);
		double getLongBandaMuerta();
		void setLongBandaMuerta(double longBandaMuerta);
		String^ getAlarma();
		void setAlarma(String^ alarma);
		String^ getVolumenSuministrado();
		void setVolumenSuministrado(String^ volumenSuministrado);
		double getConversionVolumen();
		void setConversionVolumen(double conversionVolumen);
		Tanque^ getObjTanque();
		void setObjTanque(Tanque^ objTanque);
		
	};
}

