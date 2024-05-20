#include "Facturacion.h"

using namespace ProyectoSuministroModel;

Facturacion::Facturacion() {

}

Facturacion::Facturacion(double cargoFijo, double redondeoMesAnterior, double redondeoMesActual, double montoIGV, double montoTotal) {
	this->cargoFijo = cargoFijo;
	this->redondeoMesAnterior = redondeoMesAnterior;
	this->redondeoMesActual = redondeoMesActual;
	this->montoIGV = montoIGV;
	this->montoTotal = montoTotal;
}

double Facturacion::getcargofijo() {
	return this->cargoFijo;
}
void Facturacion::setcargofijo(double cargoFijo) {
	this->cargoFijo = cargoFijo;
}
double Facturacion::getredondeoMesAnterior() {
	return this->redondeoMesAnterior;
}

void Facturacion::setredondeoMesAnterior(double RedondeoMesAnterior) {
	this->redondeoMesAnterior = redondeoMesAnterior;
}

double Facturacion::getredondeoMesActual() {
	return this->redondeoMesActual;
}

void Facturacion::setredondeoMesActual(double redondeoMesActual) {
	this->redondeoMesActual = redondeoMesActual;
}

double Facturacion::getmontoIGV() {
	return this->montoIGV;
}

void Facturacion::setmontoIGV(double montoIGV) {
	this->montoIGV = montoIGV;
}

double Facturacion::getmontoTotal() {
	return this->montoTotal;
}

void Facturacion::setmontoTotal(double montoTotal) {
	this->montoTotal = montoTotal;
}