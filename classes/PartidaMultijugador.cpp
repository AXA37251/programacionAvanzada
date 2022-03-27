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
void PartidaMultijugador::darTotalHorasParticipantes(int totalHorasParticipantes){
    cout << "agrega horas de juego a los participantes" << endl;
}
PartidaMultijugador::~PartidaMultijugador(){}

/*
#include "header/PartidaMultijugador.h"


    PartidaMultijugador::PartidaMultijugador(){}
    PartidaMultijugador::PartidaMultijugador(DtFechaHora fecha,int duracion,bool trasmicionEnVivo):Partida(fecha,duracion){
        this->trasmicionEnVivo=trasmicionEnVivo;
    }
    bool PartidaMultijugador::getTrasmicionEnVivo(){
        return this->trasmicionEnVivo;
    }
    void PartidaMultijugador::setTrasmicionEnVivo(bool trasmicionEnVivo){
        this->trasmicionEnVivo=trasmicionEnVivo;
    }

    PartidaMultijugador::~PartidaMultijugador(){}
    
    
    void PartidaMultijugador::darTotalHorasParticipantes(){
        cout << "Devuelve total de horas de los jugadores" << endl;
    }
*/  




