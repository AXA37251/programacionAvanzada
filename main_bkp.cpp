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

using namespace std;
//COLECCIONES GLOBALES
struct VideoJuegos{
  Juego* v[MAX_VIDEOJUEGOS];
  int tope;
} colJuego;

struct jugadores{
  Jugador* j[MAX_JUGADORES];
  int tope;
} colJugadores;

//OPERACION A
void agregarJugador(string nickname, int edad, int password);
void menuAgregarJugador(){
  system("clear");
  cout << "__________________________" << endl;
  cout << "_____AGREGAR JUGADOR_____" << endl;
  string nickname;
  int password;
  int edad;
  cout << "NOMBRE: ";
  cin >> nickname;
  cout << "EDAD: ";
  cin >> edad;
  cout << "PASSWORD: ";
  cin >> password;
  try{
    agregarJugador(nickname,edad,password);
  } catch (invalid_argument& e){
    cout << e.what() << endl;
    system("sleep 5");
  }
}

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
      throw invalid_argument("la edad no pueder ser negativo!!\n");
    }
  } else {
    throw invalid_argument("Ya existe juagdor con ese nombre!!\n");
  }
}
//OPERACION B
void agregarVideoJuego(string nombre, TipoGenero genero);
//! Juan
void menuAgregarVideoJuego(){
  system ("clear");
  cout << "__________________________" << endl;
  cout << "_______AGREGAR JUEGO______" << endl;
  string nombre;
  TipoGenero gen;
  int opt;
  cout<< "Ingrese el nombre del juego: ";
  cin>> nombre;
  cout<< "________GENEROS_________"<<endl;
  cout<< "1 : ACCION \n";
  cout<< "2 : AVENTURA\n";
  cout<< "3 : DEPORTE\n";
  cout<< "4 : OTRO\n";
  cout<< "Elija un genero.. \n";
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
    system("sleep 2");
  }

}
//! end juan
void agregarVideoJuego(string nombre, TipoGenero genero){
  int i=0;
  while(i<colJuego.tope && colJuego.v[i]->getNombre()!=nombre)
    i++;
  if(i==colJuego.tope){
      Juego* j = new Juego(nombre,genero);
      colJuego.v[colJuego.tope]=j;
      colJuego.tope++;
  }else{
    throw invalid_argument("Ya existe juagdor con ese nombre!!\n");
  }
}
//OPERACION C
DtJugador** obtenerJugadores(int& cantJugadores);

void listarJugadores(){
  system("clear");
   cout << "________JUGADORES_________"<< endl << endl;
   int cantJugadores;
   DtJugador** jugadores = obtenerJugadores(cantJugadores);
   for(int i = 0; i<cantJugadores;i++){
     cout<< *jugadores[i];
   }
   "___________________________";
   system("sleep 2");
}

DtJugador** obtenerJugadores(int& cantJugadores){
  cantJugadores=colJugadores.tope;
  DtJugador** listar=new DtJugador*[cantJugadores];
  for (int i=0;i<colJugadores.tope;i++){
    DtJugador* ju = new DtJugador(colJugadores.j[i]->getNickname(),colJugadores.j[i]->getEdad());
    listar[i]=ju;
  }
  return listar;

}
//OPERACION D
DtJuego** obtenerVideoJuegos(int& cantVideojuegos);
DtJuego** obtenerVideoJuegos(int& cantVideojuegos){
  cantVideojuegos=colJuego.tope;
  DtJuego** listar=new DtJuego*[cantVideojuegos];
  for (int i=0;i<colJuego.tope;i++){
    int cantPartidas=0, k=0, cantHoras = 0;
    Partida** partidas= colJuego.v[i]->getPartidas(cantPartidas);
    while(k<cantPartidas){
      cantHoras = cantHoras + partidas[k]->darTotalHorasParticipantes();
      k++;
    }
    DtJuego* vj = new DtJuego(colJuego.v[i]->getNombre(),colJuego.v[i]->getGenero(), cantHoras);
    listar[i]=vj;
  }
  return listar;
}

void listarVideoJuego(){
    system("clear");
   cout << "________JUEGOS_________"<< endl << endl;
   int cantJuegos;
   DtJuego** juego = obtenerVideoJuegos(cantJuegos);
   for(int i = 0; i<cantJuegos;i++){
     cout<< *juego[i];
   }
   "___________________________";
   system("sleep 2");
}

DtPartida** obtenerPartidas(string videojuego, int& cantPartidas);
DtPartida** obtenerPartidas(string videojuego, int& cantPartidas){
  int i=0;
  while (videojuego != colJuego.v[i]->getNombre()){
    i++;
  }
  Juego* gEncontrado = colJuego.v[i];
  Partida** partidas = gEncontrado->getPartidas(cantPartidas);
  DtPartida** dtPartidas = new DtPartida*[cantPartidas];
  for(int j=0; j<= cantPartidas;j++){
    PartidaIndividual* pI = dynamic_cast<PartidaIndividual*>(partidas[j]);
    if(pI != NULL) {
      DtPartidaIndividual* dtPI = new DtPartidaIndividual(pI->getFecha(),pI->getDuracion(),pI->getContinuarPartidaAnterior());
      
    }else{
      PartidaMultijugador* pM = dynamic_cast<PartidaMultijugador*>(partidas[j]);
      DtPartidaMultijugador* dtPM = new DtPartidaMultijugador(pM->getFecha(),pM->getDuracion(),pM->getTransmicionEnVivo(),pM->getCantParticipantes());
      dtPartidas[j]=dtPM;
    }
  }
  
  return dtPartidas;
}
void iniciarPartida(string nickname, string videojuego, DtPartida* datos);
void iniciarPartida(string nickname, string videojuego, DtPartida* datos){
  int i=0;
  while (videojuego != colJuego.v[i]->getNombre()){
    i++;
  }
  Juego* gEncontrado=colJuego.v[i];
  i=0;
  while (nickname != colJugadores.j[i]->getNickname()){
    i++;
  }
  Jugador* pEncontrado=colJugadores.j[i];
  DtPartidaMultijugador* dtm = dynamic_cast<DtPartidaMultijugador*>(datos);
  if (dtm != NULL) {
    PartidaMultijugador* pM = new PartidaMultijugador(dtm->getFecha(),dtm->getDuracion(),dtm->getTrasmitidaEnVivio(),dtm->getCantParticipantes(),pEncontrado);
    gEncontrado->agregarPartida(pM);
  }else{
    DtPartidaIndividual* dti = dynamic_cast<DtPartidaIndividual*>(datos);
    PartidaIndividual* pI = new PartidaIndividual(dti->getFecha(),dti->getDuracion(),dti->getContinuarPartidaAnterior(),pEncontrado);
    gEncontrado->agregarPartida(pI);
  }
}
int main(){
  colJugadores.tope = 0;
  //menuAgregarJugador();
  //listarJugadores();
  menuAgregarVideoJuego();
  listarVideoJuego();
  return 0;
}