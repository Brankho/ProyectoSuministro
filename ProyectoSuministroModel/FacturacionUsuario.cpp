#include "FacturacionUsuario.h"

using namespace ProyectoSuministroModel;

FacturacionUsuario::FacturacionUsuario() :Facturacion() {

}

FacturacionUsuario::FacturacionUsuario(double serviciotuberias, String^ historialpagos, String^ mediopago, double cargoFijo, double redondeoMesAnterior, double redondeoMesActual, double montoIGV, double montoTotal, List<MedidorConsumo^>^ listaMedidorConsumo) :Facturacion(cargoFijo, redondeoMesAnterior, redondeoMesActual, montoIGV, montoTotal) {
	this->serviciotuberias = serviciotuberias;
	this->historialpagos = historialpagos;
	this->mediopago = mediopago;
	this->listaMedidorConsumo = listaMedidorConsumo;
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

List<MedidorConsumo^>^ FacturacionUsuario::getlistaMedidorConsumo() {
	return this->listaMedidorConsumo;
}

void FacturacionUsuario::setlistaMedidorConsumo(List<MedidorConsumo^>^ listaMedidorConsumo) {
	this->listaMedidorConsumo = listaMedidorConsumo;
}