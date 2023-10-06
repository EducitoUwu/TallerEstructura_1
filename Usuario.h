#pragma once
#include <string>
#include <vector>
#include "Software.h"
#include "Juego.h"
#include "Ofimatica.h"
#include "Produccion.h"
#include "Navegador.h"
#include "Seguridad.h"
#include "Social.h"


using namespace std;

class Usuario {
private:
    string nombre;
    string contrasena;
    int edad;
    vector<Software*> listaSoftware;

public:
    

    // Constructor con parámetros
    Usuario(string nombre, string contrasena, int edad) : nombre(nombre), contrasena(contrasena), edad(edad) {

    }

    // Métodos getter y setter
    string getNombre(){ 
        return nombre; 
    }
    void setNombre(string& nuevoNombre) { 
        nombre = nuevoNombre; 
    }

    string getContrasena()  { 
        return contrasena; 
    }

    void setContrasena(string& nuevaContrasena) { 
        contrasena = nuevaContrasena; 
    }

    int getEdad()  { 
        return edad; 
    }

    void setEdad(int nuevaEdad) { 
        edad = nuevaEdad; 
    }

     vector<Software*>& getListaSoftware()  { 
        return listaSoftware; 
    }

    void agregarSoftware( Software* software) {
         listaSoftware.push_back(software); 
    }
    void MostrarInfo(){
        cout << "Nombre: "  + nombre<<  endl;
        cout << "edad: "  + to_string(edad)<<  endl;
    }
    void listarSoftwares() {
        cout << "Lista de softwares para el usuario " << nombre << ":" << endl;
        for (Software* software : listaSoftware) {
            cout << "Nombre: " << software->getNombre() << endl;
            cout << "Developer: " << software->getDeveloper() << endl;
            cout << "Edad recomendada: " << software->getEdad() << " años" << endl;
            cout << "Precio: $" << software->getPrecio() << endl;
            cout << "-----" << endl;
        }
    }
    void listarJuegos()  {
        cout << "Lista de juegos para el usuario " << nombre << ":" << endl;
        for (Software* software : listaSoftware) {
            // Verificar si el software es de tipo Juegos
            if (dynamic_cast<Juego*>(software) != nullptr) {
                cout <<  dynamic_cast<Juego*>(software)->mostrarInformacion() << endl;
            }
        }
    }
    void listarOfimaticas()  {
        cout << "Lista de Ofimaticas para el usuario " << nombre << ":" << endl;
        for (Software* software : listaSoftware) {
            // Verificar si el software es de tipo Juegos
            if (dynamic_cast<Ofimatica*>(software) != nullptr) {
                cout << dynamic_cast<Ofimatica*>(software)->mostrarInformacion() << endl;
            }
        }
    }
    void listarProducciones()  {
        cout << "Lista de Producciones para el usuario " << nombre << ":" << endl;
        for (Software* software : listaSoftware) {
            // Verificar si el software es de tipo Juegos
            if (dynamic_cast<Produccion*>(software) != nullptr) {
                cout << dynamic_cast<Produccion*>(software)->mostrarInformacion() << endl;
            }
        }
    }

void listarNavegadores()  {
        cout << "Lista de Navegadores para el usuario " << nombre << ":" << endl;
        for (Software* software : listaSoftware) {
            // Verificar si el software es de tipo Juegos
            if (dynamic_cast<Navegador*>(software) != nullptr) {
                cout << dynamic_cast<Navegador*>(software)->mostrarInformacion() << endl;
            }
        }
    }
    void listarSeguridades()  {
        cout << "Lista de Seguridades para el usuario " << nombre << ":" << endl;
        for (Software* software : listaSoftware) {
            // Verificar si el software es de tipo Juegos
            if (dynamic_cast<Seguridad*>(software) != nullptr) {
                cout << dynamic_cast<Seguridad*>(software)->mostrarInformacion() << endl;
            }
        }
    }
    void listarSociales()  {
        cout << "Lista de Sociales de el usuario " << nombre << ":" << endl;
        for (Software* software : listaSoftware) {
            // Verificar si el software es de tipo Juegos
            if (dynamic_cast<Social*>(software) != nullptr) {
                cout << dynamic_cast<Social*>(software)->mostrarInformacion() << endl;
                for(Usuario* u:dynamic_cast<Social*>(software)->getListaUsuarios()){
                    cout << "Nombre: " << u->getNombre() << endl;
                }
                
            }
        }
    }

    
};
