#include "Ahorros.h"

using namespace ProyectoSuministroModel;

//NombreClase :: NombreMetodo(parametros)

Ahorros::Ahorros() {
	//Constructor vacío por defecto
}

Ahorros::Ahorros(double AhorroMensual, double AhorroAnual, double volumenAhorrado, double descuentos, InformacionUsuario^ objInformacionUsuario, Tipo^ objTipo) {
	this->AhorroMensual = AhorroMensual;
	this->AhorroAnual = AhorroAnual;
	this->volumenAhorrado = volumenAhorrado;
	this->descuentos = descuentos;
	this->objInformacionUsuario = objInformacionUsuario;
	this->objTipo = objTipo;
}

double Ahorros::getAhorroMensual() {
	return this->AhorroMensual;
}

void Ahorros::setAhorroMensual(double AhorroMensual) {
	this->AhorroMensual = AhorroMensual;
}

double Ahorros::getAhorroAnual() {
	return this->AhorroAnual;
}

void Ahorros::setAhorroAnual(double AhorroAnual) {
	this->AhorroAnual = AhorroAnual;
}

double Ahorros::getvolumenAhorrado() {
	return this->volumenAhorrado;
}

void Ahorros::setvolumenAhorrado(double volumenAhorrado) {
	this->volumenAhorrado = volumenAhorrado;

}

double Ahorros::getdescuentos() {
	return this->descuentos;
}

void Ahorros::setdescuentos(double descuentos) {
	this->descuentos = descuentos;
}

InformacionUsuario^ Ahorros::getobjInformacionUsuario() {
	return this->objInformacionUsuario;
}

void Ahorros::setobjInformacionUsuario(InformacionUsuario^ objInformacionUsuario) {
	this->objInformacionUsuario = objInformacionUsuario;
}

Tipo^ Ahorros::getobjTipo() {
	return this->objTipo;
}

void Ahorros::setobjTipo(Tipo^ objTipo) {
	this->objTipo = objTipo;
}