#include "Tipo.h"

using namespace ProyectoSuministroModel;

Tipo::Tipo() {

}

Tipo::Tipo(int ID, String^ descripcionID) {
	this->ID = ID;
	this->descripcionID = descripcionID;
}

int Tipo::getID() {
	return this->ID;
}
void Tipo::setID(int ID) {
	this->ID = ID;
}
String^ Tipo::getdescripcionID() {
	return this->descripcionID;
}
void Tipo::setdescripcionID(String^ descripcionID) {
	this->descripcionID = descripcionID;
}
