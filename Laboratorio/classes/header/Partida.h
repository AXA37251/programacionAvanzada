#ifndef PARTIDA
#define PARTIDA
#include"../../datatypes/header/DtFechaHora.h"

using namespace std;

class Partida  {
    private:
        DtFechaHora fecha;
        int duracion;
    public:
        Partida();
        Partida(DtFechaHora, int);
        DtFechaHora getFecha();
        int getDuracion();
        void setFecha(DtFechaHora);
        void setDuracion(int);
        ~Partida();
        //Abstract
        virtual void darTotalHorasParticipantes()=0;
};
#endif