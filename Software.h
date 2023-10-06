#pragma once
#include <string>
#include <vector>
#include "Usuario.h"
using namespace std;

class Usuario; // Declaración adelantada de la clase Usuario para evitar problemas de dependencia circular

class Software {
public:
    string nombre;
    string developer;
    int edad;
    int precio;
    vector<Usuario*> listaUsuarios; // Lista de punteros a objetos Usuario
    virtual string mostrarInformacion() const = 0;

public:
   

    // ructor con parámetros
    Software(string nombre, string developer, int edad, int precio)
        : nombre(nombre), developer(developer), edad(edad), precio(precio) {
        
    }

    string getNombre()  { 
        return nombre; 
    }
    void setNombre( string& nuevoNombre) { 
        nombre = nuevoNombre; 
    }

    string getDeveloper()  { 
        return developer; 
    }

    void setDeveloper( string& nuevoDeveloper) { 
        developer = nuevoDeveloper; 
    }

    int getEdad()  { 
        return edad; 
    }

    void setEdad(int nuevaEdad) { 
        edad = nuevaEdad; 
    }

    int getPrecio()  { 
        return precio; 
    }

    void setPrecio(int nuevoPrecio) { 
        precio = nuevoPrecio; 
    }

    vector<Usuario*>& getListaUsuarios()  { 
        return listaUsuarios; 
    }

    void agregarUsuario(Usuario* usuario) { 
        listaUsuarios.push_back(usuario); 
    }
};
