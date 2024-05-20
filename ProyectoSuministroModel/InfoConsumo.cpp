#include "InfoConsumo.h"

using namespace ProyectoSuministroModel;

InfoConsumo::InfoConsumo() {

}

InfoConsumo::InfoConsumo(String^ mesConsumido, double nivelConsumido, double lecturaAnteriorVolumen, double lecturaActualVolumen, List<HistorialConsumo^>^ listaHistorialConsumo) {
	this->mesConsumido = mesConsumido;
	this->nivelConsumido = nivelConsumido;
	this->lecturaAnteriorVolumen = lecturaAnteriorVolumen;
	this->lecturaActualVolumen = lecturaActualVolumen;
	this->listaHistorialConsumo = listaHistorialConsumo;
}

String^ InfoConsumo::getmesConsumido() {
	return this->mesConsumido;
}

void InfoConsumo::setmesConsumido(String^ mesConsumido) {
	this->mesConsumido = mesConsumido;
}

double InfoConsumo::getnivelConsumido() {
	return this->nivelConsumido;
}

void InfoConsumo::setnivelConsumido(double nivelConsumido) {
	this->nivelConsumido = nivelConsumido;
}

double InfoConsumo::getlecturaAnteriorVolumen() {
	return this->lecturaAnteriorVolumen;
}

void InfoConsumo::setlecturaAnteriorVolumen(double lecturaAnteriorVolumen) {
	this->lecturaAnteriorVolumen = lecturaAnteriorVolumen;
}

double InfoConsumo::getlecturaActualVolumen() {
	return this->lecturaActualVolumen;
}

void InfoConsumo::setlecturaActualVolumen(double lecturaActualVolumen) {
	this->lecturaActualVolumen = lecturaActualVolumen;
}

List<HistorialConsumo^>^ InfoConsumo::getlistaHistorialConsumo() {
	return this->listaHistorialConsumo;
}

void InfoConsumo::setlistaHistorialConsumo(List<HistorialConsumo^>^ listaHistorialConsumo) {
	this->listaHistorialConsumo = listaHistorialConsumo;
}