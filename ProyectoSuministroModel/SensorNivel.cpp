#include "SensorNivel.h"

using namespace ProyectoSuministroModel;

SensorNivel::SensorNivel() {

}

SensorNivel::SensorNivel(String^ Alarma, String^ Fluido, double longbandamuerta, double VolumenSuministrado, Tanque^ objTanque, String^ TipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, String^ TipoSeñal, double precision) :Sensor(TipoSensor, Marca, Rango, Rangoestablecido, TipoSeñal, precision) {
	this->longbandamuerta = longbandamuerta;
	this->Alarma = Alarma;
	this->Fluido = Fluido;
	this->VolumenSuministrado = VolumenSuministrado;
}

String^ SensorNivel::getAlarma() {
	return this->Alarma;
}
void SensorNivel::setAlarma(String^ Alarma) {
	this->Alarma = Alarma;
}
String^ SensorNivel::getFluido() {
	return this->Fluido;
}
void SensorNivel::setFluido(String^ Fluido) {
	this->Fluido = Fluido;
}
double SensorNivel::getlongbandamuerta() {
	return this->longbandamuerta;
}
void SensorNivel::setlongbandamuerta(double longbandamuerta) {
	this->longbandamuerta = longbandamuerta;
}
double SensorNivel::getVolumenSuministrado() {
	return this->VolumenSuministrado;
}
void SensorNivel::setVolumenSuministrado(double VolumenSuministrado) {
	this->VolumenSuministrado = VolumenSuministrado;
}
