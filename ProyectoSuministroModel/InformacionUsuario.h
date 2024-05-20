#pragma once

#include "InterfazResidencial.h"
#include "Residencial.h"

using namespace System;

namespace ProyectoSuministroModel {
	public ref class InformacionUsuario {

	private:
		int codigo;
		int celular;
		String^ titular;
		String^ DNI;
		String^ direccion;
		String^ distrito;
		String^ tarifa;
		String^ unidadUso;
		String^ correo;
		InterfazResidencial^ objInterfazResidencial;
		Residencial^ objResidencial;

	public:
		InformacionUsuario();
		InformacionUsuario(int codigo, int celular, String^ titular, String^ DNI, String^ direccion, String^ distrito, String^ tarifa, String^ unidadUso, String^ correo, InterfazResidencial^ objInterfazResidencial, Residencial^ objResidencial);

		int getcodigo();
		void setcodigo(int codigo);
		int getcelular();
		void setcelular(int celular);
		String^ gettitular();
		void settitular(String^ titular);
		String^ getDNI();
		void setDNI(String^ DNI);
		String^ getdireccion();
		void setdireccion(String^ direccion);
		String^ getdistrito();
		void setdistrito(String^ distrito);
		String^ gettarifa();
		void settarifa(String^ tarifa);
		String^ getunidadUso();
		void setunidadUso(String^ unidadUso);
		String^ getcorreo();
		void setcorreo(String^ correo);
		InterfazResidencial^ getobjInterfazResidencial();
		void setobjInterfazResidencial(InterfazResidencial^ objInterfazResidencial);
		Residencial^ getobjResidencial();
		void setobjResidencial(Residencial^ objResidencial);


	};
}

