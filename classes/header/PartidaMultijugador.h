#ifndef PARTIDAMULTIJUGADOR
#define PARTIDAMULTIJUGADOR
#include"Partida.h"

class PartidaMultijugador:Partida{
    private:
        bool transmitidaEnVivo;
        int cantParticipantes;
    public:
        PartidaMultijugador();
        PartidaMultijugador(DtFechaHora, int, bool, int);   
        void setTransmitidaEnVivo(bool);
        void setCantParticipantes(int);
        bool getTransmitidaEnVivo();
        int getCantParticipantes();        
        void darTotalHorasParticipantes(int);
        ~PartidaMultijugador();
};
#endif

