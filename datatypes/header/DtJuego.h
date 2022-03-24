#ifndef DTJUEGO
#define DTJUEGO
#include<string>
#include"TipoGenero.h"
using namespace std;

class DtJuego{
    private:
        string nombre;
        TipoGenero genero;
        int totalHorasDeJuego;
    public:
        DtJuego();
        DtJuego(string nombre, TipoGenero genero, int totalHorasDeJuego);
        string getNombre();
        TipoGenero getGenero();
        int getTotalHoraDeJuego();
        ~DtJuego(); 
};
#endif