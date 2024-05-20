#include "ReciboMantenimiento.h"

using namespace ProyectoSuministroModel;

ReciboMantenimiento::ReciboMantenimiento() {

}

ReciboMantenimiento::ReciboMantenimiento(double MantenimientoTuberias, double MantenimientoRedesElectricas, double MantenimientoGas, double MantenimientoGeneralMensual, double montototalMensual, Residencial^ objResidencial) {
	this->MantenimientoTuberias=MantenimientoTuberias;
	this->MantenimientoRedesElectricas = MantenimientoRedesElectricas;
	this->MantenimientoGas = MantenimientoGas;
	this->MantenimientoGeneralMensual = MantenimientoGeneralMensual;
	this->montototalMensual = montototalMensual;
	this->objResidencial = objResidencial;
}
double ReciboMantenimiento::getMantenimientoTuberias() {
	return this->MantenimientoTuberias;
}
void ReciboMantenimiento::setMantenimientoTuberias(double MantenimientoTuberias) {
	this->MantenimientoTuberias = MantenimientoTuberias;
}
double ReciboMantenimiento::getMantenimientoRedesElectricas() {
	return this->MantenimientoRedesElectricas;
}
void ReciboMantenimiento::setMantenimientoRedesElectricas(double MantenimientoRedesElectricas) {
	this->MantenimientoRedesElectricas = MantenimientoRedesElectricas;
}
double ReciboMantenimiento::getMantenimientoGas() {
	return this->MantenimientoGas;
}
void ReciboMantenimiento::setMantenimientoGas(double MantenimientoGas) {
	this->MantenimientoGas = MantenimientoGas;
}
double ReciboMantenimiento::getMantenimientoGeneralMensual() {
	return this->MantenimientoGeneralMensual;
}
void ReciboMantenimiento::setMantenimientoGeneralMensual(double MantenimientoGeneralMensual) {
	this->MantenimientoGeneralMensual = MantenimientoGeneralMensual;
}
double ReciboMantenimiento::getmontototalMensual() {
	return this->montototalMensual;
}
void ReciboMantenimiento::setmontototalMensual(double montototalMensual) {
	this->montototalMensual = montototalMensual;
}
Residencial^ ReciboMantenimiento::getobjResidencial() {
	return this->objResidencial;
}
void ReciboMantenimiento::setobjResidencial(Residencial^ objResidencial) {
	this->objResidencial = objResidencial;
}