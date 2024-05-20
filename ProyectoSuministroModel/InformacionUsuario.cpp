#include "InformacionUsuario.h"

using namespace ProyectoSuministroModel;

InformacionUsuario::InformacionUsuario() {

}

InformacionUsuario::InformacionUsuario(int codigo, int celular, String^ titular, String^ DNI, String^ direccion, String^ distrito, String^ tarifa, String^ unidadUso, String^ correo, InterfazResidencial^ objInterfazResidencial, Residencial^ objResidencial) {
	this->codigo = codigo;
	this->celular = celular;
	this->titular = titular;
	this->DNI = DNI;
	this->direccion = direccion;
	this->distrito = distrito;
	this->tarifa = tarifa;
	this->unidadUso = unidadUso;
	this->correo = correo;
	this->objInterfazResidencial = objInterfazResidencial;
	this->objResidencial = objResidencial;
}

int InformacionUsuario::getcodigo() {
	return this->codigo;
}

void InformacionUsuario::setcodigo(int codigo) {
	this->codigo = codigo;
}

int InformacionUsuario::getcelular() {

	return this->celular;
}

void InformacionUsuario::setcelular(int celular) {
	this->celular = celular;
}

String^ InformacionUsuario::gettitular() {
	return this->titular;
}

void InformacionUsuario::settitular(String^ titular) {
	this->titular = titular;
}

String^ InformacionUsuario::getDNI() {
	return this->DNI;
}

void InformacionUsuario::setDNI(String^ DNI) {
	this->DNI = DNI;
}

String^ InformacionUsuario::getdireccion() {
	return this->direccion;
}

void InformacionUsuario::setdireccion(String^ direccion) {
	this->direccion = direccion;
}

String^ InformacionUsuario::getdistrito() {
	return this->distrito;
}

void InformacionUsuario::setdistrito(String^ distrito) {
	this->distrito = distrito;
}

String^ InformacionUsuario::gettarifa() {
	return this->tarifa;
}

void InformacionUsuario::settarifa(String^ tarifa) {
	this->tarifa = tarifa;
}

String^ InformacionUsuario::getunidadUso() {
	return this->unidadUso;
}

void InformacionUsuario::setunidadUso(String^ unidadUso) {
	this->unidadUso = unidadUso;
}

String^ InformacionUsuario::getcorreo() {
	return this->correo;
}

void InformacionUsuario::setcorreo(String^ correo) {
	this->correo = correo;
}

InterfazResidencial^ InformacionUsuario::getobjInterfazResidencial() {
	return this->objInterfazResidencial;
}

void InformacionUsuario::setobjInterfazResidencial(InterfazResidencial^ objInterfazResidencial) {
	this->objInterfazResidencial = objInterfazResidencial;
}

Residencial^ InformacionUsuario::getobjResidencial() {
	return this->objResidencial;
}

void InformacionUsuario::setobjResidencial(Residencial^ objResidencial) {
	this->objResidencial = objResidencial;
}