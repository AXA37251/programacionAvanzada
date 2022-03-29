#include"header/PartidaMultijugador.h"

PartidaMultijugador::PartidaMultijugador(){}
PartidaMultijugador::PartidaMultijugador(DtFechaHora fecha,int duracion,bool transmitidaEnVivo, int cantParticipantes):Partida(fecha,duracion){
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

PartidaMultijugador::~PartidaMultijugador(){}

void PartidaMultijugador::darTotalHorasParticipantes(int totalHorasParticipantes){
    cout << "agrega horas de juego a los participantes" << endl;
}