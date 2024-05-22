#include "MedidorTemperatura.h"

using namespace ProyectoSuministroModel;

MedidorTemperatura::MedidorTemperatura() :Medidor() {

}

MedidorTemperatura::MedidorTemperatura(double lectura, String^ ubicacion, String^ unidadMedida, String^ ID, String^ tipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, double precision):Medidor( ID,  tipoSensor, Marca, Rango, Rangoestablecido, precision){
	this->lectura = lectura;
	this->ubicacion = ubicacion;
	this->unidadMedida = unidadMedida;

}

double MedidorTemperatura::getLectura() {
    return this->lectura;
}
void MedidorTemperatura::setLectura(double lectura) {
    this->lectura = lectura;
}
String^ MedidorTemperatura::getUbicacion() {
    return this->ubicacion;
}
void MedidorTemperatura::setUbicacion(String^ ubicacion) {
    this->ubicacion = ubicacion;
}
String^ MedidorTemperatura::getUnidadMedida() {
    return this->unidadMedida;
}
void MedidorTemperatura::setUnidadMedida(String^ unidadMedida) {
    this->unidadMedida = unidadMedida;
}