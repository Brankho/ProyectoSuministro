#include "FacturacionProveedor.h"

using namespace ProyectoSuministroModel;


FacturacionProveedor::FacturacionProveedor():Facturacion(){

}


FacturacionProveedor::FacturacionProveedor(int codigoRecibo, String^ volumenVariableMedida, double costoestacion, Tipo^ objTipo, Proveedor^ objProveedor, Residencial^ objResidencial, int NroFacturacion, double cargoFijo, double redondeoMesAnterior, double redondeoMesActual, double montofijo, double montoIGV, double montoTotal) :Facturacion(NroFacturacion, cargoFijo, redondeoMesAnterior, redondeoMesActual, montofijo, montoIGV, montoTotal) {

	this->codigoRecibo = codigoRecibo;
	this->volumenVariableMedida = volumenVariableMedida;
	this->costoestacion = costoestacion;
	this->objTipo = objTipo;
	this->objProveedor = objProveedor;
	this->objResidencial = objResidencial;

}

int FacturacionProveedor::getcodigoRecibo() {
	return this->codigoRecibo;
}
void FacturacionProveedor::setcodigoRecibo(int codigoRecibo) {
	this->codigoRecibo = codigoRecibo;
}
String^ FacturacionProveedor::getvolumenVariableMedida() {
	return this->volumenVariableMedida;
}
void FacturacionProveedor::setvolumenVariableMedida(String^ volumenVariableMedida) {
	this->volumenVariableMedida = volumenVariableMedida;
}
double FacturacionProveedor::getcostoestacion() {
	return this->costoestacion;
}
void FacturacionProveedor::setcostoestacion(double costoestacion) {
	this->costoestacion = costoestacion;
}

Tipo^ FacturacionProveedor::getobjTipo() {
	return this->objTipo;
}

void FacturacionProveedor::setobjTipo(Tipo^ objTipo) {

	this->objTipo = objTipo;
}

Proveedor^ FacturacionProveedor::getobjProveedor() {
	return this->objProveedor;
}

void FacturacionProveedor::setobjProveedor(Proveedor^ objProveedor) {

	this->objProveedor = objProveedor;
}
Residencial^ FacturacionProveedor::getobjResidencial() {
	return this->objResidencial;
}

void FacturacionProveedor::setobjResidencial(Residencial^ objResidencial) {

	this->objResidencial = objResidencial;
}