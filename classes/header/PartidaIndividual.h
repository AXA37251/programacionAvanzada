#ifndef PARTIDAINDIVIDUAL
#define PARTIDAINDIVIDUAL
#include"Partida.h"
class PartidaIndividual:Partida{
    private:
        bool continuaPartidaAnterior;
    public:
        PartidaIndividual();
        PartidaIndividual(DtFechaHora, int, bool);
        void darTotalHorasParticipantes(int);
        void setContinuarPartidaAnterior(bool);
        int getDarTotalHorasParticipantes();
        bool getContinuarPartidaAnterior();
        ~PartidaIndividual();
};
#endif

