#include "ReciboController.h"

using namespace ProyectoSuministroController;
using namespace System::IO;

ReciboController::ReciboController() {

}

List<ReciboUsuario^>^ ProyectoSuministroController::ReciboController::buscarReciboxFecha(String^fechaEmisionRecibo) {
	List<ReciboUsuario^>^ listaRecibos = gcnew List<ReciboUsuario^>();
	array<String^>^ lineas = File::ReadAllLines("Recibo.txt");
	String^ separadores = ";";

	//Elemento por elemento de 1 arreglo
	for each (String ^ lineaRecibo in lineas) {

		array<String^>^ datos = lineaRecibo->Split(separadores->ToCharArray());
		// int codigo = Convert::ToInt32(datos[0]), de String a int
		int codigo = Convert::ToInt32(datos[0]);
		String^ fechaEmision = datos[1];
		String^ fechaVencimiento = datos[2];
		String^ tarifa = datos[3];
		String^ periodo = datos[4];
		List<FacturacionUsuario^>^ listaFacturacionUsuario;
		InterfazResidencial^ objInterfazResidencial;

		if (fechaEmision->Contains(fechaEmisionRecibo)) { //Para comparar datos a mostrar
			ReciboUsuario^ objReciboUsuario = gcnew ReciboUsuario(codigo, objInterfazResidencial, fechaEmision, fechaVencimiento, periodo, tarifa, listaFacturacionUsuario);
			listaRecibos->Add(objReciboUsuario); //Parece que debe implementarse TODOS sus parametros
		}
	}
	return listaRecibos;
}

List<ReciboUsuario^>^ ProyectoSuministroController::ReciboController::buscarRecibosAll() {
	List<ReciboUsuario^>^ listaRecibos = gcnew List<ReciboUsuario^>();
	array<String^>^ lineas = File::ReadAllLines("Recibo.txt");
	String^ separadores = ";";

	//Elemento por elemento de 1 arreglo
	for each (String ^ lineaRecibo in lineas) {

		array<String^>^ datos = lineaRecibo->Split(separadores->ToCharArray());
		// int codigo = Convert::ToInt32(datos[0]), de String a int
		int codigo = Convert::ToInt32(datos[0]);
		String^ fechaEmision = datos[1];
		String^ fechaVencimiento = datos[2];
		String^ tarifa = datos[3];
		String^ periodo = datos[4];
		List<FacturacionUsuario^>^ listaFacturacionUsuario;
		InterfazResidencial^ objInterfazResidencial;

	    ReciboUsuario^ objReciboUsuario = gcnew ReciboUsuario(codigo, objInterfazResidencial, fechaEmision, fechaVencimiento, periodo, tarifa, listaFacturacionUsuario);
        listaRecibos->Add(objReciboUsuario); //Parece que debe implementarse TODOS sus parametros
	}
	return listaRecibos;
}

void ProyectoSuministroController::ReciboController::agregarNuevoRecibo(int codigo, String^ fechaEmision, String^ fechaVencimiento, String^ tarifa, String^ periodoConsumo) {
	List<ReciboUsuario^>^ listaRecibos = buscarRecibosAll();
	InterfazResidencial^ objInterfazResidencial;
	List<FacturacionUsuario^>^ listaFacturacionUsuario;
	ReciboUsuario^ objReciboNuevo = gcnew ReciboUsuario(codigo, objInterfazResidencial, fechaEmision, fechaVencimiento, periodoConsumo, tarifa, listaFacturacionUsuario);
	listaRecibos->Add(objReciboNuevo);
	escribirArchivo(listaRecibos);
}

void ProyectoSuministroController::ReciboController::escribirArchivo(List<ReciboUsuario^>^ listaRecibos) {
	array<String^>^ lineasArchivo = gcnew array<String^>(listaRecibos->Count);
	for (int j = 0; j < listaRecibos->Count; j++) {
		ReciboUsuario^ objReciboUsuario = listaRecibos[j];
		lineasArchivo[j] = Convert::ToString(objReciboUsuario->getcodigo()) + ";" + objReciboUsuario->getfechaEmision() + ";" + objReciboUsuario->getfechaVencimiento() + ";" + objReciboUsuario->gettarifa() + ";" + objReciboUsuario->getperiodoconsumo();
	}
	File::WriteAllLines("Recibo.txt", lineasArchivo);
}