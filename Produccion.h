#pragma once
#include <string>
#include "Software.h"

using namespace std;

class Produccion : public Software {
private:
    string solucion;

public:
    // Constructor con parámetros
    Produccion(string nombre, string developer, int edad, int precio, string solucion)
        : Software(nombre, developer, edad, precio), solucion(solucion) {}

    // Método getter y setter para solucion
    string getSolucion() {
        return solucion;
    }

    void setSolucion(string nuevaSolucion) {
        solucion = nuevaSolucion;
    }
    string mostrarInformacion() const override {
            string txt ="";
            
            txt+= "Nombre: " + nombre +"\n"+ "Developer: "  + developer +"\n"+ "Edad recomendada: " + to_string(edad) +"\n"+ "Precio: $" + to_string(precio) +"\n"+ "Cantidad de archivos: " + solucion +"\n"+ "-----";
            return txt;
    }
};