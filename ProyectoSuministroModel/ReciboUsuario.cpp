#include "ReciboUsuario.h"

using namespace ProyectoSuministroModel;

ReciboUsuario::ReciboUsuario() {

}

ReciboUsuario::ReciboUsuario(int codigo, String^ fechaEmision, String^ fechaVencimiento, String^ periodoconsumo, String^ tarifa, FacturacionUsuario^ objFacturacionUsuario) {
	this->codigo=codigo;
	this->fechaEmision = fechaEmision;
	this->fechaVencimiento = fechaVencimiento;
	this->periodoconsumo = periodoconsumo;
	this->tarifa = tarifa;
	this->objFacturacionUsuario = objFacturacionUsuario;
}

int ReciboUsuario::getcodigo() {
	return this->codigo;
}
void ReciboUsuario::setcodigo(int codigo) {
	this->codigo = codigo;
}
String^ ReciboUsuario::getfechaEmision() {
	return this->fechaEmision;
}
void ReciboUsuario::setfechaEmision(String^ fechaEmision) {
	this->fechaEmision = fechaEmision;
}
String^ ReciboUsuario::getfechaVencimiento() {
	return this->fechaVencimiento;
}
void ReciboUsuario::setfechaVencimiento(String^ fechaVencimiento) {
	this->fechaVencimiento = fechaVencimiento;
}
String^ ReciboUsuario::getperiodoconsumo() {
	return this->periodoconsumo;
}
void ReciboUsuario::setperiodoconsumo(String^ periodoconsumo) {
	this->periodoconsumo = this->periodoconsumo;
}
String^ ReciboUsuario::gettarifa() {
	return this->tarifa;
}
void ReciboUsuario::settarifa(String^ tarifa) {
	this->tarifa = tarifa;
}
FacturacionUsuario^ ReciboUsuario::getobjFacturacionUsuario() {
	return this->objFacturacionUsuario;
}
void ReciboUsuario::setobjFacturacionUsuario(FacturacionUsuario^ objFacturacionUsuario) {
	this->objFacturacionUsuario = objFacturacionUsuario;
}