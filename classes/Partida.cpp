#include"header/Partida.h"

Partida::Partida(){}
Partida::Partida(DtFechaHora fecha, int duracion){
    this->fecha=fecha;
    this ->duracion=duracion;
}
DtFechaHora Partida::getFecha(){
    return this->fecha;
}
int Partida::getDuracion(){
    return this->duracion;
}
void Partida::setFecha(DtFechaHora fecha){
    this->fecha=fecha;
}
void Partida::setDuracion(int duracion){
    this->duracion=duracion;
}
Partida::~Partida(){}

/*
#include"header/Partida.h"
Partida::Partida(){}
Partida::Partida(DtFechaHora fecha,int duracion){
    this->fecha=fecha;
}
DtFechaHora Partida::getFecha(){
    return this->fecha;
}
int Partida::getDuracion(){
    return this->duracion;
}
void Partida::setFecha(DtFechaHora fecha){
    this->fecha=fecha;
}
void Partida::setDuracion(int duracion){
    this->duracion=duracion;
}
Partida::~Partida(){}
*/

