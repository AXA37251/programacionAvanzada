#ifndef JUEGO
#define JUEGO
#include<string>
#include"../../datatypes/header/TipoGenero.h"
#include"Partida.h"
using namespace std;

class Juego{
    private:
        string nombre;
        TipoGenero genero;
        //pseudoatributo:
        Partida* partida;
    public:
        Juego();
        Juego(string, TipoGenero, Partida*);
        void setNombre(string);
        void setGenero(TipoGenero);
        void setPartida(Partida* partida);
        string getNombre();
        TipoGenero getTipoGenero();
        Partida* getPartida();
        ~Juego();
};
#endif


