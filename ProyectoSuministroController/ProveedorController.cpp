#include "ProveedorController.h"

using namespace ProyectoSuministroController;
using namespace System::IO;

ProveedorController::ProveedorController() {

}

List<Proveedor^>^ ProyectoSuministroController::ProveedorController::buscarProveedorxRUC(String^ RUCResidencial) {
	List<Proveedor^>^ listaProveedores = gcnew List<Proveedor^>();
	array<String^>^ lineas = File::ReadAllLines("Proveedor.txt");
	String^ separadores = ";";
	for each (String ^ lineaProveedor in lineas) {
		array<String^>^ datos = lineaProveedor->Split(separadores->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ razonSocial = datos[1];
		String^ ruc = datos[2];
		String^ calidadAgua = datos[3];
		String^ telefono= datos[4];
		String^ correo = datos[5];
		String^ calidadInfraestructura = datos[6];
		String^ servicioEmergencia = datos[7];
		String^ estacion = datos[8];
		String^ direccion;
		String^ ciudad;
		String^ distrito;

		if (ruc->CompareTo(RUCResidencial) == 0) {
			Proveedor^ objProveedor = gcnew Proveedor(codigo, calidadAgua, calidadInfraestructura, servicioEmergencia, estacion, ruc, direccion, telefono, razonSocial, ciudad, distrito, correo);
			listaProveedores->Add(objProveedor);
		}
	}
	return listaProveedores;
}