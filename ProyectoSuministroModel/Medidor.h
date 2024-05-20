#pragma once
using namespace System;
/*Herencia*/
public ref class Medidor {
private:
    int codigo;
    double NivelConsumido;
    double LecturaAnteriorVolumen;
    double LecturaActualVolumen;
    double VolumenConsumido;
    Tipo^ objTipo;


public:
    Medidor();
    Medidor(int codigo,double NivelConsumido,double LecturaAnteriorVolumen,double LecturaActualVolumen,double VolumenConsumido,Tipo^ objTipo);
};