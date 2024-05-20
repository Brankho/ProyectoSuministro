#pragma once

using namespace System;
/*Herencia*/

namespace ProyectoSuministroModel {
    public ref class Facturacion {
    private:

        double cargoFijo;
        double redondeoMesAnterior;
        double redondeoMesActual;
        double montoIGV;
        double montoTotal;

    public:
        Facturacion();
        Facturacion(double cargoFijo, double redondeoMesAnterior, double redondeoMesActual, double montoIGV, double montoTotal);


        double getcargofijo();
        void setcargofijo(double cargoFijo);
        double getredondeoMesAnterior();
        void setredondeoMesAnterior(double RedondeoMesAnterior);
        double getredondeoMesActual();
        void setredondeoMesActual (double redondeoMesActual);
        double getmontoIGV();
        void setmontoIGV(double montoIGV);
        double getmontoTotal();
        void setmontoTotal(double montoTotal);
    };
}
