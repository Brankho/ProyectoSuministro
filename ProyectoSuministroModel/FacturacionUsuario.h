#pragma once
#include "Facturacion.h"
#include "AlmacenamientoConsumo.h"
#include "InformacionUsuario.h"
#include "HistorialFacturas.h"
#include "Tipo.h"


using namespace System;

namespace ProyectoSuministroModel {
    public ref class FacturacionUsuario :Facturacion {
    private:
        String^ ID;
        double serviciotuberias;
        String^ historialpagos;
        String^ mediopago;
        Tipo^ objTipo;
        AlmacenamientoConsumo^ objAlmacenamientoConsumo;
        InformacionUsuario^ objInformacionUsuario;
        HistorialFacturas^ objHistorialFacturas;


    public:
        FacturacionUsuario();
        FacturacionUsuario(String^ ID, double serviciotuberias, String^ historialpagos, String^ mediopago, int NroFacturacion, double cargoFijo, double redondeoMesAnterior, double redondeoMesActual,double montofijo, double montoIGV, double montoTotal, Tipo^ objTipo, AlmacenamientoConsumo^ objAlmacenamientoConsumo, InformacionUsuario^ objInformacionUsuario, HistorialFacturas^ objHistorialFacturas);

        String^ getID();
        void setID(String^ ID);
        double getserviciotuberias();
        void setserviciotuberias(double serviciotuberias);
        String^ gethistorialpagos();
        void sethistorialpagos(String^ historialpagos);
        String^ getmediopago();
        void setmediopago(String^ mediopago);
        Tipo^ getobjTipo();
        void setobjTipo(Tipo^ objTipo);
        AlmacenamientoConsumo^ getobjAlmacenamientoConsumo();
        void setobjAlmacenamientoConsumo(AlmacenamientoConsumo^ objAlmacenamientoConsumo);
        InformacionUsuario^ getobjInformacionUsuario();
        void setobjInformacionUsuario(InformacionUsuario^ objInformacionUsuario);
        HistorialFacturas^ getobjHistorialFacturas();
        void setobjHistorialFacturas(HistorialFacturas^ objHistorialFacturas);
        
    };
}

