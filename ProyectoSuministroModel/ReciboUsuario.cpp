#include "ReciboUsuario.h"

using namespace ProyectoSuministroModel;

ReciboUsuario::ReciboUsuario() {

}

ReciboUsuario::ReciboUsuario(int codigo, InterfazResidencial^ objInterfazResidencial, String^ fechaEmision, String^ fechaVencimiento, String^ periodoconsumo, String^ tarifa, List<FacturacionUsuario^>^ listaFacturacionUsuario) {
	this->codigo=codigo;
	this->objInterfazResidencial = objInterfazResidencial;
	this->fechaEmision = fechaEmision;
	this->fechaVencimiento = fechaVencimiento;
	this->periodoconsumo = periodoconsumo;
	this->tarifa = tarifa;
	this->listaFacturacionUsuario = listaFacturacionUsuario;
}

int ReciboUsuario::getcodigo() {
	return this->codigo;
}
void ReciboUsuario::setcodigo(int codigo) {
	this->codigo = codigo;
}
InterfazResidencial^ ReciboUsuario::getobjInterfazResidencial() {
	return this->objInterfazResidencial;
}
void ReciboUsuario::setobjInterfazResidencial(InterfazResidencial^ objInterfazResidencial) {
	this->objInterfazResidencial = objInterfazResidencial;
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
List<FacturacionUsuario^>^ ReciboUsuario::getlistaFacturacionUsuario() {
	return this->listaFacturacionUsuario;
}
void ReciboUsuario::setlistaFacturacionUsuario(List<FacturacionUsuario^>^ listaFacturacionUsuario) {
	this->listaFacturacionUsuario = listaFacturacionUsuario;
}