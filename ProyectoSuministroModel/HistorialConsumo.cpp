#include "HistorialConsumo.h"

using namespace ProyectoSuministroModel;

HistorialConsumo::HistorialConsumo() {

}

HistorialConsumo::HistorialConsumo(String^ NombreUsuario, int numeroDepa, String^ Fechaconsulta, double montoMensualConsumo, String^ estadoPago) {
	this->NombreUsuario = NombreUsuario;
	this->numeroDepa = numeroDepa;
	this->Fechaconsulta = Fechaconsulta;
	this->montoMensualConsumo = montoMensualConsumo;
	this->estadoPago = estadoPago;
}

String^ HistorialConsumo::getNombreUsuario() {
	return this->NombreUsuario;
}

void HistorialConsumo::setNombreUsuario(String^ NombreUsuario) {
	this->NombreUsuario = NombreUsuario;
}

int HistorialConsumo::getnumeroDepa() {
	return this->numeroDepa;
}

void HistorialConsumo::setnumeroDepa(int numeroDepa) {
	this->numeroDepa = numeroDepa;
}

String^ HistorialConsumo::getFechaConsulta() {
	return this->Fechaconsulta;
}

void HistorialConsumo::setFechaConsulta(String^ FechaConsulta) {
	this->Fechaconsulta = Fechaconsulta;
}

double HistorialConsumo::getmontoMensualConsumo() {
	return this->montoMensualConsumo;
}

void HistorialConsumo::setmontoMensualConsumo(double montoMensualConsumo) {
	this->montoMensualConsumo = montoMensualConsumo;
}

String^ HistorialConsumo::getestadoPago() {
	return this->estadoPago;
}

void HistorialConsumo::setestadoPago(String^ estadoPago) {
	this->estadoPago = estadoPago;
}