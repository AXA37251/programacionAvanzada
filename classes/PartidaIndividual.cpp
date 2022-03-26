#include"header/PartidaIndividual.h"

PartidaIndividual::PartidaIndividual(){}
PartidaIndividual::PartidaIndividual(DtFechaHora fecha, int duracion, bool continuaPartidaAnterior):Partida(fecha, duracion){
    
}
void PartidaIndividual::darTotalHorasParticipantes(int){
    cout << "agrega horas de juego al jugador" << endl;
}
int PartidaIndividual::getDarTotalHorasParticipantes(){}
PartidaIndividual::~PartidaIndividual(){}


