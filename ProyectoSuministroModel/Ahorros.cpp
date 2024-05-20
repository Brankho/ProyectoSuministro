#include "Ahorros.h"

using namespace ProyectoSuministroModel;

//NombreClase :: NombreMetodo(parametros)

Ahorros::Ahorros() {
	//Constructor vacío por defecto
}

Ahorros::Ahorros(double AhorroMensual, double AhorroAnual, double volumenAhorrado, double descuentos, InterfazResidencial^ objInterfazResidencial) {
	this->AhorroMensual = AhorroMensual;
	this->AhorroAnual = AhorroAnual;
	this->volumenAhorrado = volumenAhorrado;
	this->descuentos = descuentos;
	this->objInterfazResidencial = objInterfazResidencial;
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

InterfazResidencial^ Ahorros::getobjInterfazResidencial() {
	return this->objInterfazResidencial;
}

void Ahorros::setobjInterfazResidencial(InterfazResidencial^ objInterfazResidencial) {
	this->objInterfazResidencial = objInterfazResidencial;
}