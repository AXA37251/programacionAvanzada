#ifndef JUEGO
#define JUEGO
#include<string>
#include"../../datatypes/header/TipoGenero.h"
#include"Partida.h"
#define MAX_PARTIDAS 50
using namespace std;

class Juego{
    private:
        string nombre;
        TipoGenero genero;
        //pseudoatributo:
        Partida* partidas[MAX_PARTIDAS];
        int tope;
    public:
        Juego();
        Juego(string, TipoGenero);
        void setNombre(string);
        void setGenero(TipoGenero);
        void setPartida(Partida* partida);
        string getNombre();
        TipoGenero getTipoGenero();
        Partida** getPartida(int& cantPartidas);
        void agregarPartida(Partida* partida);
        ~Juego();
};
#endif


