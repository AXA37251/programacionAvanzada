#ifndef DTJUGADOR
#define DTJUGADOR

#include<string>
using namespace std;

class DtJugador {
    private:
        string nickname;
        int edad;
    public:
        DtJugador();
        DtJugador(string, int);
        string getNickname();
        int getEdad();
        ~DtJugador();
};
#endif