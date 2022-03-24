#include"header/DtJuego.h"
DtJuego::DtJuego(){}
DtJuego::DtJuego(string nombre, TipoGenero genero, int totalHorasDeJuego){
    this->nombre = nombre;
    this->genero=genero;
    this->totalHorasDeJuego=totalHorasDeJuego;
}
string DtJuego::getNombre(){
    return this->nombre;
}
TipoGenero DtJuego::getGenero(){
    return this->genero;
}
int DtJuego::getTotalHoraDeJuego(){
    return this->totalHorasDeJuego;
}
DtJuego::~DtJuego(){}