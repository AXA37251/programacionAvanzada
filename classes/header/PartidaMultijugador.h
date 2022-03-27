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
        bool getTransmitidaEnVivo();
        void setCantParticipantes(int);
        int getCantParticipantes();        
        ~PartidaMultijugador();

        void darTotalHorasParticipantes(int);
};
#endif
/*
#ifndef PARTIDAMULTIJUGADOR
#define PARTIDAMULTIJUGADOR
#include "Partida.h"

class PartidaMultijugador: public Partida{
    private:
        bool trasmicionEnVivo;
    public:
        PartidaMultijugador();
        PartidaMultijugador(DtFechaHora fecha,int duracion,bool trasmiconEnVivo);
        bool getTrasmicionEnVivo();
        void setTrasmicionEnVivo(bool trasMicionEnVivo);
        ~PartidaMultijugador();
        void darTotalHorasParticipantes();

};
#endif
*/
 
    

