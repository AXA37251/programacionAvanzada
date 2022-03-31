/*|||||||||||||||||||||||||||||||||||||||||||||||\
||  clave git:                                  ||
||*  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  *||
||               -sin asteriscos-               ||
\|||||||||||||||||||||||||||||||||||||||||||||||*/

//1) Includes & defines
#include<iostream>
#include<string>
#include"datatypes/header/DtFechaHora.h"
#include"datatypes/header/DtJuego.h"
#include"datatypes/header/DtJugador.h"
#include"datatypes/header/DtPartida.h"
#include"datatypes/header/DtPartidaIndividual.h"
#include"datatypes/header/DtPartidaMultijugador.h"
#include"classes/header/Juego.h"
#include"classes/header/Jugador.h"
#include"classes/header/Partida.h"
#include"classes/header/PartidaIndividual.h"
#include"classes/header/PartidaMultijugador.h"
#define MAX_VIDEOJUEGOS 50
#define MAX_JUGADORES 50
#define MAX_PARTIDAS 50
using namespace std;

//2) Colecciones globales
struct VideoJuego{
    Juego* v[MAX_VIDEOJUEGOS];
    int tope;
}colJuegos;
struct Jugadores{
    Jugador* j[MAX_JUGADORES];
    int tope;
}colJugadores;

//3.0)  menu
void menu();
void menu(){
    system("clear");
    cout << "____________________________"  << endl;
    cout << "Menu principal:             "  << endl;
    cout << "____________________________"  << endl;
    cout << "1. Agregar Jugador"            << endl;
    cout << "2. Agregar Videojuego"         << endl;
    cout << "3. Listar Jugadores"           << endl;
    cout << "4. Listar Videojuegos"         << endl;
    cout << "5. Listar Partidas"            << endl;
    cout << "6. Iniciar Partida"            << endl;
    cout << ""                              << endl;
    cout << "0. Salir"                      << endl;
    cout << "____________________________"  << endl;
    cout << "Ingrese una opcion: ";
}

//3.a)   menuAgregarJugador
void agregarJugador(string nickname, int edad, int password);
void agregarJugador(string nickname, int edad, int password){
  int i=0;
  while(i<colJugadores.tope && colJugadores.j[i]->getNickname()!=nickname)
    i++;
  if(i==colJugadores.tope){
    if (edad>=0){
      Jugador* j = new Jugador(nickname,edad,password);
      colJugadores.j[colJugadores.tope]=j;
      colJugadores.tope++;
    } else {
        throw invalid_argument("la edad no pueder ser negativa!\n");
    }
  } else {
    throw invalid_argument("Ya existe juagdor con ese nombre!\n");
  }
}
void menuAgregarJugador(){
  system("clear");
  cout << "___________________________" << endl;
  cout << "Agregar Jugador:           " << endl;
  cout << "___________________________" << endl;
  string nickname;
  int password;
  int edad;
  cout << "Nickname: ";
  cin >> nickname;
  cout << "Edad: ";
  cin >> edad;
  cout << "Password";
  cin >> password;
  try{
    agregarJugador(nickname,edad,password);
  } catch (invalid_argument& e){
    cout << e.what() << endl;
    system("sleep 5");
  }
}

//3.b) agregarVideojuego
void agregarVideoJuego(string nombre, TipoGenero genero);
void agregarVideoJuego(string nombre, TipoGenero genero){
  int i=0;
  while(i<colJuegos.tope && colJuegos.v[i]->getNombre()!=nombre)
    i++;
  if(i==colJuegos.tope){
      Juego* j = new Juego(nombre,genero);
      colJuegos.v[colJuegos.tope]=j;
      colJuegos.tope++;
  }else{
    throw invalid_argument("Ya existe juagdor con ese nombre!\n");
  }
}
void menuAgregarVideoJuego(){
  system ("clear");
  cout<< "___________________________"<< endl;
  cout<< "Agregar Juego:             "<< endl;
  cout<< "___________________________"<< endl;
  string nombre;
  TipoGenero gen;
  int opt;
  cout<< "Ingrese el nombre del juego: ";
  cin>> nombre;
  cout<< "Seleccione genero:        " << endl;
  cout<< " 1. ACCION"                 << endl;
  cout<< " 2. AVENTURA"               << endl;
  cout<< " 3. DEPORTE"                << endl;
  cout<< " 4. OTRO"                   << endl;
  cout<< "___________________________"<< endl;
  cin>> opt;
  switch(opt){
    case 1: gen = ACCION;
      break;
    case 2: gen = AVENTURA;
      break;
    case 3: gen = DEPORTE;
      break;
    case 4: gen = OTRO;
      break;
    default:
      cout<< "Elija una opcion correcta.";
  }
  try{
    agregarVideoJuego(nombre,gen);
  }catch (invalid_argument& f){
    cout << f.what() << endl;
    system("sleep 3");
  }
}

//3.c) obtenerJugadores
DtJugador** obtenerJugadores(int& cantJugadores);
DtJugador** obtenerJugadores(int& cantJugadores){
  cantJugadores=colJugadores.tope;
  DtJugador** listar=new DtJugador*[cantJugadores];
  for (int i=0;i<colJugadores.tope;i++){
    DtJugador* ju = new DtJugador(colJugadores.j[i]->getNickname(),colJugadores.j[i]->getEdad());
    listar[i]=ju;
  }
  return listar;
}
void listarJugadores(){
  system("clear");
  cout<< "___________________________"<< endl;
  cout<< "Lista de jugadores:        "<< endl;
  cout<< "___________________________"<< endl;
   int cantJugadores;
   DtJugador** jugadores = obtenerJugadores(cantJugadores);
   for(int i = 0; i<cantJugadores;i++){
     cout << *jugadores[i];
   }
   cout<<"___________________________"<< endl;
   system("sleep 3");
}

//3.d) obtenerVideojuegos


//3.e) obtenerPartidas

//3.f) iniciarPartida

//3,g)

//4) Funcion MAIN
int main(){
    colJuegos.tope=0;
    colJugadores.tope=0;
    menu();
    int opcion;
    cin >> opcion;
    while(opcion!=0){
        switch(opcion){
            case 1: menuAgregarJugador();
                    break;
            case 2: menuAgregarVideoJuego();
                    break;
            case 3: listarJugadores();
                    break;
/*            case 4: menuObtenerVideojuegos();
                    break;
            case 5: menuObtenerPartidas();
                    break;
            case 6: menuIniciarPartida();
                    break;  
*/          case 0: cout << "Sesion terminada." << endl;
                    break;
            default:cout << "Opcion incorrecta.\n" << endl;
                    system("sleep 3");
                    break;
        };
        menu();
        cin >> opcion;
    }
}


/*|||||||||||||||||||||||||||||||||||||||||||||||\
||  INDICE:                              linea  ||
||  1) includes & defines     ............   7  ||   
||  2) colecciones -structs-  ............  23  ||
||  3) menu                                ||
||  3.a) agregarJugador       ............  56  ||
||  3.b) agregarVideojuego    ............  
||  3.c) obtenerJugadores     ............
||  3.d) obtenerVideojuegos   ............
||  3.e) obtenerPartidas      ............
||  3.f) iniciarPartida       ............
||                                              ||
||  4) Main                   ............  xx  ||
\\||||||||||||||||||||||||||||||||||||||||||||||*/