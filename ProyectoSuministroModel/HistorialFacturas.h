#pragma once
#include "AlmacenamientoConsumo.h"
using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSuministroModel {
	public ref class HistorialFacturas {

	private:

		String^ ID;
		String^ mesFacturacion;
		int numeroDepa;
		String^ fechaConsulta;
		String^ fechaActual;
		double montoMensualConsumo;
		String^ estadoDePago;
		List <AlmacenamientoConsumo^>^ listaAlmacenamientoConsumo;

	public:
		HistorialFacturas();
		HistorialFacturas(String^ ID, String^ mesFacturacion, int numeroDepa, String^ fechaConsulta, String^ fechaActual, double montoMensualConsumo, String^ estadoDePago, List <AlmacenamientoConsumo^>^ listaAlmacenamientoConsumo);

		String^ getID();
		void setID(String^ ID);
		String^ getMesFacturacion();
		void setMesFacturacion(String^ mesFacturacion);
		int getNumeroDepa();
		void setNumeroDepa(int numeroDepa);
		String^ getFechaConsulta();
		void setFechaConsulta(String^ fechaConsulta);
		String^ getFechaActual();
		void setFechaActual(String^ fechaActual);
		double getMontoMensualConsumo();
		void setMontoMensualConsumo(double montoMensualConsumo);
		String^ getEstadoDePago();
		void setEstadoDePago(String^ estadoDePago);
		List <AlmacenamientoConsumo^>^ getlistaAlmacenamientoConsumo();
		void setlistaAlmacenamientoConsumo(List <AlmacenamientoConsumo^>^ listaAlmacenamientoConsumo);

	};
}