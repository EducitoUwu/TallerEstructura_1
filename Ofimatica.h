#pragma once
#include <string>
#include "Software.h"

using namespace std;

class Ofimatica : public Software {
private:
    int cantidadArchivos;

public:
    // Constructor con parámetros
    Ofimatica(string nombre, string developer, int edad, int precio, int cantidadArchivos)
        : Software(nombre, developer, edad, precio), cantidadArchivos(cantidadArchivos) {}

    // Método getter y setter para cantidadArchivos
    int getCantidadArchivos() {
        return cantidadArchivos;
    }

    void setCantidadArchivos(int nuevaCantidadArchivos) {
        cantidadArchivos = nuevaCantidadArchivos;
    }
    string mostrarInformacion() const override {
            string txt ="";
            
            txt+= "Nombre: " + nombre +"\n"+ "Developer: "  + developer +"\n"+ "Edad recomendada: " + to_string(edad) +"\n"+ "Precio: $" + to_string(precio) +"\n"+ "Cantidad de archivos: " + to_string(cantidadArchivos) +"\n"+ "-----";
            return txt;
    }
};