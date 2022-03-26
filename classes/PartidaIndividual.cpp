#include"header/PartidaIndividual.h"
PartidaIndividual::PartidaIndividual(){}
PartidaIndividual::PartidaIndividual(DtFechaHora fecha, int duracion, bool continuaPartidaAnterior):Partida(fecha, duracion){
    this->continuaPartidaAnterior=continuaPartidaAnterior;
}
void PartidaIndividual::darTotalHorasParticipantes(int duracion){
    cout << "agrega horas de juego al jugador" << endl;
}
void PartidaIndividual::setContinuarPartidaAnterior(bool continuaPartidaAnterior){
    this->continuaPartidaAnterior=continuaPartidaAnterior;
}
int PartidaIndividual::getDarTotalHorasParticipantes(){
    cout << "devuelve las horas de juego del jugador" << endl;
}
bool PartidaIndividual::getContinuarPartidaAnterior(){
    return this->continuaPartidaAnterior;
}
PartidaIndividual::~PartidaIndividual(){}

