#pragma once

using namespace System;
/*Herencia*/

namespace ProyectoSuministroModel {
    public ref class Sensor {
    private:

        String^ TipoSensor;
        String^ Marca;
        String^ Rango;
        String^ Rangoestablecido;
        String^ TipoSe�al;
        double precision;



    public:
        Sensor();
        Sensor(String^ TipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, String^ TipoSe�al, double precision);

        String^ getTipoSensor();
        void setTipoSensor(String^ TipoSensor);
        String^ getMarca();
        void setMarca(String^ Marca);
        String^ getRango();
        void setRango(String^ Rango);
        String^ getRangoestablecido();
        void setRangoestablecido(String^ Rangoestablecido);
        String^ getTipoSe�al();
        void setTipoSe�al(String^ TipoSe�al);
        double getprecision();
        void setprecision(double precision);
    };
}
