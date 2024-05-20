#include "Sensor.h"

using namespace ProyectoSuministroModel;

Sensor::Sensor() {

}

Sensor::Sensor(String^ TipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, String^ TipoSe�al, double precision) {
	this->TipoSe�al = TipoSe�al;
	this->TipoSensor = TipoSensor;
	this->Marca = Marca;
	this->Rango = Rango;
	this->Rangoestablecido = Rangoestablecido;
	this->precision = precision;
}

String^ Sensor::getTipoSensor() {
	return this->TipoSensor;
}
void Sensor::setTipoSensor(String^ TipoSensor) {
	this->TipoSensor = TipoSensor;
}
String^ Sensor::getMarca() {
	return this->Marca;
}
void Sensor::setMarca(String^ Marca) {
	this->Marca = Marca;
}
String^ Sensor::getRango() {
	return this->Rango;
}
void Sensor::setRango(String^ Rango) {
	this->Rango = Rango;
}
String^ Sensor::getRangoestablecido() {
	return this->Rangoestablecido;
}
void Sensor::setRangoestablecido(String^ Rangoestablecido) {
	this->Rangoestablecido = Rangoestablecido;
}
String^ Sensor::getTipoSe�al() {
	return this->TipoSe�al;
}
void Sensor::setTipoSe�al(String^ TipoSe�al) {
	this->TipoSe�al = TipoSe�al;
}
double Sensor::getprecision() {
	return this->precision;
}
void Sensor::setprecision(double precision) {
	this->precision = precision;
}