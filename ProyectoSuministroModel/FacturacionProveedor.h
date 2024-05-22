#pragma once

#include "Facturacion.h"
#include "Tipo.h"
#include "Proveedor.h"
#include "Residencial.h"

using namespace System;

namespace ProyectoSuministroModel {

	public ref class FacturacionProveedor:Facturacion {

	private:
		int codigoRecibo;
		String^ volumenVariableMedida;
		double costoestacion;
		Tipo^ objTipo;
		Proveedor^ objProveedor;
		Residencial^ objResidencial;

	public:

		FacturacionProveedor();
		FacturacionProveedor(int codigoRecibo, String^ volumenVariableMedida, double costoestacion, Tipo^ objTipo, Proveedor^ objProveedor, Residencial^ objResidencial, int NroFacturacion, double cargoFijo, double redondeoMesAnterior, double redondeoMesActual, double montofijo, double montoIGV, double montoTotal);

		int getcodigoRecibo();
		void setcodigoRecibo(int codigoRecibo);
		String^ getvolumenVariableMedida();
		void setvolumenVariableMedida(String^ volumenVariableMedida);
		double getcostoestacion();
		void setcostoestacion(double costoestacion);
		Tipo^ getobjTipo();
		void setobjTipo(Tipo^ objTipo);
		Proveedor^ getobjProveedor();
		void setobjProveedor(Proveedor^ objProveedor);
		Residencial^ getobjResidencial();
		void setobjResidencial(Residencial^ objResidencial);
	};

}



