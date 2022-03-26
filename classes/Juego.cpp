#include"header/Juego.h"

Juego::Juego(){}
Juego::Juego(string nombre, TipoGenero genero){
    this->nombre=nombre;
    this->genero=genero;
}
void Juego::setNombre(string nombre){
    this->nombre=nombre;
}
void Juego::setGenero(TipoGenero genero){
    this->genero=genero;
}
string Juego::getNombre(){
    return this->nombre;
}
TipoGenero Juego::getTipoGenero(){
    return this->genero;
}
Juego::~Juego(){}