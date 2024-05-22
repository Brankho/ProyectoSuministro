#include "UsuarioController.h"

using namespace ProyectoSuministroController;
using namespace System::IO; //Trabaja con archivos de texto

UsuarioController::UsuarioController(){

}

List<InformacionUsuario^>^ ProyectoSuministroController::UsuarioController::buscarUsuarioxDNI(String^ DNIUsuario) {
	List<InformacionUsuario^>^ listaUsuarios = gcnew List<InformacionUsuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuario.txt");
	String^ separadores = ";";

	for each (String ^ lineaUsuario in lineas) {
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		int celular = Convert::ToInt32(datos[1]);
		String^ titular = datos[2];
		String^ DNI = datos[3];
		String^ direccion = datos[4];
		String^ distrito = datos[5];
		String^ tarifa = datos[6];
		String^ correo = datos[7];
		Residencial^ objResidencial;
		String^ unidadUso;
		if (DNI->CompareTo(DNIUsuario) == 0) {
			InformacionUsuario^ objUsuario = gcnew ProyectoSuministroModel::InformacionUsuario(codigo, celular, titular, DNI, direccion, distrito, tarifa, unidadUso, correo, objResidencial);
			listaUsuarios->Add(objUsuario);
		}
	}
	return listaUsuarios;
}

List<InformacionUsuario^>^ ProyectoSuministroController::UsuarioController::buscarUsuariosAll() {
	List<InformacionUsuario^>^ listaUsuarios = gcnew List<InformacionUsuario^>();
	array<String^>^ lineas = File::ReadAllLines("Usuario.txt");
	String^ separadores = ";";

	for each (String ^ lineaUsuario in lineas) {
		array<String^>^ datos = lineaUsuario->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		int celular = Convert::ToInt32(datos[1]);
		String^ titular = datos[2];
		String^ DNI = datos[3];
		String^ direccion = datos[4];
		String^ distrito = datos[5];
		String^ tarifa = datos[6];
		String^ correo = datos[7];
		Residencial^ objResidencial;
		String^ unidadUso;

		InformacionUsuario^ objUsuario = gcnew ProyectoSuministroModel::InformacionUsuario(codigo, celular, titular, DNI, direccion, distrito, tarifa, unidadUso, correo, objResidencial);
		listaUsuarios->Add(objUsuario);
	}
	return listaUsuarios;
}

void ProyectoSuministroController::UsuarioController::agregarNuevoUsuario(int codigo, int celular, String^titular, String^DNI, String^direccion, String^distrito, String^tarifa, String^correo) {
	List<InformacionUsuario^>^ listaUsuarios = buscarUsuariosAll();
	Residencial^ objResidencial;
	String^ unidadUso;
	InformacionUsuario^ objUsuarioNuevo = gcnew InformacionUsuario(codigo, celular, titular, DNI, direccion, distrito, tarifa, unidadUso, correo, objResidencial);
	listaUsuarios->Add(objUsuarioNuevo);
	escribirArchivo(listaUsuarios);
}

void ProyectoSuministroController::UsuarioController::escribirArchivo(List<InformacionUsuario^>^ listaUsuarios) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaUsuarios->Count);
	for (int j = 0; j < listaUsuarios->Count; j++) {
		InformacionUsuario^ objUsuario = listaUsuarios[j];
		lineasArchivo[j] = Convert::ToString(objUsuario->getcodigo()) + ";" + Convert::ToString(objUsuario->getcelular()) + ";" + objUsuario->gettitular() + ";" + objUsuario->getDNI() + ";" + objUsuario->getdireccion() + ";" + objUsuario->getdistrito() + ";" + objUsuario->gettarifa() + ";" + objUsuario->getcorreo();
	}
	File::WriteAllLines("Usuario.txt", lineasArchivo);
}