#pragma once

#include "Proveedor.h"
#include "ReciboProveedor.h"
#include "Ahorros.h"
#include "ReciboUsuario.h"
#include "FacturacionUsuario.h"
#include "MedidorConsumo.h"
#include "InfoConsumo.h"
#include "HistorialConsumo.h"

using namespace System;

namespace ProyectoSuministroModel {
	public ref class Tipo {

	private:
		int ID;
		String^ descripcionID;
		Proveedor^ objProveedor;
		ReciboProveedor^ objReciboProveedor;
		Ahorros^ objAhorros;
		ReciboUsuario^ objReciboUsuario;
		FacturacionUsuario^ objFacturacionUsuario;
		MedidorConsumo^ objMedidorConsumo;
		InfoConsumo^ objInfoConsumo;
		HistorialConsumo^ objHistorialConsumo;

	public:
		Tipo();
		Tipo(int ID, String^ descripcionID, Proveedor^ objProveedor, ReciboProveedor^ objReciboProveedor, Ahorros^ objAhorros, ReciboUsuario^ objReciboUsuario, FacturacionUsuario^ objFacturacionUsuario, MedidorConsumo^ objMedidorConsumo, InfoConsumo^ objInfoConsumo, HistorialConsumo^ objHistorialConsumo);



		int getID();
		void setID(int ID);
		String^ getdescripcionID();
		void setdescripcionID(String^ descripcionID);
		Proveedor^ getobjProveedor();
		void setobjProveedor(Proveedor^ objProveedor);
		ReciboProveedor^ getobjReciboProveedor();
		void setobjReciboProveedor(ReciboProveedor^ objReciboProveedor);
		Ahorros^ getobjAhorros();
		void setobjAhorros(Ahorros^ objAhorros);
		ReciboUsuario^ getobjReciboUsuario();
		void setobjReciboUsuario(ReciboUsuario^ objReciboUsuario);
		FacturacionUsuario^ getobjFacturacionUsuario();
		void setobjFacturacionUsuario(FacturacionUsuario^ objFacturacionUsuario);
		MedidorConsumo^ getobjMedidorConsumo();
		void setobjMedidorConsumo(MedidorConsumo^ objMedidorConsumo);
		InfoConsumo^ getobjInfoConsumo();
		void setobjInfoConsumo(InfoConsumo^ objInfoConsumo);
		HistorialConsumo^ getobjHistorialConsumo();
		void setobjHistorialConsumo(HistorialConsumo^ objHistorialConsumo);
	};

}