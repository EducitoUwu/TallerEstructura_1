#pragma once
#include <string>
#include <vector>
#include "Software.h"


using namespace std;

class Nino : public Usuario {
public:
    // Constructor con parámetros
    Nino(string nombre, string contrasena, int edad)
        : Usuario(nombre, contrasena, edad) {
    }
};