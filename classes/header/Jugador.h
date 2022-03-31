#ifndef JUGADOR
#define JUGADOR
#include<string>
using namespace std;

class Jugador{
    private:
        string nickname;
        int edad;
        int password;
    public:
        Jugador();
        Jugador(string,int, int);
        void setNickname(string);
        void setEdad(int);
        void setPassword(int); 
        string getNickname();
        int getEdad();
        int getPassword();
        ~Jugador();   
};
#endif