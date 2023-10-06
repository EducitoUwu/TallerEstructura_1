#pragma once
#include <string>
#include <vector>
#include "Software.h"
#include "Usuario.h"

using namespace std;

class Normal : public Usuario {
private:
    string correo;

public:
    // Constructor con parámetros
    Normal(string nombre, string contrasena, int edad, string correo)
        : Usuario(nombre, contrasena, edad), correo(correo) {
    }

    // Método getter y setter para correo
    string getCorreo() {
        return correo;
    }

    void setCorreo(string& nuevoCorreo) {
        correo = nuevoCorreo;
    }
};