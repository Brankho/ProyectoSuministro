#pragma once

using namespace System;

namespace ProyectoSuministroModel {
    public ref class InterfazResidencial {
    private:

        String^ SolicitarAguaCaliente;
        String^ SolicitarGas;

    public:
        InterfazResidencial();
        InterfazResidencial(String^ SolicitarAguaCaliente, String^ SolicitarGas);

        String^ getSolicitarAguaCaliente();
        void setSolicitarAguaCaliente(String^ SolicitarAguaCaliente);
        String^ getSolicitarGas();
        void setSolicitarGas(String^ SolicitarGas);
    };
}

