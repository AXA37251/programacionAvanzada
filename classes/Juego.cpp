#include"header/Juego.h"

Juego::Juego(){}
Juego::Juego(string nombre, TipoGenero genero){
    this->nombre=nombre;
    this->genero=genero;
    this->tope=0;
}
void Juego::setNombre(string nombre){
    this->nombre=nombre;
}
void Juego::setGenero(TipoGenero genero){
    this->genero=genero;
}
/*void Juego::setPartida(Partida* partida){
    this->partida=partida;
}*/
string Juego::getNombre(){
    return this->nombre;
}
TipoGenero Juego::getTipoGenero(){
    return this->genero;
}
/*Partida* Juego::getPartida(){
    return this->partida;
}*/
Partida** Juego::getPartida(int& cantPartidas){
    cantPartidas=this->tope;
    return this->partidas;
}
void Juego::agregarPartida(Partida* partida){
    this->partidas[this->tope]=partida;
    this->tope++;
}

Juego::~Juego(){}