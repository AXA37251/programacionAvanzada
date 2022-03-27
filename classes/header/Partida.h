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
        DtFechaHora getFecha();
        int getDuracion();
        void setFecha(DtFechaHora);
        void setDuracion(int duracion);
        ~Partida();
        //Abstract
        virtual void darTotalHorasParticipantes()=0;
};
#endif

/*
#ifndef PARTIDA
#define PARTIDA
//#include "DtFechaHora.h"
#include"../../datatypes/header/DtFechaHora.h"

using namespace std;

class Partida{
    private:
        DtFechaHora fecha;
        int duracion;
    public:
        Partida();
        Partida(DtFechaHora fecha,int duracion);
        DtFechaHora getFecha();
        int getDuracion();
        void setFecha(DtFechaHora fecha);
        void setDuracion(int duracion);
        ~Partida(); 
        virtual void darTotalHorasParticipantes()=0;

};
#endif
*/



