#include "FacturacionUsuario.h"

using namespace ProyectoSuministroModel;

FacturacionUsuario::FacturacionUsuario() :Facturacion() {

}

FacturacionUsuario::FacturacionUsuario(String^ ID, double serviciotuberias, String^ historialpagos, String^ mediopago, int NroFacturacion, double cargoFijo, double redondeoMesAnterior, double redondeoMesActual, double montofijo, double montoIGV, double montoTotal, Tipo^ objTipo, AlmacenamientoConsumo^ objAlmacenamientoConsumo, InformacionUsuario^ objInformacionUsuario, HistorialFacturas^ objHistorialFacturas) : Facturacion(NroFacturacion, cargoFijo, redondeoMesAnterior, redondeoMesActual, montofijo, montoIGV, montoTotal) {
	this->ID = ID;
	this->serviciotuberias = serviciotuberias;
	this->historialpagos = historialpagos;
	this->mediopago = mediopago;
	this->objTipo = objTipo;
	this->objAlmacenamientoConsumo = objAlmacenamientoConsumo;
	this->objInformacionUsuario = objInformacionUsuario;
	this->objHistorialFacturas = objHistorialFacturas;
}

String^ FacturacionUsuario::getID() {
	return this->ID;
}
void FacturacionUsuario::setID(String^ ID) {
	this->ID = ID;
}

double FacturacionUsuario::getserviciotuberias() {
	return this->serviciotuberias;
}

void FacturacionUsuario::setserviciotuberias(double serviciotuberias) {
	this->serviciotuberias = serviciotuberias;
}

String^ FacturacionUsuario::gethistorialpagos() {
	return this->historialpagos;
}

void FacturacionUsuario::sethistorialpagos(String^ historialpagos) {
	this->historialpagos = historialpagos;
}

String^ FacturacionUsuario::getmediopago() {
	return this->mediopago;
}

void FacturacionUsuario::setmediopago(String^ mediopago) {
	this->mediopago = mediopago;
}

Tipo^ FacturacionUsuario::getobjTipo() {
	return this->objTipo;
}

void FacturacionUsuario::setobjTipo(Tipo^ objTipo) {
	this->objTipo = objTipo;
}

AlmacenamientoConsumo^ FacturacionUsuario::getobjAlmacenamientoConsumo() {
	return this->objAlmacenamientoConsumo;
}

void FacturacionUsuario::setobjAlmacenamientoConsumo(AlmacenamientoConsumo^ objAlmacenamientoConsumo ) {
	this->objAlmacenamientoConsumo = objAlmacenamientoConsumo;
}

InformacionUsuario^ FacturacionUsuario::getobjInformacionUsuario() {
	return this->objInformacionUsuario;
}

void FacturacionUsuario::setobjInformacionUsuario(InformacionUsuario^ objInformacionUsuario) {
	this->objInformacionUsuario = objInformacionUsuario;
}
HistorialFacturas^ FacturacionUsuario::getobjHistorialFacturas() {
	return this->objHistorialFacturas;
}

void FacturacionUsuario::setobjHistorialFacturas(HistorialFacturas^ objHistorialFacturas) {
	this->objHistorialFacturas = objHistorialFacturas;
}
