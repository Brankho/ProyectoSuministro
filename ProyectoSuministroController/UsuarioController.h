#pragma once

namespace ProyectoSuministroController {
	using namespace System::Collections::Generic;
	using namespace ProyectoSuministroModel;
	using namespace System;
	//ZHAID LE GUSTA LA GAMPI
	public ref class UsuarioController {
	public:
		UsuarioController();
		List<InformacionUsuario^>^buscarUsuarioxDNI(String^ DNIUsuario);
		List<InformacionUsuario^>^ buscarUsuariosAll();
		void agregarNuevoUsuario(int codigo, int celular, String^ titular, String^ DNI, String^ direccion, String^ distrito, String^ tarifa, String^ correo);
		void escribirArchivo(List<InformacionUsuario^>^ listaUsuarios);
		InformacionUsuario^ buscarUsuarioXDNI(String^ DNIUsuario);
		void actualizarUsuario(int codigo, int celular, String^ titular, String^ DNI, String^ direccion, String^ distrito, String^ tarifa, String^ correo);
		void eliminarDNI(String^ DNI);
	};
}

