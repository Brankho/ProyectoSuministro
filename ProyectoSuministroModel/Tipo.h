#pragma once

using namespace System;

namespace ProyectoSuministroModel {
	public ref class Tipo {

	private:
		int ID;
		String^ descripcionID;

	public:
		Tipo();
		Tipo(int ID, String^ descripcionID);

		int getID();
		void setID(int ID);
		String^ getdescripcionID();
		void setdescripcionID(String^ descripcionID);

	};

}