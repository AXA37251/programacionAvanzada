#ifndef DTJUGADOR
#define DTJUGADOR
#include<iostream>
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
        friend ostream& operator << (ostream&, DtJugador&);
        ~DtJugador();
};
#endif