#pragma once

using namespace System;

namespace ProyectoSuministroModel {
    public ref class PersonaJuridica {
    private:
        int codigo;
        String^ ruc;
        String^ direccion;
        String^ telefono;
        String^ razonSocial;
        String^ ciudad;
        String^ distrito;
        String^ correo;

    public:
        PersonaJuridica();
        PersonaJuridica(int codigo, String^ ruc, String^ direccion, String^ telefono, String^ razonSocial, String^ ciudad, String^ distrito, String^ correo);

        int getcodigo();
        void setcodigo(int codigo);
        String^ getruc();
        void setruc(String^ ruc);
        String^ getdireccion();
        void setdireccion(String^ direccion);
        String^ gettelefono();
        void settelefono(String^ telefono);
        String^ getrazonSocial();
        void setrazonSocial(String^ razonSocial);
        String^ getciudad();
        void setciudad(String^ ciudad);
        String^ getdistrito();
        void setdistrito(String^ distrito);
        String^ getcorreo();
        void setcorreo(String^ correo);
    };
}

 
