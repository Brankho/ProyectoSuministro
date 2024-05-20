#pragma once

#include "InfoConsumo.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSuministroModel {
	public ref class MedidorConsumo {

	private:

		int codigomedidor;
		String^ marcamedidor;
		String^ Tipomedidor;
		List< InfoConsumo^>^ listaInfoConsumo;

	public:
		MedidorConsumo();
		MedidorConsumo(int codigomedidor, String^ marcamedidor, String^ Tipomedidor, List< InfoConsumo^>^ listaInfoConsumo);


		int getcodigomedidor();
		void setcodigomedidor(int codigomedidor);
		String^ getmarcamedidor();
		void setmarcamedidor(String^ marcamedidor);
		String^ getTipomedidor();
		void setTipomedidor(String^ Tipomedidor);
		List< InfoConsumo^>^ getlistaInfoConsumo();
		void setlistaInfoConsumo(List< InfoConsumo^>^ listaInfoConsumo);

	};
}

