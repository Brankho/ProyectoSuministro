#include "Medidor.h"

using namespace ProyectoSuministroModel;

Medidor::Medidor(){
}

Medidor::Medidor(String^ ID, String^ tipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, double precision) {
	this->ID = ID;
	this->tipoSensor = tipoSensor;
	this->Marca = Marca;
	this->Rango = Rango;
	this->Rangoestablecido = Rangoestablecido;
	this->precision = precision;

}
String^ Medidor::getID() {
	return this->ID;
}
void Medidor::setID(String^ ID) {
	this->ID = ID;
}
String^ Medidor::getTipoSensor() {
	return this->tipoSensor;
}
void  Medidor::setTipoSensor(String^ tipoSensor) {
	this->tipoSensor = tipoSensor;
}
String^ Medidor::getMarca() {
	return this->Marca;
}
void Medidor::setMarca(String^ Marca) {
	this->Marca = Marca;
}
String^ Medidor::getRango() {
	return this->Rango;
}
void Medidor::setRango(String^ Rango) {
	this->Rango = Rango;
}
String^ Medidor::getRangoestablecido() {
	return this->Rangoestablecido;
}
void Medidor::setRangoestablecido(String^ Rangoestablecido) {
	this->Rangoestablecido = Rangoestablecido;
}
double Medidor::getPrecision() {
	return this->precision;
}
void Medidor::setPrecision(double precision) {
	this->precision = precision;
}