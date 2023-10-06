#pragma once
#include <string>
#include <vector>
#include "Software.h"
#include "Usuario.h" // Asegúrate de incluir la clase Usuario

using namespace std;

class Administrador : public Usuario {
private:
    string correo;
    bool login;

public:
    // Constructor con parámetros
    Administrador(string nombre, string contrasena, int edad, string correo)
        : Usuario(nombre, contrasena, edad), correo(correo), login(true) {}

    // Métodos getter y setter para correo
    string getCorreo()  {
        return correo;
    }

    void setCorreo( string& nuevoCorreo) {
        correo = nuevoCorreo;
    }

    // Métodos getter y setter para login
    bool getLogin()  {
        return login;
    }

    void setLogin(bool nuevoLogin) {
        login = nuevoLogin;
    }
};