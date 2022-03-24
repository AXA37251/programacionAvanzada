#ifndef DTFECHAHORA
#define DTFECHAHORA

#include <iostream>

using namespace std;

class DtFechaHora   {
    private:
        int dia;
        int mes;
        int anio;
        int hora;
        int minuto;
    public:
        DtFechaHora();
        DtFechaHora(int, int, int, int, int);
        int getDia();
        int getMes();
        int getAnio();
        int getHora();
        int getMin();
        ~DtFechaHora();
        friend ostream& operator << (ostream&, DtFechaHora&);
};
#endif