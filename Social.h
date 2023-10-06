#pragma once
#include <string>
#include <vector>
#include "Usuario.h" 
#include "Software.h"


using namespace std;

class Social : public Software {
private:
    vector<Usuario*> amigos;
    

public:
    // Constructor con parámetros
    Social(string nombre, string developer, int clasificacion, int precio)
        : Software(nombre, developer, clasificacion, precio) {
        }

    // Método para agregar amigos
    void agregarAmigo(Usuario* amigo) {
        amigos.push_back(amigo);
    }

    // Método para obtener la lista de amigos
     vector<Usuario*>& getAmigos()  {
        return amigos;
    }
    
    /*string MostrarAmigos(){
        string txt="";
        for(Usuario* amigo:amigos){
            txt+= amigo->getNombre()+ ",";
        }
        return txt;
    }*/
    string mostrarInformacion() const override {
            string txt ="";
         
            txt+= "Nombre: " + nombre +"\n"+ "Developer: "  + developer +"\n"+ "Edad recomendada: " + to_string(edad) +"\n"+ "Precio: $" + to_string(precio) +"\n";
            return txt;
    }

   

    
};