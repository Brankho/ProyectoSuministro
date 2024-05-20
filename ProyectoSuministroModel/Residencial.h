#pragma once

#include "PersonaJuridica.h"

using namespace System;

namespace ProyectoSuministroModel {
    public ref class Residencial : PersonaJuridica {
    private:
        String^ sectorUrbano;
        String^ constructora;
        int cantBloques;
        int cantDepartamentos;
        int codigoBloque;
        int codigoDepa;
        int cantTanques;

    public:
        Residencial();
        Residencial(int codigo, String^ ruc, String^ direccion, String^ telefono, String^ razonSocial, String^ ciudad, String^ distrito, String^ correo, String^ sectorUrbano, String^ constructora, int cantBloques, int cantDepartamentos, int codigoBloque, int codigoDepa, int cantTanques);

        String^ getsectorUrbano();
        void setsectorUrbano(String^ sectorUrbano);
        String^ getconstructora();
        void setconstructora(String^ constructora);
        int getcantBloques();
        void setcantBloques(int cantBloques);
        int getcantDepartamentos();
        void setcantDepartamentos(int cantDepartamentos);
        int getcodigoBloque();
        void setcodigoBloque(int codigoBloque);
        int getcodigoDepa();
        void setcodigoDepa(int codigoDepa);
        int getcantTanques();
        void setcantTanques(int cantTanques);
    };
}

