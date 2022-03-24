#include "header/DtJugador.h"

DtJugador::DtJugador(){}
DtJugador::DtJugador(string nickname,int edad){
    this->nickname=nickname;
    this->edad=edad;
}
string DtJugador::getNickname(){
    return this->nickname;
}
int DtJugador::getEdad(){
    return this->edad;
}
DtJugador::~DtJugador(){}  