#include "ControladorAguaCaliente.h"

using namespace ProyectoSuministroModel;

ControladorAguaCaliente::ControladorAguaCaliente() {

}

ControladorAguaCaliente::ControladorAguaCaliente(String^ Conexion, String^ EstadoConexion, double Temperaturadeseada, double IndicadorTemperatura, InterfazResidencial^ objInterfazResidencial) {
	this->Conexion = Conexion;
	this->EstadoConexion = EstadoConexion;
	this->Temperaturadeseada = Temperaturadeseada;
	this->IndicadorTemperatura = IndicadorTemperatura;
	this->objInterfazResidencial = objInterfazResidencial;
}

String^ ControladorAguaCaliente::getConexion() {
	return this->Conexion;
}

void ControladorAguaCaliente::setConexion(String^ Conexion) {
	this->Conexion = Conexion;
}

String^ ControladorAguaCaliente::getEstadoConexion() {
	return this->EstadoConexion;
}

void ControladorAguaCaliente::setEstadoConexion(String^ EstadoConexion) {
	this->EstadoConexion = EstadoConexion;
}

double ControladorAguaCaliente::getTemperaturadeseada() {
	return this->Temperaturadeseada;
}

void ControladorAguaCaliente::setTemperaturadeseada(double Temperaturadeseada) {
	this->Temperaturadeseada = Temperaturadeseada;
}

double ControladorAguaCaliente::getIndicadorTemperatura() {
	return this->IndicadorTemperatura;
}

void ControladorAguaCaliente::setIndicadorTemperatura(double IndicadorTemperatura) {
	this->IndicadorTemperatura = IndicadorTemperatura;
}

InterfazResidencial^ ControladorAguaCaliente::getobjInterfazResidencial() {
	return this->objInterfazResidencial;
}

void ControladorAguaCaliente::setobjInterfazResidencial(InterfazResidencial^ objInterfazResidencial) {
	this->objInterfazResidencial = objInterfazResidencial;

}