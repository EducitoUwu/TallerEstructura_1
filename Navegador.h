#pragma once
#include <string>
#include <vector>
#include "Software.h"

using namespace std;

class Navegador : public Software {
private:
    
    string historial[10];

public:
    // Constructor con parámetros
    Navegador(string nombre, string developer, int clasificacion, int precio,
              string p1, string p2, string p3, string p4, string p5,
              string p6, string p7, string p8, string p9, string p10)
        : Software(nombre, developer, clasificacion, precio),
          historial({p1, p2, p3, p4, p5, p6, p7, p8, p9, p10}) {}

    // Método getter para historial
    string getHistorial(int i)  {
        return historial[i-1];
    }
    string getHistorial()  {
        string txt = "";

        for(int i=0;i<10;i++){
            txt+=historial[i]+", ";
        }
        return txt;
    }
    //Mostrar informacion de Navegador
    string mostrarInformacion() const override {
            string txt ="";
            string txtt = "";

            for(int i=0;i<10;i++){
                txtt+=historial[i]+", ";
            }

            txt+= "Nombre: " + nombre +"\n"+ "Developer: "  + developer +"\n"+ "Edad recomendada: " + to_string(edad) +"\n"+ "Precio: $" + to_string(precio) +"\n"+ "Historial: " + txtt +"\n"+ "-----";
            return txt;
    }
};