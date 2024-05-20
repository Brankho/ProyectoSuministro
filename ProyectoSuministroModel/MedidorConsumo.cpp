#include "MedidorConsumo.h"

using namespace ProyectoSuministroModel;

MedidorConsumo::MedidorConsumo() {

}

MedidorConsumo::MedidorConsumo(int codigomedidor, String^ marcamedidor, String^ Tipomedidor, List< InfoConsumo^>^ listaInfoConsumo) {
	this->codigomedidor = codigomedidor;
	this->marcamedidor = marcamedidor;
	this->Tipomedidor = Tipomedidor;
	this->listaInfoConsumo = listaInfoConsumo;
}

int MedidorConsumo::getcodigomedidor() {
	return this->codigomedidor;
}

void MedidorConsumo::setcodigomedidor(int codigomedidor) {
	this->codigomedidor = codigomedidor;
}

String^ MedidorConsumo::getmarcamedidor() {
	return this->marcamedidor = marcamedidor;
}

void MedidorConsumo::setmarcamedidor(String^ marcamedidor) {
	this->marcamedidor = marcamedidor;
}

String^ MedidorConsumo::getTipomedidor() {
	return this->Tipomedidor;
}

void MedidorConsumo::setTipomedidor(String^ Tipomedidor) {
	this->Tipomedidor = Tipomedidor;
}

List< InfoConsumo^>^ MedidorConsumo::getlistaInfoConsumo() {
	return this->listaInfoConsumo;
}

void MedidorConsumo::setlistaInfoConsumo(List< InfoConsumo^>^ listaInfoConsumo) {
	this->listaInfoConsumo = listaInfoConsumo;
}