#include "ReciboProveedor.h"

using namespace ProyectoSuministroModel;

ReciboProveedor::ReciboProveedor() {

}

ReciboProveedor::ReciboProveedor(int codigorecibo, Residencial^ objResidencial, String^ volumenvariablemedida, double costoEstacion, Proveedor^ objProveedor, double cargoFijo, double redondeoMesAnterior, double redondeoMesActual, double montoIGV, double montoTotal):Facturacion(cargoFijo, redondeoMesAnterior, redondeoMesActual, montoIGV, montoTotal) {
	this->codigorecibo=codigorecibo;
	this->volumenvariablemedida = volumenvariablemedida;
	this->costoEstacion = costoEstacion;
}

int ReciboProveedor::getcodigorecibo() {
	return this->codigorecibo;
}
void ReciboProveedor::setcodigorecibo(int codigorecibo) {
	this->codigorecibo = codigorecibo;
}
String^ ReciboProveedor::getvolumenvariablemedida() {
	return this->volumenvariablemedida;
}
void ReciboProveedor::setvolumenvariablemedida(String^ volumenvariablemedida) {
	this->volumenvariablemedida = volumenvariablemedida;
}
double ReciboProveedor::getcostoEstacion() {
	return this->costoEstacion;
}
void ReciboProveedor::setcostoEstacion(double costoEstacion) {
	this->costoEstacion = costoEstacion;
}