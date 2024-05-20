#include "InterfazResidencial.h"

using namespace ProyectoSuministroModel;

InterfazResidencial::InterfazResidencial() {

}

InterfazResidencial::InterfazResidencial(String^ SolicitarAguaCaliente, String^ SolicitarGas) {
	this->SolicitarAguaCaliente = SolicitarAguaCaliente;
	this->SolicitarGas = SolicitarGas;
}

String^ InterfazResidencial::getSolicitarAguaCaliente() {
	return this->SolicitarAguaCaliente;
}
void InterfazResidencial::setSolicitarAguaCaliente(String^ SolicitarAguaCaliente) {
	this->SolicitarAguaCaliente = SolicitarAguaCaliente;
}
String^ InterfazResidencial::getSolicitarGas() {
	return this->SolicitarGas;
}
void InterfazResidencial::setSolicitarGas(String^ SolicitarGas) {
	this->SolicitarGas = SolicitarGas;
}