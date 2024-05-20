#include "Tipo.h"

using namespace ProyectoSuministroModel;

Tipo::Tipo() {

}

Tipo::Tipo(int ID, String^ descripcionID, Proveedor^ objProveedor, ReciboProveedor^ objReciboProveedor, Ahorros^ objAhorros, ReciboUsuario^ objReciboUsuario, FacturacionUsuario^ objFacturacionUsuario, MedidorConsumo^ objMedidorConsumo, InfoConsumo^ objInfoConsumo, HistorialConsumo^ objHistorialConsumo) {
	this->ID = ID;
	this->descripcionID = descripcionID;
	this->objProveedor = objProveedor;
	this->objReciboProveedor = objReciboProveedor;
	this->objAhorros = objAhorros;
	this->objReciboUsuario = objReciboUsuario;
	this->objFacturacionUsuario = objFacturacionUsuario;
	this->objMedidorConsumo = objMedidorConsumo;
	this->objInfoConsumo = objInfoConsumo;
	this->objHistorialConsumo = objHistorialConsumo;
}

int Tipo::getID() {
	return this->ID;
}
void Tipo::setID(int ID) {
	this->ID = ID;
}
String^ Tipo::getdescripcionID() {
	return this->descripcionID;
}
void Tipo::setdescripcionID(String^ descripcionID) {
	this->descripcionID = descripcionID;
}
Proveedor^ Tipo::getobjProveedor() {
	return this->objProveedor;
}
void Tipo::setobjProveedor(Proveedor^ objProveedor) {
	this->objProveedor = objProveedor;
}
ReciboProveedor^ Tipo::getobjReciboProveedor() {
	return this->objReciboProveedor;
}
void Tipo::setobjReciboProveedor(ReciboProveedor^ objReciboProveedor) {
	this->objReciboProveedor = objReciboProveedor;
}
Ahorros^ Tipo::getobjAhorros() {
	return this->objAhorros;
}
void Tipo::setobjAhorros(Ahorros^ objAhorros) {
	this->objAhorros = objAhorros;
}
ReciboUsuario^ Tipo::getobjReciboUsuario() {
	return this->objReciboUsuario;
}
void Tipo::setobjReciboUsuario(ReciboUsuario^ objReciboUsuario) {
	this->objReciboUsuario = objReciboUsuario;
}
FacturacionUsuario^ Tipo::getobjFacturacionUsuario() {
	return this->objFacturacionUsuario;
}
void Tipo::setobjFacturacionUsuario(FacturacionUsuario^ objFacturacionUsuario) {
	this->objFacturacionUsuario = objFacturacionUsuario;
}
MedidorConsumo^ Tipo::getobjMedidorConsumo() {
	return this->objMedidorConsumo;
}
void Tipo::setobjMedidorConsumo(MedidorConsumo^ objMedidorConsumo) {
	this->objMedidorConsumo = objMedidorConsumo;
}
InfoConsumo^ Tipo::getobjInfoConsumo() {
	return this->objInfoConsumo;
}
void Tipo::setobjInfoConsumo(InfoConsumo^ objInfoConsumo) {
	this->objInfoConsumo = objInfoConsumo;
}
HistorialConsumo^ Tipo::getobjHistorialConsumo() {
	return this->objHistorialConsumo;
}
void Tipo::setobjHistorialConsumo(HistorialConsumo^ objHistorialConsumo) {
	this->objHistorialConsumo = objHistorialConsumo;
}