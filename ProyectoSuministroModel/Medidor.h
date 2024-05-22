#pragma once


using namespace System;
/*Herencia*/

namespace ProyectoSuministroModel {
    public ref class Medidor {
    private:
        String^ ID;
        String^ tipoSensor;
        String^ Marca;
        String^ Rango;
        String^ Rangoestablecido;
        double precision;


    public:
        Medidor();
        Medidor(String^ ID, String^ tipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, double precision);

        String^ getID();
        void setID(String^ ID);
        String^ getTipoSensor();
        void setTipoSensor(String^ tipoSensor);
        String^ getMarca();
        void setMarca(String^ Marca);
        String^ getRango();
        void setRango(String^ Rango);
        String^ getRangoestablecido();
        void setRangoestablecido(String^ Rangoestablecido);
        double getPrecision();
        void setPrecision(double precision);
    };
}
