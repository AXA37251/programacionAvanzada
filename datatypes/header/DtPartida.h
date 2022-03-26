#ifndef DTPARTIDA
#define DTPARTIDA
#include"DtFechaHora.h"

class DtPartida {
    private:
        DtFechaHora fecha;
        int duracion;
    public:
        DtPartida();
        DtPartida(DtFechaHora, int);
        DtFechaHora getFecha();
        int getDuracion();
        ~DtPartida();
};
#endif