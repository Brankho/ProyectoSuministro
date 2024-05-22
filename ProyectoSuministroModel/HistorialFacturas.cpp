#include "HistorialFacturas.h"

using namespace ProyectoSuministroModel;

HistorialFacturas::HistorialFacturas() {

}
HistorialFacturas::HistorialFacturas(String^ ID, String^ mesFacturacion, int numeroDepa, String^ fechaConsulta, String^ fechaActual, double montoMensualConsumo, String^ estadoDePago, List <AlmacenamientoConsumo^>^ listaAlmacenamientoConsumo) {
    this->ID = ID;
    this->mesFacturacion = mesFacturacion;
    this->numeroDepa = numeroDepa;
    this->fechaConsulta = fechaConsulta;
    this->fechaActual = fechaActual;
    this->montoMensualConsumo = montoMensualConsumo;
    this->estadoDePago = estadoDePago;
    this->listaAlmacenamientoConsumo = listaAlmacenamientoConsumo;
}

String^ HistorialFacturas::getID() {
    return this->ID;
}
void HistorialFacturas::setID(String^ ID) {
    this->ID = ID;
}
String^ HistorialFacturas::getMesFacturacion() {
    return this->mesFacturacion;
}
void HistorialFacturas::setMesFacturacion(String^ mesFacturacion) {
    this->mesFacturacion = mesFacturacion;
}
int HistorialFacturas::getNumeroDepa() {
    return this->numeroDepa;
}
void HistorialFacturas::setNumeroDepa(int numeroDepa) {
    this->numeroDepa = numeroDepa;
}
String^ HistorialFacturas::getFechaConsulta() {
    return this->fechaConsulta;
}
void HistorialFacturas::setFechaConsulta(String^ fechaConsulta) {
    this->fechaConsulta = fechaConsulta;
}
String^ HistorialFacturas::getFechaActual() {
    return this->fechaActual;
}
void HistorialFacturas::setFechaActual(String^ fechaActual) {
    this->fechaActual = fechaActual;
}
double HistorialFacturas::getMontoMensualConsumo() {
    return this->montoMensualConsumo;
}
void HistorialFacturas::setMontoMensualConsumo(double montoMensualConsumo) {
    this->montoMensualConsumo = montoMensualConsumo;
}
String^ HistorialFacturas::getEstadoDePago() {
    return this->estadoDePago;
}
void HistorialFacturas::setEstadoDePago(String^ estadoDePago) {
    this->estadoDePago = estadoDePago;
}

List <AlmacenamientoConsumo^>^ HistorialFacturas::getlistaAlmacenamientoConsumo() {
    return this->listaAlmacenamientoConsumo;
}
void HistorialFacturas::setlistaAlmacenamientoConsumo(List <AlmacenamientoConsumo^>^ listaAlmacenamientoConsumo) {
    this->listaAlmacenamientoConsumo = listaAlmacenamientoConsumo;
}

