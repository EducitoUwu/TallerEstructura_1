#pragma once
#include <string>
#include <vector>
#include "Usuario.h"
#include "Software.h"

using namespace std;

class Usuario; // Declaración adelantada de la clase Usuario para evitar problemas de dependencia circular

class Juego : public Software {
private:
    string genero;

public:
    // Constructor con parámetros
    Juego(string nombre, string developer, int edad, int precio, string genero)
        : Software(nombre, developer, edad, precio), genero(genero) {}

    // Método getter y setter para genero
    string getGenero() {
        return this->genero;
    }

    void setGenero(string& nuevoGenero) {
        genero = nuevoGenero;
    }
    //Mostrar informacion de Juego
    string mostrarInformacion() const override {
            string txt ="";
            
            txt+= "Nombre: " + nombre +"\n"+ "Developer: "  + developer +"\n"+ "Edad recomendada: " + to_string(edad) +"\n"+ "Precio: $" + to_string(precio) +"\n"+ "Genero: " + genero +"\n"+ "-----";
            return txt;
    }
   
    
    
};