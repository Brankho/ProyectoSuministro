#pragma once
#include "MedidorConsumo.h"
#include "InformacionUsuario.h"
using namespace System;

namespace ProyectoSuministroModel {
	public ref class AlmacenamientoConsumo {

	private:

		String^ ID;
		String^ mesConsumido;
		double nivelConsumido;
		double lecturaAnteriorVolumen;
		double lecturaActualVolumen;
		MedidorConsumo^ objMedidorConsumo;
		InformacionUsuario^ objInformacionUsuario;

	public:

		AlmacenamientoConsumo();
		AlmacenamientoConsumo(String^ ID, String^ mesConsumido, double nivelConsumido, double lecturaAnteriorVolumen, double lecturaActualVolumen, MedidorConsumo^ objMedidorConsumo, InformacionUsuario^ objInformacionUsuario);

		String^ getID();
		void setID(String^ ID);
		String^ getMesConsumido();
		void setMesConsumido(String^ mesConsumido);
		double getNivelConsumido();
		void setNivelConsumido(double nivelConsumido);
		double getLecturaAnteriorVolumen();
		void setLecturaAnteriorVolumen(double lecturaAnteriorVolumen);
		double getLecturaActualVolumen();
		void setLecturaActualVolumen(double lecturaActualVolumen);
		MedidorConsumo^ getobjMedidorConsumo();
		void setobjMedidorConsumo(MedidorConsumo^ objMedidorConsumo);
		InformacionUsuario^ getobjInformacionUsuario();
		void setobjInformacionUsuario(InformacionUsuario^ objInformacionUsuario);

	};
}


