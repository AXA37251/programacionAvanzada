#include"header/PartidaIndividual.h"
PartidaIndividual::PartidaIndividual(){}
PartidaIndividual::PartidaIndividual(DtFechaHora* fecha, int duracion, bool continuaPartidaAnterior, Jugador* jugador):Partida(fecha, duracion, jugador){
    this->continuaPartidaAnterior=continuaPartidaAnterior;
}
void PartidaIndividual::setContinuarPartidaAnterior(bool continuaPartidaAnterior){
    this->continuaPartidaAnterior=continuaPartidaAnterior;
}
bool PartidaIndividual::getContinuarPartidaAnterior(){
    return this->continuaPartidaAnterior;
}
int PartidaIndividual::darTotalHorasParticipantes(){
    return this->getDuracion();
}
PartidaIndividual::~PartidaIndividual(){}



