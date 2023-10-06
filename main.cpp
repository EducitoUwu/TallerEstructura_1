#include <iostream>
#include <algorithm>
#include "Usuario.h"
#include "Software.h"
#include "Juego.h"
#include "Administrador.h"
#include "Normal.h"
#include "Nino.h"
#include "Ofimatica.h"
#include "Produccion.h"
#include "Navegador.h"
#include "Seguridad.h"
#include "Social.h"
#include <vector>

using namespace std;

//funciones
Usuario* iniciarSesion(vector<Usuario*>& listaUsuarios);
void mostrarMenu(Usuario* usuario,int n,vector<Software*> listaSoftwares);
void agregarUsuario(vector<Software*> listaSoftwares,Software* s,Usuario * u);
//termino de funciones

int main()
{
   vector<Usuario*> listaUsuarios;
  
   Administrador* admin1 = new Administrador("Juan", "pato123", 3132,"juan@gmail.com");
   listaUsuarios.push_back(admin1);

   Nino* nino1 = new Nino("Pablo","uwu",13);
   listaUsuarios.push_back(nino1);
   Nino* nino2 = new Nino("Cesar","rawr",10);
   listaUsuarios.push_back(nino2);
   Nino* nino3 = new Nino("Pepe","miau",9);
   listaUsuarios.push_back(nino3);
   Nino* nino4 = new Nino("Raul","piopio",15);
   listaUsuarios.push_back(nino4);

   Normal* normal1= new Normal("Davo","River",21,"jojo@gmail.com");
   listaUsuarios.push_back(normal1);
   Normal* normal2= new Normal("David","jackson",24,"jiji@gmail.com");
   listaUsuarios.push_back(normal2);
   Normal* normal3= new Normal("Edu","klk",54,"jaja@gmail.com");
   listaUsuarios.push_back(normal3);
   Normal* normal4= new Normal("yasmin","flor123",43,"juju@gmail.com");
   listaUsuarios.push_back(normal4);
   Normal* normal5= new Normal("santino","chato",32,"pollo123@gmail.com");
   listaUsuarios.push_back(normal5);
   Normal* normal6= new Normal("Paulo","password",43,"marcelo123@gmail.com");
   listaUsuarios.push_back(normal6);
   Normal* normal7= new Normal("Ursula","papaya",25,"ponysalvaje@gmail.com");
   listaUsuarios.push_back(normal7);
   Normal* normal8= new Normal("Mercedes","uwu",65,"monitor144@gmail.com");
   listaUsuarios.push_back(normal8);
   Normal* normal9= new Normal("Pele","pisco",43,"empate00@gmail.com");
   listaUsuarios.push_back(normal9);
   Normal* normal10= new Normal("Diego","clashRoyale",32,"sanLorenzo123@gmail.com");
   listaUsuarios.push_back(normal10);


   vector<Usuario*> listaSocial;
   vector<Software*> listaSoftwares;
   
   Social* social1 = new Social("Feisbuk","Marck",3,100);
   Social* social2 = new Social("Tuiter","Musk",18,50);
   //enlazar el software con el Usuario y el usuario con el software
   nino1->agregarSoftware(social1);
   nino2->agregarSoftware(social1);
   nino3->agregarSoftware(social1);
   nino4->agregarSoftware(social1);
   
   social1->getListaUsuarios().push_back(nino1);
   social1->getListaUsuarios().push_back(nino2);
   social1->getListaUsuarios().push_back(nino3);
   social1->getListaUsuarios().push_back(nino4);
   
   //djhsakjdhajkshdsajk
   admin1->agregarSoftware(social2);
   social2->getListaUsuarios().push_back(admin1);

   normal1->agregarSoftware(social2);
   normal2->agregarSoftware(social2);
   normal3->agregarSoftware(social2);
   normal4->agregarSoftware(social2);
   normal5->agregarSoftware(social2);
   normal6->agregarSoftware(social2);
   normal7->agregarSoftware(social2);
   normal8->agregarSoftware(social2);
   normal9->agregarSoftware(social2);
   normal10->agregarSoftware(social2);

   social2->getListaUsuarios().push_back(normal1);
   social2->getListaUsuarios().push_back(normal2);
   social2->getListaUsuarios().push_back(normal3);
   social2->getListaUsuarios().push_back(normal4);
   social2->getListaUsuarios().push_back(normal5);
   social2->getListaUsuarios().push_back(normal6);
   social2->getListaUsuarios().push_back(normal7);
   social2->getListaUsuarios().push_back(normal8);
   social2->getListaUsuarios().push_back(normal9);
   social2->getListaUsuarios().push_back(normal10);


   //agregar amigos


  dynamic_cast<Social*>(nino1->getListaSoftware()[0])->agregarAmigo(nino2);
  dynamic_cast<Social*>(nino1->getListaSoftware()[0])->agregarAmigo(nino3);

  dynamic_cast<Social*>(nino2->getListaSoftware()[0])->agregarAmigo(nino1);
  dynamic_cast<Social*>(nino2->getListaSoftware()[0])->agregarAmigo(nino4);
  
  dynamic_cast<Social*>(nino3->getListaSoftware()[0])->agregarAmigo(nino1);
  dynamic_cast<Social*>(nino3->getListaSoftware()[0])->agregarAmigo(nino4);

  dynamic_cast<Social*>(nino4->getListaSoftware()[0])->agregarAmigo(nino3);
  dynamic_cast<Social*>(nino4->getListaSoftware()[0])->agregarAmigo(nino2);

  dynamic_cast<Social*>(normal1->getListaSoftware()[0])->agregarAmigo(normal2);
  dynamic_cast<Social*>(normal1->getListaSoftware()[0])->agregarAmigo(normal3);

  dynamic_cast<Social*>(normal2->getListaSoftware()[0])->agregarAmigo(normal1);
  dynamic_cast<Social*>(normal2->getListaSoftware()[0])->agregarAmigo(normal4);

  dynamic_cast<Social*>(normal3->getListaSoftware()[0])->agregarAmigo(normal1);
  dynamic_cast<Social*>(normal3->getListaSoftware()[0])->agregarAmigo(normal5);

  dynamic_cast<Social*>(normal4->getListaSoftware()[0])->agregarAmigo(normal2);
  dynamic_cast<Social*>(normal4->getListaSoftware()[0])->agregarAmigo(normal6);

  dynamic_cast<Social*>(normal5->getListaSoftware()[0])->agregarAmigo(normal3);
  dynamic_cast<Social*>(normal5->getListaSoftware()[0])->agregarAmigo(normal7);

  dynamic_cast<Social*>(normal6->getListaSoftware()[0])->agregarAmigo(normal4);
  dynamic_cast<Social*>(normal6->getListaSoftware()[0])->agregarAmigo(normal8);

  dynamic_cast<Social*>(normal7->getListaSoftware()[0])->agregarAmigo(normal5);
  dynamic_cast<Social*>(normal7->getListaSoftware()[0])->agregarAmigo(normal9);

  dynamic_cast<Social*>(normal8->getListaSoftware()[0])->agregarAmigo(normal6);
  dynamic_cast<Social*>(normal8->getListaSoftware()[0])->agregarAmigo(normal10);

  dynamic_cast<Social*>(normal9->getListaSoftware()[0])->agregarAmigo(normal7);
  dynamic_cast<Social*>(normal9->getListaSoftware()[0])->agregarAmigo(admin1);

  dynamic_cast<Social*>(normal10->getListaSoftware()[0])->agregarAmigo(normal8);
  dynamic_cast<Social*>(normal10->getListaSoftware()[0])->agregarAmigo(admin1);

  dynamic_cast<Social*>(admin1->getListaSoftware()[0])->agregarAmigo(normal9);
  dynamic_cast<Social*>(admin1->getListaSoftware()[0])->agregarAmigo(normal10);

  

  
   Juego* juego1 = new Juego("Shadowfall","EA",13,33000,"Acción");
   admin1->agregarSoftware(juego1);
   juego1->getListaUsuarios().push_back(admin1);
   Juego* juego2 = new Juego("Eternal","Nintendo",10,40000,"Aventura");
   normal1->agregarSoftware(juego2);
   juego2->getListaUsuarios().push_back(normal1);
   Juego* juego3 = new Juego("Galactic","Sony",3,50000,"RPG");
   normal1->agregarSoftware(juego3);
   juego3->getListaUsuarios().push_back(normal1);
   Juego* juego4 = new Juego("Mystic","Microsoft",11,60000,"Estrategia");
   normal2->agregarSoftware(juego4);
   juego4->getListaUsuarios().push_back(normal2);
   Juego* juego5 = new Juego("Spectral","EA",7,21000,"FPS");
   normal5->agregarSoftware(juego5);
   juego5->getListaUsuarios().push_back(normal5);
   Juego* juego6 = new Juego("Nebula","Ubisoft",18,32000,"TPS");
   Juego* juego7 = new Juego("Crimson","Blizzard",13,45000,"Deportes");
   Juego* juego8 = new Juego("Inferno","Rockstar Games",3,12000,"Carrera");
   Juego* juego9 = new Juego("Abyssal","Epic Games",13,17000,"Pelea");
   Juego* juego10 = new Juego("Chrono","Sony",18,21000,"Terror");
   Juego* juego11 = new Juego("Lunar","Nintendo",13,23000,"MMO");
   Juego* juego12 = new Juego("Frostbite","Sony",18,35000,"Battle Royale");
   Juego* juego13 = new Juego("Solaris","EA",4,36000,"PUZZLE");
   Juego* juego14 = new Juego("Pandemonium","Blizzard",18,42000,"Narrativo ");
   Juego* juego15 = new Juego("Astral","EA",8,21000,"TBS");
   Juego* juego16 = new Juego("Vermillion","Blizzard",4,56000,"Mundo Abierto");
   Juego* juego17 = new Juego("Sapphire","Epic Games",8,60000,"Simulación");
   Juego* juego18 = new Juego("Ethereal","EA",18,70000,"Plataformas");
   Juego* juego19 = new Juego("Aurora","Nintendo",5,580000,"Construcción");
   Juego* juego20 = new Juego("Tempest","Nintendo",5,30000,"Sandbox");


   Ofimatica* ofimatica1= new Ofimatica("ReyKing","Microsoft",10,2000,21);
   admin1->agregarSoftware(ofimatica1);
   ofimatica1->getListaUsuarios().push_back(admin1);
   Ofimatica* ofimatica2= new Ofimatica("Falop","Google",13,5000,2);
   Ofimatica* ofimatica3= new Ofimatica("Cleta","LibreOffice",3,200,19);
   Ofimatica* ofimatica4= new Ofimatica("Aqua","Apache",15,2400,9);
   Ofimatica* ofimatica5= new Ofimatica("Yamat","WPS",18,800,11);

   Produccion* produccion1 = new Produccion("lloutube","Siemens",18,30000,"video");
   Produccion* produccion2 = new Produccion("Espotifai","Rockwel",18,30000,"musica");
   Produccion* produccion3 = new Produccion("Tuitch","ABB",18,30000,"streaming");
   Produccion* produccion4 = new Produccion("Photo","ABCC",18,30000," foto");

   Navegador* navegador1 = new Navegador("Crome" , "Explorer",13,6000,"gmail.com","chatgpt.com","aguaGratis.com","traductor.com","partidosFree.com","ColoColo.com","One piece.com","magiaReal.com","drive.com","campusVirtual.com");
   Navegador* navegador2 = new Navegador("Opera" , "JavaScript",18,6000,"Baidu.com","Aliexpress.com", "Wikipedia.org","Yahoo.com","linkedin.com","samsung.com","bing.com","pinterest.com","ebay.com","quora.com");

   Seguridad* seguridad1 = new Seguridad("Exterminator","Symantec",18,2000,"Ransomware");
   Seguridad* seguridad2 = new Seguridad("Cleaner","McAfee",13,5000,"Spyware");
   Seguridad* seguridad3 = new Seguridad("Virux","Lab",13,51000,"Botnet");
   Seguridad* seguridad4 = new Seguridad("Xoxo","Fortinet",13,4000,"Rootkit");
   Seguridad* seguridad5 = new Seguridad("DogLog","CrowdStrike",13,7000,"Gusano");
   Seguridad* seguridad6 = new Seguridad("Spicey","Check",13,32000,"Troyano");
   
   
   
   //rellanar lista de Softwares con los Softwares
    listaSoftwares.push_back(juego1);
    listaSoftwares.push_back(juego2);
    listaSoftwares.push_back(juego3);
    listaSoftwares.push_back(juego4);
    listaSoftwares.push_back(juego5);
    listaSoftwares.push_back(juego6);
    listaSoftwares.push_back(juego7);
    listaSoftwares.push_back(juego8);
    listaSoftwares.push_back(juego9);
    listaSoftwares.push_back(juego10);
    listaSoftwares.push_back(juego11);
    listaSoftwares.push_back(juego12);
    listaSoftwares.push_back(juego13);
    listaSoftwares.push_back(juego14);
    listaSoftwares.push_back(juego15);
    listaSoftwares.push_back(juego16);
    listaSoftwares.push_back(juego17);
    listaSoftwares.push_back(juego18);
    listaSoftwares.push_back(juego19);
    listaSoftwares.push_back(juego20);
    
    listaSoftwares.push_back(ofimatica1);
    listaSoftwares.push_back(ofimatica2);
    listaSoftwares.push_back(ofimatica3);
    listaSoftwares.push_back(ofimatica4);
    listaSoftwares.push_back(ofimatica5);

    listaSoftwares.push_back(produccion1);
    listaSoftwares.push_back(produccion2);
    listaSoftwares.push_back(produccion3);
    listaSoftwares.push_back(produccion4);

    listaSoftwares.push_back(navegador1);
    listaSoftwares.push_back(navegador2);

    listaSoftwares.push_back(seguridad1);
    listaSoftwares.push_back(seguridad2);
    listaSoftwares.push_back(seguridad3);
    listaSoftwares.push_back(seguridad4);
    listaSoftwares.push_back(seguridad5);
    listaSoftwares.push_back(seguridad6);

    listaSoftwares.push_back(social1);
    listaSoftwares.push_back(social2);
    
   //loggin
   
    
    bool continuarPrograma = true;

    while (continuarPrograma) {
        Usuario* usuario = iniciarSesion(listaUsuarios);

        if (usuario != nullptr) {
            int contador=-1;
            for (Usuario* u : listaUsuarios) {
            contador++;
            if (u->getNombre() == usuario->getNombre() && u->getContrasena() == usuario->getContrasena()) {
               break;
            }
        }
            mostrarMenu(usuario,contador,listaSoftwares);
        } else {
            cout << "Credenciales incorrectas. Programa terminado." << endl;
            break;
        }

        int opcion;
        cout << "¿Desea iniciar sesión nuevamente? (1: Sí, 0: No): ";
        cin >> opcion;

        if (opcion != 1) {
            continuarPrograma = false;
        }
    }

    
   //dando softwares a usuarios



   //agregando amigos 

    //agregarAmigos(listaSocial);


    return 0;
}

Usuario* iniciarSesion(vector<Usuario*>& listaUsuarios) {
    string nombre, contrasena;
    

    while (true) {
        cout << "Ingrese nombre de usuario: ";
        cin >> nombre;
        cout << "Ingrese contrasena: ";
        cin >> contrasena;

        for (Usuario* usuario : listaUsuarios) {
            
            if (usuario->getNombre() == nombre && usuario->getContrasena() == contrasena) {
                // Credenciales válidas, el usuario ha iniciado sesión
                return usuario;
            }
        }

        int opcion;
        cout << "Credenciales incorrectas. Elija una opcion:" << endl;
        cout << "1. Intentar de nuevo" << endl;
        cout << "2. Terminar el programa" << endl;
        cin >> opcion;

        if (opcion == 2) {
            // Terminar el programa
            return nullptr;
        }
    }
}

void mostrarMenu(Usuario* usuario, int n, vector<Software*> listaSoftwares) {
    int opcion;
    do {
        
        cout << "Menu:" << endl;
        cout << "1. Juegos" << endl;
        cout << "2. Ofimatica" << endl;
        cout << "3. Produccion" << endl;
        cout << "4. Navegador" << endl;
        cout << "5. Seguridad" << endl;
        cout << "6. Social" << endl;
        cout << "7. Menu Admin" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int opcion1;
                do {
                    cout << "Accediendo a la categoría de Juego." << endl;
                    cout << "Menu:" << endl;
                    cout << "1. Listar Juego " << endl;
                    cout << "2. Listar Juegos de usuario" << endl;
                    cout << "3. Agregar un Juego" << endl;
                    cout << "4. Eliminar un Juego" << endl;
                    cout << "5. Juegos ordenados alfabeticamente." << endl;
                    cout << "0. SALIR" << endl;

                    cout << "Seleccione una opción: ";
                    cin >> opcion1;

                    switch (opcion1) {
                        case 1: {
                            for (Software* software : listaSoftwares) {
                                // Verificar si el software es de tipo Juegos
                                if (dynamic_cast<Juego*>(software) != nullptr) {
                                    // El software es un objeto de la clase Juego
                                    cout << "Nombre: " << software->getNombre() << endl;
                                    cout << "Developer: " << software->getDeveloper() << endl;
                                    cout << "Edad recomendada: " << software->getEdad() << " años" << endl;
                                    cout << "Precio: $" << software->getPrecio() << endl;
                                    cout << "Genero: " << dynamic_cast<Juego*>(software)->getGenero() << endl;
                                    cout << "-----" << endl;
                                
                                }
                            }
                            break;
                        }
                        case 2:{
                            usuario->listarJuegos();
                        }
                            break;

                        case 3: {
                        string nombreJuego;
                        bool agregado = false;  // Reiniciar la variable agregado a false antes de cada iteración

                        cout << "Nombre del juego: ";
                        cin >> nombreJuego;

                        for (Software* software : listaSoftwares) {
                            // Verificar si el software es de tipo Juegos
                            if (software->getNombre() == nombreJuego) {
                                if (software->getEdad() <= usuario->getEdad()) {
                                    usuario->getListaSoftware().push_back(software);
                                    cout << "Juego agregado correctamente." << endl;
                                    agregado = true;
                                    break;// Salir del bucle después de agregar el juego
                                }
                            }
                        }

                        if (!agregado) {
                            cout << "No se encontró el juego o no cumple con los requisitos de edad." << endl;
                        }

                        break;
                    }
                        case 4:{
                            string nombreJuego;
                            bool agregado =false;
                            int n=-1;
                            cout << "Nombre del Juego: ";
                            cin >> nombreJuego;
                            for (Software* software : usuario->getListaSoftware()) {
                                n++;
                                // Verificar si el software es de tipo Juegos
                                if (software->getNombre() == nombreJuego) {
                                    usuario->getListaSoftware().erase(usuario->getListaSoftware().begin() + n);
                                    cout << "Juego Eliminado correctamente correctamente." << endl;
                                    agregado =true;
                                    break;
                                }
                            }
                            if(agregado==false){
                                 cout << "No se encontro el Juego." << endl;
                            }
                            // Lógica para eliminar una Juego
                        }
                            break;
                        case 5:{
                            sort(listaSoftwares.begin(), listaSoftwares.end(), [](Software* software1, Software* software2) {
                            // Verificar si ambos son instancias de Juego
                            Juego* juego1 = dynamic_cast<Juego*>(software1);
                            Juego* juego2 = dynamic_cast<Juego*>(software2);
                            
                            // Comparar por género si ambos son juegos, de lo contrario, mantener el orden actual
                            if (juego1 && juego2) {
                                return juego1->getGenero() < juego2->getGenero();
                            }
                            
                            // Si al menos uno de los objetos no es un juego, mantener el orden actual
                            return false;
                        });

                        // Imprimir los juegos ordenados por género
                        cout << "Juegos ordenados por genero alfabeticamente:" << endl;
                        for (const auto& software : listaSoftwares) {
                            // Verificar si el objeto es un juego antes de imprimir su información
                            Juego* juego = dynamic_cast<Juego*>(software);
                            if (juego) {
                                cout << juego->mostrarInformacion() << endl;
                            }
                        }
                            break;
                        }
                        case 0:{
                            cout << "Saliendo del menú de Juegos." << endl;
                            break;
                        }
                        default:{
                            cout << "Opción no válida. Por favor, elija una opción del menú." << endl;
                        }
                    }
                } while (opcion1 != 0);
                break;
                }
            case 2:{
                int opcion1;
                do {
                    cout << "Accediendo a la categoría de Ofimatica." << endl;
                    cout << "Menu:" << endl;
                    cout << "1. Listar ofimatica " << endl;
                    cout << "2. Listar Ofimaticas de usuario" << endl;
                    cout << "3. Agregar una Ofimatica" << endl;
                    cout << "4. Eliminar una Ofimatica" << endl;
                    cout << "5. Cambiar la cantidad de archivos" << endl;
                    cout << "0. SALIR" << endl;

                    cout << "Seleccione una opción: ";
                    cin >> opcion1;
                    switch (opcion1) {
                        case 1: {
                            for (Software* software : listaSoftwares) {
                                // Verificar si el software es de tipo Ofimaticas
                                if (dynamic_cast<Ofimatica*>(software) != nullptr) {
                                    // El software es un objeto de la clase Ofimatica
                                    cout << "Nombre: " << software->getNombre() << endl;
                                    cout << "Developer: " << software->getDeveloper() << endl;
                                    cout << "Edad recomendada: " << software->getEdad() << " años" << endl;
                                    cout << "Precio: $" << software->getPrecio() << endl;
                                    cout << "Cantidad de archivos: " << dynamic_cast<Ofimatica*>(software)->getCantidadArchivos() << endl;
                                    cout << "-----" << endl;
                                
                                }
                            }
                            break;
                        }
                        case 2:{
                            usuario->listarOfimaticas();
                        }
                            break;
                        case 3: {
                        string nombreOfimatica;
                        bool agregado = false;  

                        cout << "Nombre de la ofimática: ";
                        cin >> nombreOfimatica;

                        for (Software* software : listaSoftwares) {
                            // Verificar si el software es de tipo Ofimaticas
                            if (software->getNombre() == nombreOfimatica) {
                                if (software->getEdad() < usuario->getEdad()) {
                                    usuario->getListaSoftware().push_back(software);
                                    cout << "Juego/ofimática agregado correctamente." << endl;
                                    agregado = true;
                                    break;  // Salir del bucle después de agregar la ofimática
                                }
                            }
                        }

                        if (!agregado) {
                            cout << "No se encontró la ofimática o no cumple con los requisitos de edad." << endl;
                        }

                        break;
                    }
                        case 4:{
                            string nombreOfimatica;
                            bool agregado =false;
                            int n=-1;
                            cout << "Nombre del Ofimatica: ";
                            cin >> nombreOfimatica;
                            for (Software* software : usuario->getListaSoftware()) {
                                n++;
                                // Verificar si el software es de tipo Ofimaticas
                                if (software->getNombre() == nombreOfimatica) {
                                    usuario->getListaSoftware().erase(usuario->getListaSoftware().begin() + n);
                                    cout << "Ofimatica Eliminado correctamente correctamente." << endl;
                                    agregado =true;
                                    break;
                                }
                            }
                            if(agregado==false){
                                 cout << "No se encontro el Ofimatica." << endl;
                            }
                            
                        }
                            break;
                        case 5:{
                            string nombreOfimatica;
                            int cant;
                            bool agregado =false;
                            int n=-1;
                            cout << "Nombre del Ofimatica: ";
                            cin >> nombreOfimatica;
                            for (Software* software : usuario->getListaSoftware()) {
                                n++;
                                // Verificar si el software es de tipo Ofimaticas
                                if (software->getNombre() == nombreOfimatica) {
                                    cout << "Nueva cantidad de archivos: ";
                                    cin >> cant;
                                    dynamic_cast<Ofimatica*>(software)->setCantidadArchivos(cant);
                                    break;
                                }
                            }
                            if(agregado==false){
                                 cout << "No se encontro el Ofimatica." << endl;
                            }
                        
                            
                            break;
                        }
                        case 0:
                            cout << "Saliendo del menú de Ofimaticas." << endl;
                            break;
                        default:
                            cout << "Opción no válida. Por favor, elija una opción del menú." << endl;
                    }
                } while (opcion1 != 0);
                break;
                }
            
            case 3:{
                int opcion1;
                do {
                    cout << "Accediendo a la categoría de Produccion." << endl;
                    cout << "Menu:" << endl;
                    cout << "1. Listar Produccion " << endl;
                    cout << "2. Listar Producciones de usuario" << endl;
                    cout << "3. Agregar una Produccion" << endl;
                    cout << "4. Eliminar una Produccion" << endl;
                    cout << "5. Listar Producciones por solucion alfabeticamente." << endl;
                    cout << "0. SALIR" << endl;

                    cout << "Seleccione una opción: ";
                    cin >> opcion1;
                    switch (opcion1) {
                        case 1: {
                            for (Software* software : listaSoftwares) {
                                // Verificar si el software es de tipo Producciones
                                if (dynamic_cast<Produccion*>(software) != nullptr) {
                                    // El software es un objeto de la clase Produccion
                                    cout << "Nombre: " << software->getNombre() << endl;
                                    cout << "Developer: " << software->getDeveloper() << endl;
                                    cout << "Edad recomendada: " << software->getEdad() << " años" << endl;
                                    cout << "Precio: $" << software->getPrecio() << endl;
                                    cout << "Solucion: " << dynamic_cast<Produccion*>(software)->getSolucion() << endl;
                                    cout << "-----" << endl;
                                
                                }
                            }
                            break;
                        }
                        case 2:{
                            usuario->listarProducciones();
                        }
                            break;
                        case 3: {
                        string nombreProduccion;
                        bool agregado = false;  

                        cout << "Nombre de la Produccion: ";
                        cin >> nombreProduccion;

                        for (Software* software : listaSoftwares) {
                            // Verificar si el software es de tipo Producciones
                            if (software->getNombre() == nombreProduccion) {
                                if (software->getEdad() < usuario->getEdad()) {
                                    usuario->getListaSoftware().push_back(software);
                                    cout << "Produccion agregado correctamente." << endl;
                                    agregado = true;
                                    break;  // Salir del bucle después de agregar la Produccion
                                }
                            }
                        }

                        if (!agregado) {
                            cout << "No se encontró la Produccion o no cumple con los requisitos de edad." << endl;
                        }

                        break;
                    }
                        case 4:{
                            string nombreProduccion;
                            bool agregado =false;
                            int n=-1;
                            cout << "Nombre del Produccion: ";
                            cin >> nombreProduccion;
                            for (Software* software : usuario->getListaSoftware()) {
                                n++;
                                // Verificar si el software es de tipo Producciones
                                if (software->getNombre() == nombreProduccion) {
                                    usuario->getListaSoftware().erase(usuario->getListaSoftware().begin() + n);
                                    cout << "Produccion Eliminado correctamente correctamente." << endl;
                                    agregado =true;
                                    break;
                                }
                            }
                            if(agregado==false){
                                 cout << "No se encontro el Produccion." << endl;
                            }
                            
                        }
                            break;
                        case 5:{
                            sort(listaSoftwares.begin(), listaSoftwares.end(), [](Software* software1, Software* software2) {
                            // Verificar si ambos son instancias de produccion
                            Produccion* produccion1 = dynamic_cast<Produccion*>(software1);
                            Produccion* produccion2 = dynamic_cast<Produccion*>(software2);
                            
                            // Comparar por género si ambos son Producciones, de lo contrario, mantener el orden actual
                            if (produccion1 && produccion2) {
                                return produccion1->getSolucion() < produccion2->getSolucion();
                            }
                            
                            // Si al menos uno de los objetos no es un produccion, mantener el orden actual
                            return false;
                        });

                        // Imprimir los producciones ordenados por género
                        cout << "Producciones ordenados por solucion alfabeticamente:" << endl;
                        for (const auto& software : listaSoftwares) {
                            // Verificar si el objeto es un produccion antes de imprimir su información
                            Produccion* produccion = dynamic_cast<Produccion*>(software);
                            if (produccion) {
                                cout << produccion->mostrarInformacion() << endl;
                            }
                        }
                            break;
                        }
                        case 0:
                            cout << "Saliendo del menú de Producciones." << endl;
                            break;
                        default:
                            cout << "Opción no válida. Por favor, elija una opción del menú." << endl;
                    }
                } while (opcion1 != 0);
                break;
                }
            case 4:{
                int opcion1;
                do {
                    cout << "Accediendo a la categoría de Navegador." << endl;
                    cout << "Menu:" << endl;
                    cout << "1. Listar Navegadores " << endl;
                    cout << "2. Listar Navegadores de usuario" << endl;
                    cout << "3. Agregar un Navegador" << endl;
                    cout << "4. Eliminar un Navegador" << endl;
                    cout << "0. SALIR" << endl;

                    cout << "Seleccione una opción: ";
                    cin >> opcion1;
                    switch (opcion1) {
                        case 1: {
                            for (Software* software : listaSoftwares) {
                                // Verificar si el software es de tipo Navegadores
                                if (dynamic_cast<Navegador*>(software) != nullptr) {
                                    // El software es un objeto de la clase Navegador
                                    cout << "Nombre: " << software->getNombre() << endl;
                                    cout << "Developer: " << software->getDeveloper() << endl;
                                    cout << "Edad recomendada: " << software->getEdad() << " años" << endl;
                                    cout << "Precio: $" << software->getPrecio() << endl;
                                    cout << "Historial: " << dynamic_cast<Navegador*>(software)->getHistorial() << endl;
                                    cout << "-----" << endl;
                                
                                }
                            }
                            break;
                        }
                        case 2:{
                            usuario->listarNavegadores();
                        }
                            break;
                        case 3: {
                        string nombreNavegador;
                        bool agregado = false;  

                        cout << "Nombre de la Navegador: ";
                        cin >> nombreNavegador;

                        for (Software* software : listaSoftwares) {
                            // Verificar si el software es de tipo Navegadores
                            if (software->getNombre() == nombreNavegador) {
                                if (software->getEdad() < usuario->getEdad()) {
                                    usuario->getListaSoftware().push_back(software);
                                    cout << "Navegador agregado correctamente." << endl;
                                    agregado = true;
                                    break;  // Salir del bucle después de agregar la Navegador
                                }
                            }
                        }

                        if (!agregado) {
                            cout << "No se encontró la Navegador o no cumple con los requisitos de edad." << endl;
                        }

                        break;
                    }
                        case 4:{
                            string nombreNavegador;
                            bool agregado =false;
                            int n=-1;
                            cout << "Nombre del Navegador: ";
                            cin >> nombreNavegador;
                            for (Software* software : usuario->getListaSoftware()) {
                                n++;
                                // Verificar si el software es de tipo Navegadores
                                if (software->getNombre() == nombreNavegador) {
                                    usuario->getListaSoftware().erase(usuario->getListaSoftware().begin() + n);
                                    cout << "Navegador Eliminado correctamente correctamente." << endl;
                                    agregado =true;
                                    break;
                                }
                            }
                            if(agregado==false){
                                 cout << "No se encontro el Navegador." << endl;
                            }
                            
                        }
                            break;
                        case 0:
                            cout << "Saliendo del menú de Navegadores." << endl;
                            break;
                        default:
                            cout << "Opción no válida. Por favor, elija una opción del menú." << endl;
                    }
                } while (opcion1 != 0);
                break;
                }
            case 5:{
                int opcion1;
                if(static_cast<Administrador*>(usuario) != nullptr){
                    do {
                    cout << "Accediendo a la categoría de Seguridad." << endl;
                    cout << "Menu:" << endl;
                    cout << "1. Listar Seguridades " << endl;
                    cout << "2. Listar Seguridades de usuario" << endl;
                    cout << "3. Agregar un Seguridad" << endl;
                    cout << "4. Eliminar un Seguridad" << endl;
                    cout << "5. FUNCION RANDOM" << endl;
                    cout << "0. SALIR" << endl;

                    cout << "Seleccione una opción: ";
                    cin >> opcion1;
                    switch (opcion1) {
                        case 1: {
                            for (Software* software : listaSoftwares) {
                                // Verificar si el software es de tipo Seguridades
                                if (static_cast<Seguridad*>(software) != nullptr) {
                                    // El software es un objeto de la clase Seguridad
                                    cout << "Nombre: " << software->getNombre() << endl;
                                    cout << "Developer: " << software->getDeveloper() << endl;
                                    cout << "Edad recomendada: " << software->getEdad() << " años" << endl;
                                    cout << "Precio: $" << software->getPrecio() << endl;
                                    cout << "Malware: " << static_cast<Seguridad*>(software)->getMalware() << endl;
                                    cout << "-----" << endl;
                                
                                }
                            }
                            break;
                        }
                        case 2:{
                            usuario->listarSeguridades();
                        }
                            break;
                        case 3: {
                        string nombreSeguridad;
                        bool agregado = false;  

                        cout << "Nombre de la Seguridad: ";
                        cin >> nombreSeguridad;

                        for (Software* software : listaSoftwares) {
                            // Verificar si el software es de tipo Seguridades
                            if (software->getNombre() == nombreSeguridad) {
                                if (software->getEdad() < usuario->getEdad()) {
                                    usuario->getListaSoftware().push_back(software);
                                    cout << "Seguridad agregado correctamente." << endl;
                                    agregado = true;
                                    break;  // Salir del bucle después de agregar la Seguridad
                                }
                            }
                        }

                        if (!agregado) {
                            cout << "No se encontró la Seguridad o no cumple con los requisitos de edad." << endl;
                        }

                        break;
                    }
                        case 4:{
                            string nombreSeguridad;
                            bool agregado =false;
                            int n=-1;
                            cout << "Nombre del Seguridad: ";
                            cin >> nombreSeguridad;
                            for (Software* software : usuario->getListaSoftware()) {
                                n++;
                                // Verificar si el software es de tipo Seguridades
                                if (software->getNombre() == nombreSeguridad) {
                                    usuario->getListaSoftware().erase(usuario->getListaSoftware().begin() + n);
                                    cout << "Seguridad Eliminado correctamente correctamente." << endl;
                                    agregado =true;
                                    break;
                                }
                            }
                            if(agregado==false){
                                 cout << "No se encontro el Seguridad." << endl;
                            }
                            
                        }
                            break;
                        case 5:
                            // Lógica para la función RANDOM
                            break;
                        case 0:
                            cout << "Saliendo del menú de Seguridades." << endl;
                            break;
                        default:
                            cout << "Opción no válida. Por favor, elija una opción del menú." << endl;
                    }
                } while (opcion1 != 0);    
                }
                else{
                    cout << "No eres Admin." << endl;
                }
                break;
                }
            case 6:{
                int opcion1;
                do {
                    cout << "Accediendo a la categoría de Social." << endl;
                    cout << "Menu:" << endl;
                    cout << "1. Listar Sociales " << endl;
                    cout << "2. Listar Sociales de usuario" << endl;
                    cout << "3. Agregar un Social" << endl;
                    cout << "4. Eliminar un Social" << endl;
                    cout << "5. Mostrar amigos" << endl;
                    cout << "0. SALIR" << endl;

                    cout << "Seleccione una opción: ";
                    cin >> opcion1;
                    switch (opcion1) {
                        case 1: {
                            for (Software* software : listaSoftwares) {
                                // Verificar si el software es de tipo Sociales
                                if (dynamic_cast<Social*>(software) != nullptr) {
                                    // El software es un objeto de la clase Social
                                    cout << "Nombre: " << software->getNombre() << endl;
                                    cout << "Developer: " << software->getDeveloper() << endl;
                                    cout << "Edad recomendada: " << software->getEdad() << " años" << endl;
                                    cout << "Precio: $" << software->getPrecio() << endl;
                                    cout << "-----" << endl;
                                
                                }
                            }
                            break;
                        }
                        case 2:{
                            usuario->listarSociales();


                        }
                            break;
                        case 3: {
                        string nombreSocial;
                        bool agregado = false;  

                        cout << "Nombre de la Social: ";
                        cin >> nombreSocial;

                        for (Software* software : listaSoftwares) {
                            // Verificar si el software es de tipo Sociales
                            if (software->getNombre() == nombreSocial) {
                                if (software->getEdad() < usuario->getEdad()) {
                                    usuario->getListaSoftware().push_back(software);
                                    cout << "Social agregado correctamente." << endl;
                                    agregado = true;
                                    break;  // Salir del bucle después de agregar la Social
                                }
                            }
                        }

                        if (!agregado) {
                            cout << "No se encontró la Social o no cumple con los requisitos de edad." << endl;
                        }

                        break;
                    }
                        case 4:{
                            string nombreSocial;
                            bool agregado =false;
                            int n=-1;
                            cout << "Nombre del Social: ";
                            cin >> nombreSocial;
                            for (Software* software : usuario->getListaSoftware()) {
                                n++;
                                // Verificar si el software es de tipo Sociales
                                if (software->getNombre() == nombreSocial) {
                                    usuario->getListaSoftware().erase(usuario->getListaSoftware().begin() + n);
                                    cout << "Social Eliminado correctamente correctamente." << endl;
                                    agregado =true;
                                    break;
                                }
                            }
                            if(agregado==false){
                                 cout << "No se encontro el Social." << endl;
                            }
                            
                        }
                            break;
                        case 5:{
                            cout << "Amigos de "+ usuario->getNombre() +":"<< endl;
                            for (Software* software : usuario->getListaSoftware()) {
                                // Verificar si el software es de tipo Sociales
                                if (dynamic_cast<Social*>(software) != nullptr) {
                                    for (Usuario* u : dynamic_cast<Social*>(software)->getAmigos()) {
                                        cout << "Nombre: " << u->getNombre() << endl;
                                    }
                                    
                                
                                }
                            }
                            break;
                        }
                        case 0:
                            cout << "Saliendo del menú de Sociales." << endl;
                            break;
                        default:
                            cout << "Opción no válida. Por favor, elija una opción del menú." << endl;
                    }
                } while (opcion1 != 0);
                break;
                }
            case 7:{
                int opcion1;
                if (static_cast<Administrador*>(usuario) != nullptr) {
                    do{
                    cout << "Accediendo a la categoría de Admin." << endl;
                    cout << "Menu:" << endl;
                    cout << "1. Ver cantidad de usuarios de un software " << endl;
                    cout << "2. Listar Usuarios de un software" << endl;
                    
                    cout << "0. SALIR" << endl;

                    cout << "Seleccione una opción: ";
                    cin >> opcion1;
                    switch (opcion1) {
                        case 1:{
                            string nombreSoftware;
                            bool agregado =false;
                            cout << "Nombre del Software: ";
                            cin >> nombreSoftware;
                            for (Software* software : listaSoftwares) {
                               
                                if (software->getNombre() == nombreSoftware) {
                                    
                                    cout << "Cantidad de usuarios en el software: "+ to_string(software->getListaUsuarios().size()) << endl;
                                    agregado =true;
                                    break;
                                }
                            }
                            if(agregado==false){
                                 cout << "No se encontro el Software." << endl;
                            }

                            break;
                        }
                        case 2:{
                            string nombreSoftware;
                            bool agregado =false;
                            cout << "Nombre del Software: ";
                            cin >> nombreSoftware;
                            for (Software* software : listaSoftwares) {
                               
                                if (software->getNombre() == nombreSoftware) {
                                     cout << "Listando Usuarios:" << endl;
                                    for(Usuario* Usuario:software->getListaUsuarios()){
                                        usuario->MostrarInfo();
                                        agregado =true;
                                        
                                    }
                                    
                                    
                                }
                            }
                            if(agregado==false){
                                 cout << "No se encontro el Software." << endl;
                            }

                            
                            break;
                        }  
                        case 0:{
                            cout << "Saliendo del programa." << endl;
                                break;
                            }
                        default:  
                            cout << "Opción no válida. Por favor, elija una opción del menú." << endl;
                         
                    }
                } while (opcion1 != 0);
                }
                else{
                    cout << "No eres Administrador." << endl;

                }
                
                break;
            }
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, elija una opción del menú." << endl;
        }
    } while (opcion != 0);
}

