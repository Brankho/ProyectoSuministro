#pragma once
using namespace System;
/*Herencia*/
public ref class IniciarSesion {
private:

    String^ InsertarCorreo;
    String^ InsertarDNI;
    String^ InsertarContraseña;
    String^ verificacion;
    


public:
    IniciarSesion();
    IniciarSesion(String^ InsertarCorreo,String^ InsertarDNI,String^ InsertarContraseña,String^ verificacion);
};