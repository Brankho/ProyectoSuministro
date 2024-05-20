#pragma once

#include "PersonaJuridica.h"

using namespace System;

namespace ProyectoSuministroModel {
    public ref class Proveedor :PersonaJuridica {

    private:
        String^ calidadagua;
        String^ calidadinfraestructura;
        String^ ServicioEmergencia;
        String^ estacion;

    public:
        Proveedor();
        Proveedor(int codigo, String^ calidadagua, String^ calidadinfraestructura, String^ ServicioEmergencia, String^ estacion, String^ ruc, String^ direccion, String^ telefono, String^ razonSocial, String^ ciudad, String^ distrito, String^ correo);


        String^ getcalidadagua();
        void setcalidadagua(String^ calidadagua);
        String^ getcalidadinfraestructura();
        void setcalidadinfraestructura(String^ calidadinfraestructura);
        String^ getServicioEmergencia();
        void setServicioEmergencia(String^ ServicioEmergencia);
        String^ getestacion();
        void setestacion(String^ estacion);
    };
}
