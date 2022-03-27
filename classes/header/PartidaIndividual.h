#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL
#include"Partida.h"

class PartidaIndividual: public Partida{
    private:
        bool continuaPartidaAnterior;
    public:
        PartidaIndividual();
        PartidaIndividual(DtFechaHora fecha, int duracion, bool continuaPartidaAnterior);
        void setContinuarPartidaAnterior(bool);
        bool getContinuarPartidaAnterior();
        ~PartidaIndividual();

        void darTotalHorasParticipantes(int);
};
#endif

/*
#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL
#include "Partida.h"

class PartidaIndividual: public Partida{
    private:
        bool continuarPartidaAnterior;
    public:
        PartidaIndividual();
        PartidaIndividual(DtFechaHora fecha,int duracion,bool continuarPartidaAnterior);
        bool getContinuarPartidaAnterior();
        void setContinuarPartidaAnterior(bool continuarPartidaAnterior);
        ~PartidaIndividual(); 
        void darTotalHorasParticipantes();   
};
#endif
*/




