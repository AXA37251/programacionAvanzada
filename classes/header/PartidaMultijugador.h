#ifndef PARTIDAMULTIJUGADOR
#define PARTIDAMULTIJUGADOR
#include"Partida.h"
class PartidaMultijugador: public Partida{
    private:
        bool transmitidaEnVivo;
        int cantParticipantes;
    public:
        PartidaMultijugador();
        PartidaMultijugador(DtFechaHora fecha, int duracion, bool trasmitidaEnVivo, int cantParticipantes);   
        void setTransmitidaEnVivo(bool);
        void setCantParticipantes(int);
        bool getTransmitidaEnVivo();
        int getCantParticipantes();        
        ~PartidaMultijugador();

        void darTotalHorasParticipantes(int);
};
#endif
 
    

