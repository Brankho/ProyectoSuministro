#include "ResidencialController.h"

using namespace ProyectoSuministroController;
using namespace System::IO; //Trabaja con archivos de texto

ResidencialController::ResidencialController() {
	//Prueba de residencial controller
}

List<Residencial^>^ ProyectoSuministroController::ResidencialController::buscarResidencialxConstructora(String^ constructoraResidencial)
{
	//throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucci�n "return" aqu�
	List<Residencial^>^ listaResidenciales = gcnew List<Residencial^>();
	array<String^>^ lineas = File::ReadAllLines("Residencial.txt");
	String^ separadores = ";";

	//Elemento por elemento de 1 arreglo
	for each (String ^ lineaResidencial in lineas) {

		array<String^>^ datos = lineaResidencial->Split(separadores->ToCharArray());
		// int codigo = Convert::ToInt32(datos[0]), de String a int
		String^ constructora = datos[0];
		String^ sectorUrbano = datos[1];
		int cantBloques = Convert::ToInt32(datos[2]);
		int cantDepartamentos = Convert::ToInt32(datos[3]);
		int cantTanques = Convert::ToInt32(datos[4]);
		int codigo;
		String^ ruc;
		String^ direccion;
		String^ telefono;
		String^ razonSocial;
		String^ ciudad;
		String^ distrito;
		String^ correo;
		int codigoBloque;
		int codigoDepa;
		String^estacion;

		if (constructora->CompareTo(constructoraResidencial)==0) { //Para comparar datos a mostrar
			Residencial^ objResidencial = gcnew Residencial(codigo, ruc, direccion, telefono, razonSocial, ciudad, distrito, correo, sectorUrbano, constructora, cantBloques, cantDepartamentos, codigoBloque, codigoDepa, cantTanques, estacion);
			listaResidenciales->Add(objResidencial); //Parece que debe implementarse TODOS sus parametros
		}
	}
	return listaResidenciales;
}

List<Residencial^>^ ProyectoSuministroController::ResidencialController::buscarResidencialesAll() {
	List<Residencial^>^ listaResidenciales = gcnew List<Residencial^>();
	array<String^>^ lineas = File::ReadAllLines("Residencial.txt");
	String^ separadores = ";";

	//Elemento por elemento de 1 arreglo
	for each (String ^ lineaResidencial in lineas) {

		array<String^>^ datos = lineaResidencial->Split(separadores->ToCharArray());
		// int codigo = Convert::ToInt32(datos[0]), de String a int
		String^ constructora = datos[0];
		String^ sectorUrbano = datos[1];
		int cantBloques = Convert::ToInt32(datos[2]);
		int cantDepartamentos = Convert::ToInt32(datos[3]);
		int cantTanques = Convert::ToInt32(datos[4]);
		int codigo;
		String^ ruc;
		String^ direccion;
		String^ telefono;
		String^ razonSocial;
		String^ ciudad;
		String^ distrito;
		String^ correo;
		int codigoBloque;
		int codigoDepa;
		String^ estacion;

		Residencial^ objResidencial = gcnew Residencial(codigo, ruc, direccion, telefono, razonSocial, ciudad, distrito, correo, sectorUrbano, constructora, cantBloques, cantDepartamentos, codigoBloque, codigoDepa, cantTanques, estacion);
		listaResidenciales->Add(objResidencial);
	}
	return listaResidenciales;
}

void ProyectoSuministroController::ResidencialController::agregarNuevaResidencial(String^ constructora,String^ sectorUrbano, int cantBloques, int cantDepartamentos, int cantTanques) {
	List<Residencial^>^ listaResidenciales = buscarResidencialesAll();
	int codigo;
	String^ ruc;
	String^ direccion;
	String^ telefono;
	String^ razonSocial;
	String^ ciudad;
	String^ distrito;
	String^ correo;
	int codigoBloque;
	int codigoDepa;
	String^ estacion;
	Residencial^objResidencialNuevo=gcnew Residencial(codigo, ruc, direccion, telefono, razonSocial, ciudad, distrito, correo, sectorUrbano, constructora, cantBloques, cantDepartamentos, codigoBloque, codigoDepa, cantTanques, estacion);
	listaResidenciales->Add(objResidencialNuevo);
	escribirArchivo(listaResidenciales);
}

void ProyectoSuministroController::ResidencialController::eliminarResidencial(String^ constructora) {
	List<Residencial^>^ listaResidenciales = buscarResidencialesAll();
	for (int i = 0; i < listaResidenciales->Count; i++) {
		if (listaResidenciales[i]->getconstructora() == constructora) {
			listaResidenciales->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(listaResidenciales);
}

void ProyectoSuministroController::ResidencialController::escribirArchivo(List<Residencial^>^ listaResidenciales) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaResidenciales->Count);
	for (int j = 0; j < listaResidenciales->Count; j++) {
		Residencial^ objResidencial = listaResidenciales[j];
		lineasArchivo[j] = objResidencial->getconstructora() + ";" + objResidencial->getsectorUrbano() + ";" + Convert::ToString(objResidencial->getcantBloques()) + ";" + Convert::ToString(objResidencial->getcantDepartamentos()) + ";" + Convert::ToString(objResidencial->getcantTanques());
	}
	File::WriteAllLines("Residencial.txt", lineasArchivo);
}

Residencial^ProyectoSuministroController::ResidencialController::buscarResidencialxCons(String^ constructoraRES)
{
	//throw gcnew System::NotImplementedException();
	// TODO: Insertar una instrucci�n "return" aqu�
	Residencial^ objResidencial;
	array<String^>^ lineas = File::ReadAllLines("Residencial.txt");
	String^ separadores = ";";

	//Elemento por elemento de 1 arreglo
	for each (String ^ lineaResidencial in lineas) {

		array<String^>^ datos = lineaResidencial->Split(separadores->ToCharArray());
		// int codigo = Convert::ToInt32(datos[0]), de String a int
		String^ constructora = datos[0];
		String^ sectorUrbano = datos[1];
		int cantBloques = Convert::ToInt32(datos[2]);
		int cantDepartamentos = Convert::ToInt32(datos[3]);
		int cantTanques = Convert::ToInt32(datos[4]);
		int codigo;
		String^ ruc;
		String^ direccion;
		String^ telefono;
		String^ razonSocial;
		String^ ciudad;
		String^ distrito;
		String^ correo;
		int codigoBloque;
		int codigoDepa;
		String^ estacion;

		if (constructora->CompareTo(constructoraRES) == 0) { //Para comparar datos a mostrar
			objResidencial = gcnew Residencial(codigo, ruc, direccion, telefono, razonSocial, ciudad, distrito, correo, sectorUrbano, constructora, cantBloques, cantDepartamentos, codigoBloque, codigoDepa, cantTanques, estacion);
			break;
		}
	}
	return objResidencial;
}

void ResidencialController::actualizarResidencial(String^ constructora, String^sectorUrbano, int cantBloques, int cantDepartamentos, int cantTanques) {
	List<Residencial^>^ listaResidenciales = buscarResidencialesAll();
	for (int i = 0; i < listaResidenciales->Count; i++) {
		if (listaResidenciales[i]->getconstructora() == constructora) {
			listaResidenciales[i]->setsectorUrbano(sectorUrbano);
			listaResidenciales[i]->setcantBloques(cantBloques);
			listaResidenciales[i]->setcantDepartamentos(cantDepartamentos);
			listaResidenciales[i]->setcantTanques(cantTanques);
			break;
		}
	}
	escribirArchivo(listaResidenciales);
}



	