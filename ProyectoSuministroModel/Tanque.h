#pragma once
#include "Residencial.h"
using namespace  System;

namespace ProyectoSuministroModel{
	public ref class Tanque {

	private:
		String^ ID;
		String^ marca;
		double altura;
		double capacidadVolumen;
		double peso;
		double area;
		int codigoTanque;
		Residencial^ objResidencial;

	public:

		Tanque();
		Tanque(String^ ID,String^ marca, double altura, double capacidadVolumen, double peso, double area, int codigoTanque, Residencial^ objResidencial);

		String^ getID();
		void setID(String^ ID);
		String^ getmarca();
		void setmarca(String^ marca);
		double getaltura();
		void setaltura(double altura);
		double getcapacidadVolumen();
		void setcapacidadVolumen(double capacidadVolumen);
		double getpeso();
		void setpeso(double peso);
		double getarea();
		void setarea(double area);
		int getcodigoTanque();
		void setcodigoTanque(int codigoTanque);
		Residencial^ getobjResidencial();
		void setobjResidencial(Residencial^ objResidencial);
	};
}
