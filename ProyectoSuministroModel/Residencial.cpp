#include "Residencial.h"

using namespace ProyectoSuministroModel;

Residencial::Residencial() {

}

Residencial::Residencial(int codigo, String^ ruc, String^ direccion, String^ telefono, String^ razonSocial, String^ ciudad, String^ distrito, String^ correo, String^ sectorUrbano, String^ constructora, int cantBloques, int cantDepartamentos, int codigoBloque, int codigoDepa, int cantTanques, String^ estacion) {
	this->sectorUrbano = sectorUrbano;
	this->constructora = constructora;
	this->cantBloques = cantBloques;
	this->cantDepartamentos = cantDepartamentos;
	this->cantTanques = cantTanques;
	this->codigoBloque = codigoBloque;
	this->codigoDepa = codigoDepa;
	this->estacion = estacion;
}


String^ Residencial::getsectorUrbano() {
	return this->sectorUrbano;
}
void Residencial::setsectorUrbano(String^ sectorUrbano) {
	this->sectorUrbano = sectorUrbano;
}
String^ Residencial::getconstructora() {
	return this->constructora;
}
void Residencial::setconstructora(String^ constructora) {
	this->constructora = constructora;
}
int Residencial::getcantBloques() {
	return this->cantBloques;
}
void Residencial::setcantBloques(int cantBloques) {
	this->cantBloques = cantBloques;
}
int Residencial::getcantDepartamentos() {
	return this->cantDepartamentos;
}
void Residencial::setcantDepartamentos(int cantDepartamentos) {
	this->cantDepartamentos = cantDepartamentos;
}
int Residencial::getcodigoBloque() {
	return this->codigoBloque;
}
void Residencial::setcodigoBloque(int codigoBloque) {
	this->codigoBloque = codigoBloque;
}
int Residencial::getcodigoDepa() {
	return this->codigoDepa;
}
void Residencial::setcodigoDepa(int codigoDepa) {
	this->codigoDepa = codigoDepa;
}
int Residencial::getcantTanques() {
	return this->cantTanques;
}
void Residencial::setcantTanques(int cantTanques) {
	this->cantTanques = cantTanques;
}
String^ Residencial::getestacion() {
	return this->estacion;
}

void Residencial::setestacion(String^ estacion) {
	this->estacion = estacion;
}
