#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL
#include"Partida.h"

class PartidaIndividual: public Partida{
    private:
        bool continuaPartidaAnterior;
    public:
        PartidaIndividual();
        PartidaIndividual(DtFechaHora* fecha, int duracion, bool continuaPartidaAnterior, Jugador* jugador);
        void setContinuarPartidaAnterior(bool);
        bool getContinuarPartidaAnterior();
        ~PartidaIndividual();

        int darTotalHorasParticipantes();
};
#endif





