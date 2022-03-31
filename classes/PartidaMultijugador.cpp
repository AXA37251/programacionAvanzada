#include"header/PartidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador(){}
PartidaMultijugador::PartidaMultijugador(DtFechaHora* fecha,int duracion,bool transmitidaEnVivo, int cantParticipantes, Jugador* jugador):Partida(fecha,duracion, jugador){
        this->transmitidaEnVivo=transmitidaEnVivo;
        this->cantParticipantes=cantParticipantes;
}
void PartidaMultijugador::setTransmitidaEnVivo(bool transmitidaEnVivo){
    this->transmitidaEnVivo=transmitidaEnVivo;
}
void PartidaMultijugador::setCantParticipantes(int cantParticipantes){
    this->cantParticipantes=cantParticipantes;
}
bool PartidaMultijugador::getTransmitidaEnVivo(){
    return this->transmitidaEnVivo;
}
int PartidaMultijugador::getCantParticipantes(){
    return this->cantParticipantes;
}      
int PartidaMultijugador::darTotalHorasParticipantes(){
    return this->getDuracion()*this->cantParticipantes;
}
PartidaMultijugador::~PartidaMultijugador(){}