#pragma once
#include <string>
#include "Software.h"

using namespace std;

class Seguridad : public Software {
private:
    string malware;

public:
    // Constructor con parámetros
    Seguridad(string nombre, string developer, int clasificacion, int precio, string malware)
        : Software(nombre, developer, clasificacion, precio), malware(malware) {}

    // Método getter y setter para malware
    string getMalware()  {
        return malware;
    }

    void setMalware(string& nuevoMalware) {
        malware = nuevoMalware;
    }
    string mostrarInformacion() const override {
            string txt ="";
            
            txt+= "Nombre: " + nombre +"\n"+ "Developer: "  + developer +"\n"+ "Edad recomendada: " + to_string(edad) +"\n"+ "Precio: $" + to_string(precio) +"\n"+ "Cantidad de archivos: " + malware +"\n"+ "-----";
            return txt;
    }
};