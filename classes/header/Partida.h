#ifndef PARTIDA
#define PARTIDA
#include"../../datatypes/header/DtFechaHora.h"
#include"Jugador.h"

using namespace std;

class Partida{
    private:
        DtFechaHora* fecha;
        int duracion;
        Jugador* jugador;
    public:
        Partida();
        Partida(DtFechaHora* fecha, int duracion, Jugador* jugador);
        void setFecha(DtFechaHora*);
        void setDuracion(int duracion);
        DtFechaHora* getFecha();
        int getDuracion();
        ~Partida();
        //Abstract
        virtual int darTotalHorasParticipantes()=0;
        Jugador* getJugador();

};
#endif
