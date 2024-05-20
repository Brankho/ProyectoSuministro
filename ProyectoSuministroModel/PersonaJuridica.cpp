#include "PersonaJuridica.h"

using namespace ProyectoSuministroModel;

PersonaJuridica::PersonaJuridica() {

}

PersonaJuridica::PersonaJuridica(int codigo, String^ ruc, String^ direccion, String^ telefono, String^ razonSocial, String^ ciudad, String^ distrito, String^ correo) {
	this->codigo = codigo;
	this->ruc = ruc;
	this->direccion = direccion;
	this->telefono = telefono;
	this->razonSocial = razonSocial;
	this->ciudad = ciudad;
	this->distrito = distrito;
	this->correo = correo;
}


int PersonaJuridica::getcodigo() {
	return this->codigo;
}

void PersonaJuridica::setcodigo(int codigo) {
	this->codigo = codigo;
}

String^ PersonaJuridica::getruc() {
	return this->ruc;
}

void PersonaJuridica::setruc(String^ ruc) {
	this->ruc = ruc;
}

String^ PersonaJuridica::getdireccion() {
	return this->direccion;
}

void PersonaJuridica::setdireccion(String^ direccion) {
	this->direccion = direccion;
}

String^ PersonaJuridica::gettelefono() {
	return this->telefono;
}

void PersonaJuridica::settelefono(String^ telefono) {
	this->telefono = telefono;
}

String^ PersonaJuridica::getrazonSocial() {
	return this->razonSocial;
}

void PersonaJuridica::setrazonSocial(String^ razonSocial) {
	this->razonSocial = razonSocial;
}

String^ PersonaJuridica::getciudad() {
	return this->ciudad;
}

void PersonaJuridica::setciudad(String^ ciudad) {
	this->ciudad = ciudad;
}

String^ PersonaJuridica::getdistrito() {
	return this->distrito;
}

void PersonaJuridica::setdistrito(String^ distrito) {
	this->distrito = distrito;
}

String^ PersonaJuridica::getcorreo() {
	return this->correo;
}

void PersonaJuridica::setcorreo(String^ correo) {
	this->correo = correo;
}