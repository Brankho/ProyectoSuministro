#include "Tanque.h"

using namespace ProyectoSuministroModel;

Tanque::Tanque() {

}

Tanque::Tanque(String^ marca, double altura, double capacidadVolumen, double peso, double area, int codigoTanque, double llenadoEstacion, Residencial^ objResidencial) {
	this->marca = marca;
	this->altura = altura;
	this->capacidadVolumen = capacidadVolumen;
	this->peso = peso;
	this->area = area;
	this->codigoTanque = codigoTanque;
	this->llenadoEstacion = llenadoEstacion;
	this->objResidencial = objResidencial;
}

String^ Tanque::getmarca() {
	return this->marca;
}
void Tanque::setmarca(String^ marca) {
	this->marca = marca;
}
double Tanque::getaltura() {
	return this->altura;
}
void Tanque::setaltura(double altura) {
	this->altura = altura;
}
double Tanque::getcapacidadVolumen() {
	return this->capacidadVolumen;
}
void Tanque::setcapacidadVolumen(double capacidadVolumen) {
	this->capacidadVolumen = capacidadVolumen;
}
double Tanque::getpeso() {
	return this->peso;
}
void Tanque::setpeso(double peso) {
	this->peso = peso;
}
double Tanque::getarea() {
	return this->area;
}
void Tanque::setarea(double area) {
	this->area = area;
}
int Tanque::getcodigoTanque() {
	return this->codigoTanque;
}
void Tanque::setcodigoTanque(int codigoTanque) {
	this->codigoTanque = codigoTanque;
}
double Tanque::getllenadoEstacion() {
	return this->llenadoEstacion;
}
void Tanque::setllenadoEstacion(double llenadoEstacion) {
	this->llenadoEstacion = llenadoEstacion;
}

Residencial^ Tanque::getobjResidencial() {
	return this->objResidencial;
}
void Tanque::setobjResidencial(Residencial^ objResidencial) {
	this->objResidencial = objResidencial;
}