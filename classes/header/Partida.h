#ifndef PARTIDA
#define PARTIDA
#include"../../datatypes/header/DtFechaHora.h"

using namespace std;

class Partida{
    private:
        DtFechaHora fecha;
        int duracion;
    public:
        Partida();
        Partida(DtFechaHora fecha, int duracion);
        void setFecha(DtFechaHora);
        void setDuracion(int duracion);
        DtFechaHora getFecha();
        int getDuracion();
        ~Partida();
        //Abstract
        virtual void darTotalHorasParticipantes()=0;
};
#endif
