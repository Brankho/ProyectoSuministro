#pragma once

#include "InterfazResidencial.h"
#include "FacturacionUsuario.h"

using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSuministroModel {
    public ref class ReciboUsuario {
    private:
        int codigo;
        InterfazResidencial^ objInterfazResidencial;
        String^ fechaEmision;
        String^ fechaVencimiento;
        String^ periodoconsumo;
        String^ tarifa;
        List<FacturacionUsuario^>^ listaFacturacionUsuario;


    public:
        ReciboUsuario();
        ReciboUsuario(int codigo, InterfazResidencial^ objInterfazResidencial, String^ fechaEmision, String^ fechaVencimiento, String^ periodoconsumo, String^ tarifa, List<FacturacionUsuario^>^ listaFacturacionUsuario);

        int getcodigo();
        void setcodigo(int codigo);
        InterfazResidencial^ getobjInterfazResidencial();
        void setobjInterfazResidencial(InterfazResidencial^ objInterfazResidencial);
        String^ getfechaEmision();
        void setfechaEmision(String^ fechaEmision);
        String^ getfechaVencimiento();
        void setfechaVencimiento(String^ fechaVencimiento);
        String^ getperiodoconsumo();
        void setperiodoconsumo(String^ periodoconsumo);
        String^ gettarifa();
        void settarifa(String^ tarifa);
        List<FacturacionUsuario^>^ getlistaFacturacionUsuario();
        void setlistaFacturacionUsuario(List<FacturacionUsuario^>^ listaFacturacionUsuario);
    };
}

