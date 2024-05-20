#pragma once

#include "Sensor.h"
#include "Tanque.h"
using namespace System;

namespace ProyectoSuministroModel {
    public ref class SensorNivel :Sensor {
    private:

        String^ Alarma;
        String^ Fluido;
        double longbandamuerta;
        double VolumenSuministrado;
        Tanque^ objTanque;


    public:
        SensorNivel();
        SensorNivel(String^ Alarma, String^ Fluido, double longbandamuerta, double VolumenSuministrado, Tanque^ objTanque, String^ TipoSensor, String^ Marca, String^ Rango, String^ Rangoestablecido, String^ TipoSeñal, double precision);

        String^ getAlarma();
        void setAlarma(String^ Alarma);
        String^ getFluido();
        void setFluido(String^ Fluido);
        double getlongbandamuerta();
        void setlongbandamuerta(double longbandamuerta);
        double getVolumenSuministrado();
        void setVolumenSuministrado(double VolumenSuministrado);
        /*Tanque^ getobjTanque();
        void setobjTanque(Tanque^ objTanque);*/
    };
}

