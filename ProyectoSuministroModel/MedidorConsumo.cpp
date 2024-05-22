#include "MedidorConsumo.h"

using namespace ProyectoSuministroModel;

MedidorConsumo::MedidorConsumo(): Medidor(){

}

MedidorConsumo::MedidorConsumo(String^ ID, double longBandaMuerta, String^ alarma, String^ volumenSuministrado, double conversionVolumen, Tanque^ objTanque,String^tipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, double precision):Medidor( ID, tipoSensor,  Marca, Rango, Rangoestablecido,precision) {
	this->ID = ID;
	this->longBandaMuerta = longBandaMuerta;
	this->alarma = alarma;
	this->volumenSuministrado = volumenSuministrado;
	this->conversionVolumen = conversionVolumen;
	this->objTanque = objTanque;

}


String^ MedidorConsumo::getID() {
	return this->ID;
}
void MedidorConsumo::setID(String^ ID) {
	this->ID = ID;
}
double MedidorConsumo::getLongBandaMuerta() {
	return this->longBandaMuerta;
}
void MedidorConsumo::setLongBandaMuerta(double longBandaMuerta) {
	this->longBandaMuerta = longBandaMuerta;
}
String^ MedidorConsumo::getAlarma() {
	return this->alarma;
}
void MedidorConsumo::setAlarma(String^ alarma) {
	this->alarma = alarma;
}
String^ MedidorConsumo::getVolumenSuministrado() {
	return this->volumenSuministrado;
}
void MedidorConsumo::setVolumenSuministrado(String^ volumenSuministrado) {
	this->volumenSuministrado = volumenSuministrado;
}
double MedidorConsumo::getConversionVolumen() {
	return this->conversionVolumen;
}
void MedidorConsumo::setConversionVolumen(double conversionVolumen) {
	this->conversionVolumen = conversionVolumen;
}
Tanque^ MedidorConsumo::getObjTanque() {
	return this->objTanque;
}
void MedidorConsumo::setObjTanque(Tanque^ objTanque) {
	this->objTanque = objTanque;
}