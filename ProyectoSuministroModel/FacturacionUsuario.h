#pragma once
#include "Facturacion.h"
#include "MedidorConsumo.h"


using namespace System;
using namespace System::Collections::Generic;

namespace ProyectoSuministroModel {
    public ref class FacturacionUsuario :Facturacion {
    private:

        double serviciotuberias;
        String^ historialpagos;
        String^ mediopago;
        List<MedidorConsumo^>^ listaMedidorConsumo;

    public:
        FacturacionUsuario();
        FacturacionUsuario(double serviciotuberias, String^ historialpagos, String^ mediopago, double cargoFijo, double redondeoMesAnterior, double redondeoMesActual, double montoIGV, double montoTotal, List<MedidorConsumo^>^ listaMedidorConsumo);


        double getserviciotuberias();
        void setserviciotuberias(double serviciotuberias);
        String^ gethistorialpagos();
        void sethistorialpagos(String^ historialpagos);
        String^ getmediopago();
        void setmediopago(String^ mediopago);
        List<MedidorConsumo^>^ getlistaMedidorConsumo();
        void setlistaMedidorConsumo(List<MedidorConsumo^>^ listaMedidorConsumo);
    };
}

