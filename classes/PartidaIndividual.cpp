
#include"header/PartidaIndividual.h"

PartidaIndividual::PartidaIndividual(){}
PartidaIndividual::PartidaIndividual(DtFechaHora fecha, int duracion, bool continuaPartidaAnterior):Partida(fecha, duracion){
    this->continuaPartidaAnterior=continuaPartidaAnterior;
}
void PartidaIndividual::setContinuarPartidaAnterior(bool continuaPartidaAnterior){
    this->continuaPartidaAnterior=continuaPartidaAnterior;
}
bool PartidaIndividual::getContinuarPartidaAnterior(){
    return this->continuaPartidaAnterior;
}
PartidaIndividual::~PartidaIndividual(){}

void PartidaIndividual::darTotalHorasParticipantes(int duracion){
    cout << "agrega horas de juego al jugador" << endl;
}


