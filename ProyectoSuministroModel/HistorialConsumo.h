#pragma once

using namespace System;

namespace ProyectoSuministroModel {
	public ref class HistorialConsumo {

	private:

		String^ NombreUsuario;
		int numeroDepa;
		String^ Fechaconsulta;
		double montoMensualConsumo;
		String^ estadoPago;

	public:

		HistorialConsumo();
		HistorialConsumo(String^ NombreUsuario, int numeroDepa, String^ Fechaconsulta, double montoMensualConsumo, String^ estadoPago);

		String^ getNombreUsuario();
		void setNombreUsuario(String^ NombreUsuario);
		int getnumeroDepa();
		void setnumeroDepa(int numeroDepa);
		String^ getFechaConsulta();
		void setFechaConsulta(String^ FechaConsulta);
		double getmontoMensualConsumo();
		void setmontoMensualConsumo(double montoMensualConsumo);
		String^ getestadoPago();
		void setestadoPago(String^ estadoPago);
	};
}

