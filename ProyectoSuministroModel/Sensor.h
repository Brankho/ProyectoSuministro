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
        String^ TipoSeņal;
        double precision;



    public:
        Sensor();
        Sensor(String^ TipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, String^ TipoSeņal, double precision);

        String^ getTipoSensor();
        void setTipoSensor(String^ TipoSensor);
        String^ getMarca();
        void setMarca(String^ Marca);
        String^ getRango();
        void setRango(String^ Rango);
        String^ getRangoestablecido();
        void setRangoestablecido(String^ Rangoestablecido);
        String^ getTipoSeņal();
        void setTipoSeņal(String^ TipoSeņal);
        double getprecision();
        void setprecision(double precision);
    };
}
