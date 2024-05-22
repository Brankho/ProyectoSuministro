#include "ControladorAguaCaliente.h"

using namespace ProyectoSuministroModel;

ControladorAguaCaliente::ControladorAguaCaliente() {

}

ControladorAguaCaliente::ControladorAguaCaliente(String^ Conexion, String^ EstadoConexion, double Temperaturadeseada, double IndicadorTemperatura, Residencial^ objResidencial, MedidorTemperatura^ objMedidorTemperatura) {
	this->Conexion = Conexion;
	this->EstadoConexion = EstadoConexion;
	this->Temperaturadeseada = Temperaturadeseada;
	this->IndicadorTemperatura = IndicadorTemperatura;
	this->objResidencial = objResidencial;
	this->objMedidorTemperatura = objMedidorTemperatura;
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
Residencial^ ControladorAguaCaliente::getobjResidencial() {
	return this->objResidencial;
}
void ControladorAguaCaliente::setobjResidencial(Residencial^ objResidencial) {
	this->objResidencial = objResidencial;

}
MedidorTemperatura^ ControladorAguaCaliente::getobjMedidorTemperatura() {
	return this->objMedidorTemperatura;
}
void ControladorAguaCaliente::setobjMedidorTemperatura(MedidorTemperatura^ objMedidorTemperatura) {
	this->objMedidorTemperatura = objMedidorTemperatura;

}