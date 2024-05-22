#include "AlmacenamientoConsumo.h"

using namespace ProyectoSuministroModel;

AlmacenamientoConsumo::AlmacenamientoConsumo(){}
AlmacenamientoConsumo::AlmacenamientoConsumo(String^ ID, String^ mesConsumido, double nivelConsumido, double lecturaAnteriorVolumen, double lecturaActualVolumen, MedidorConsumo^ objMedidorConsumo, InformacionUsuario^ objInformacionUsuario) {

	this->ID = ID;
	this->mesConsumido = mesConsumido; 
	this->nivelConsumido = nivelConsumido;
	this->lecturaAnteriorVolumen = lecturaAnteriorVolumen;
	this->lecturaActualVolumen = lecturaActualVolumen;
    this->objMedidorConsumo = objMedidorConsumo;
    this->objInformacionUsuario = objInformacionUsuario;
	
}

String^ AlmacenamientoConsumo::getID() {
    return this->ID;
}
void AlmacenamientoConsumo::setID(String^ ID) {
    this->ID = ID;
}
String^ AlmacenamientoConsumo::getMesConsumido() {
    return this->mesConsumido;
}
void AlmacenamientoConsumo::setMesConsumido(String^ mesConsumido) {
    this->mesConsumido = mesConsumido;
}
double AlmacenamientoConsumo::getNivelConsumido() {
    return this->nivelConsumido;
}
void AlmacenamientoConsumo::setNivelConsumido(double nivelConsumido) {
    this->nivelConsumido = nivelConsumido;
}
double AlmacenamientoConsumo::getLecturaAnteriorVolumen() {
    return this->lecturaAnteriorVolumen;
}
void AlmacenamientoConsumo::setLecturaAnteriorVolumen(double lecturaAnteriorVolumen) {
    this->lecturaAnteriorVolumen = lecturaAnteriorVolumen;
}
double AlmacenamientoConsumo::getLecturaActualVolumen() {
    return this->lecturaActualVolumen;
}
void AlmacenamientoConsumo::setLecturaActualVolumen(double lecturaActualVolumen) {
    this->lecturaActualVolumen = lecturaActualVolumen;
}

MedidorConsumo^ AlmacenamientoConsumo::getobjMedidorConsumo() {
    return this->objMedidorConsumo;
}
void AlmacenamientoConsumo::setobjMedidorConsumo(MedidorConsumo^ objMedidorConsumo) {
    this->objMedidorConsumo = objMedidorConsumo;
}
InformacionUsuario^ AlmacenamientoConsumo::getobjInformacionUsuario() {
    return this->objInformacionUsuario;
}
void AlmacenamientoConsumo:: setobjInformacionUsuario(InformacionUsuario^ objInformacionUsuario) {
    this->objInformacionUsuario = objInformacionUsuario;
}