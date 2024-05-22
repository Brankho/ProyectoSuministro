#pragma once

#include "FacturacionUsuario.h"

using namespace System;

namespace ProyectoSuministroModel {
    public ref class ReciboUsuario {
    private:
        int codigo;
        String^ fechaEmision;
        String^ fechaVencimiento;
        String^ periodoconsumo;
        String^ tarifa;
        FacturacionUsuario^ objFacturacionUsuario;


    public:
        ReciboUsuario();
        ReciboUsuario(int codigo, String^ fechaEmision, String^ fechaVencimiento, String^ periodoconsumo, String^ tarifa, FacturacionUsuario^ objFacturacionUsuario);

        int getcodigo();
        void setcodigo(int codigo);
        String^ getfechaEmision();
        void setfechaEmision(String^ fechaEmision);
        String^ getfechaVencimiento();
        void setfechaVencimiento(String^ fechaVencimiento);
        String^ getperiodoconsumo();
        void setperiodoconsumo(String^ periodoconsumo);
        String^ gettarifa();
        void settarifa(String^ tarifa);
        FacturacionUsuario^ getobjFacturacionUsuario();
        void setobjFacturacionUsuario(FacturacionUsuario^ objFacturacionUsuario);
    };
}

