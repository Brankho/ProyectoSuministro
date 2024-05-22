#pragma once

using namespace System;
/*Herencia*/

namespace ProyectoSuministroModel {
    public ref class Facturacion {
    private:
        int NroFacturacion;
        double cargoFijo;
        double redondeoMesAnterior;
        double redondeoMesActual;
        double montofijo;
        double montoIGV;
        double montoTotal;

    public:
        Facturacion();
        Facturacion(int NroFacturacion,double cargoFijo, double redondeoMesAnterior, double redondeoMesActual, double montofijo, double montoIGV, double montoTotal);

        int getNroFacturacion();
        void setNroFacturacion(int NroFacturacion);
        double getcargofijo();
        void setcargofijo(double cargoFijo);
        double getredondeoMesAnterior();
        void setredondeoMesAnterior(double RedondeoMesAnterior);
        double getredondeoMesActual();
        void setredondeoMesActual (double redondeoMesActual);
        double getmontofijo();
        void setmontofijo(double montofijo);
        double getmontoIGV();
        void setmontoIGV(double montoIGV);
        double getmontoTotal();
        void setmontoTotal(double montoTotal);

    };
}
