
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
bool PartidaIndividual::getContinuarPartidaAnterior(){
    return this->continuaPartidaAnterior;
}
PartidaIndividual::~PartidaIndividual(){}

/*
#include "header/PartidaIndividual.h"

        PartidaIndividual::PartidaIndividual(){}
        PartidaIndividual::PartidaIndividual(DtFechaHora fecha,int duracion,bool continuarPartidaAnterior):Partida(fecha,duracion){
            this->continuarPartidaAnterior=continuarPartidaAnterior;
        }
        bool PartidaIndividual::getContinuarPartidaAnterior(){
            return this->continuarPartidaAnterior;
        }
        void PartidaIndividual::setContinuarPartidaAnterior(bool continuarPartidaAnterior){
            this->continuarPartidaAnterior=continuarPartidaAnterior;
        }
        PartidaIndividual::~PartidaIndividual(){}
        
        void PartidaIndividual::darTotalHorasParticipantes(){
            cout<<"devuelve las horas"<<endl;
        }
*/


