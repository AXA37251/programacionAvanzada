#ifndef JUEGO
#define JUEGO
#include<string>
#include"../../datatypes/header/TipoGenero.h"
using namespace std;

class Juego{
    private:
        string nombre;
        TipoGenero genero;
    public:
        Juego();
        Juego(string, TipoGenero);
        void setNombre(string);
        void setGenero(TipoGenero);
        string getNombre;
        TipoGenero getTipoGenero();
        ~Juego();
};
#endif


