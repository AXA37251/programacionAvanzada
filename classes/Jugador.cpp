#include "Jugador.h"

Jugador::Jugador(){}
Jugador::Jugador(string nickname,int edad,int password){
    this->nickname=nickname;
    this->edad=edad;
    this->password=password;
}
void Jugador::setNickname(string nickname){
    this->nickname=nickname;
}
void Jugador::setEdad(int edad){
    this->edad=edad;
}
void Jugador::setPassword(int password){
    this->password=password;
} 
string Jugador::getNickname(){
    return this->nickname;
}
int Jugador::getEdad(){
    return this->edad;
}
int Jugador::getPassword(){
    return this->password;
} 
Jugador::~Jugador(){} 