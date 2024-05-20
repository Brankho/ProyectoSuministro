#pragma once

#include "Facturacion.h"
#include "Proveedor.h"
#include "Residencial.h"

using namespace System;

namespace ProyectoSuministroModel {
    public ref class ReciboProveedor :Facturacion {
    private:
        int codigorecibo;
        Residencial^ objResidencial;
        String^ volumenvariablemedida;
        double costoEstacion;
        Proveedor^ objProveedor;


    public:
        ReciboProveedor();
        ReciboProveedor(int codigorecibo, Residencial^ objResidencial, String^ volumenvariablemedida, double costoEstacion, Proveedor^ objProveedor, double cargoFijo, double redondeoMesAnterior, double redondeoMesActual, double montoIGV, double montoTotal);

        int getcodigorecibo();
        void setcodigorecibo(int codigorecibo);
        /*Residencial^ getobjResidencial();
        void setobjResidencial(Residencial^ objResidencial);*/
        String^ getvolumenvariablemedida();
        void setvolumenvariablemedida(String^ volumenvariablemedida);
        double getcostoEstacion();
        void setcostoEstacion(double costoEstacion);
        /*Proveedor^ getobjProveedor();
        void setobjProveedor(Proveedor^ objProveedor);*/
    };
}

