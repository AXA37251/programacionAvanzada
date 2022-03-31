#include"header/Partida.h"

Partida::Partida(){}
Partida::Partida(DtFechaHora* fecha, int duracion, Jugador* jugador){
    this->fecha=fecha;
    this ->duracion=duracion;
    this->jugador=jugador;
}
void Partida::setFecha(DtFechaHora* fecha){
    this->fecha=fecha;
}
void Partida::setDuracion(int duracion){
    this->duracion=duracion;
}
DtFechaHora* Partida::getFecha(){
    return this->fecha;
}
int Partida::getDuracion(){
    return this->duracion;
}
Jugador* Partida::getJugador(){
    return this->jugador;
}
Partida::~Partida(){}




