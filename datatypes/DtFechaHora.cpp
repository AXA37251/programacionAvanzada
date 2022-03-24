#include"header/DtFechaHora.h"

DtFechaHora::DtFechaHora(){}
DtFechaHora::DtFechaHora(int dia, int mes, int anio, int hora, int minuto){
    if(dia>31 || dia<1 || mes>12 || mes<1 || anio<1900 || hora>60 || hora <0 || minuto>60 || minuto<0)
    throw invalid_argument("Se ha especificado una fecha u hora invalida!\n");
    else{
        this->dia=dia;
        this->mes=mes;
        this->anio=anio;
        this->hora=hora;
        this->minuto=minuto;
    }
}
int DtFechaHora::getDia(){
    return this->dia;
}
int DtFechaHora::getMes(){
    return this->mes;
}
int DtFechaHora::getAnio(){
    return this->anio;
}
int DtFechaHora::getHora(){
    return this->hora;
}
int DtFechaHora::getMin(){
    return this->minuto;
}
DtFechaHora::~DtFechaHora(){}

//cout sin endl, para no ejecutar salto de linea con cada impresion de fecha
ostream& operator << (ostream& salida, DtFechaHora& fecha){
    cout << fecha.dia << "-" << fecha.mes << "-" << fecha.anio << " " << fecha.hora << ":" << fecha.minuto;
    return salida;
}  


