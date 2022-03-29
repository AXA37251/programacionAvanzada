#include"header/Juego.h"

Juego::Juego(){}
Juego::Juego(string nombre, TipoGenero genero, Partida* partida){
    this->nombre=nombre;
    this->genero=genero;
}
void Juego::setNombre(string nombre){
    this->nombre=nombre;
}
void Juego::setGenero(TipoGenero genero){
    this->genero=genero;
}
void Juego::setPartida(Partida* partida){
    this->partida=partida;
}
string Juego::getNombre(){
    return this->nombre;
}
TipoGenero Juego::getTipoGenero(){
    return this->genero;
}
Partida* Juego::getPartida(){
    return this->partida;
}
Juego::~Juego(){}