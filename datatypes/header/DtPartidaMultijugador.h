#ifndef DTPARTIDAMULTIJUGADOR
#define DTPARTIDAMULTIJUGADOR
#include"DtPartida.h"

class DtPartidaMultijugador:DtPartida {
    private:
        bool trasmitidaEnVivo;
        int cantParticipantes;
    public:
        DtPartidaMultijugador();
        DtPartidaMultijugador(DtFechaHora, int, bool, int);
        bool getTrasmitidaEnVivo();
        int getCantParticipantes();
};
#endif