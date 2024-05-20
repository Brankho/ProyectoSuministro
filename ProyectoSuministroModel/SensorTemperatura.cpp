#include "SensorTemperatura.h"

using namespace ProyectoSuministroModel;

SensorTemperatura::SensorTemperatura() {

}

SensorTemperatura::SensorTemperatura(double lectura, String^ ubicacion, String^ unidadMedida, ControladorAguaCaliente^ objControladorAguaCaliente, String^ TipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, String^ TipoSeñal, double precision) :Sensor(TipoSensor, Marca, Rango, Rangoestablecido, TipoSeñal, precision) {
	this->lectura = lectura;
	this->ubicacion = ubicacion;
	this->unidadMedida = unidadMedida;
}

double SensorTemperatura::getlectura() {
	return this->lectura;
}
void SensorTemperatura::setlectura(double lectura) {
	this->lectura = lectura;
}
String^ SensorTemperatura::getubicacion() {
	return this->ubicacion;
}
void SensorTemperatura::setubicacion(String^ ubicacion) {
	this->ubicacion = ubicacion;
}
String^ SensorTemperatura::getunidadMedida() {
	return this->unidadMedida;
}
void SensorTemperatura::setunidadMedida(String^ unidadMedida) {
	this->unidadMedida = unidadMedida;
}