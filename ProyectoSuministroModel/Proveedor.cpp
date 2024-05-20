#include "Proveedor.h"

using namespace ProyectoSuministroModel;

Proveedor::Proveedor() :PersonaJuridica() {

}

Proveedor::Proveedor(int codigo, String^ calidadagua, String^ calidadinfraestructura, String^ ServicioEmergencia, String^ estacion, String^ ruc, String^ direccion, String^ telefono, String^ razonSocial, String^ ciudad, String^ distrito, String^ correo) :PersonaJuridica(codigo, ruc, direccion, telefono, razonSocial, ciudad, distrito, correo) {
	this->calidadagua = calidadagua;
	this->calidadinfraestructura = calidadinfraestructura;
	this->ServicioEmergencia = ServicioEmergencia;
	this->estacion = estacion;
}

String^ Proveedor::getcalidadagua() {
	return this->calidadagua;
}
void Proveedor::setcalidadagua(String^ calidadagua) {
	this->calidadagua = calidadagua;
}
String^ Proveedor::getcalidadinfraestructura() {
	return this->calidadinfraestructura;
}
void Proveedor::setcalidadinfraestructura(String^ calidadinfraestructura) {
	this->calidadinfraestructura = calidadinfraestructura;
}
String^ Proveedor::getServicioEmergencia() {
	return this->ServicioEmergencia;
}
void Proveedor::setServicioEmergencia(String^ ServicioEmergencia) {
	this->ServicioEmergencia = ServicioEmergencia;
}
String^ Proveedor::getestacion() {
	return this->estacion;
}
void Proveedor::setestacion(String^ estacion) {
	this->estacion = estacion;
}