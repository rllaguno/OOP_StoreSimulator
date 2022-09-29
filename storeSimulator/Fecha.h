/*
Nombre Clase
Descripcion:
Created by Rodrigo Llaguno Cárdenaso XX/XX/XXXX
*/
#ifndef Fecha_h
#define Fecha_h

#include <iostream>
using namespace std;

class Fecha{
  private:
    //Definicion de atributos
    int dia, mes, anio;
  
  public:
    //Definicion de methodos
    Fecha();
    Fecha(int dia, int mes, int anio);
    ~Fecha();

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    int getDia();
    int getMes();
    int getAnio();

    void mostrarFecha();
    Fecha fechaEntrega();

};

//Metodos

//Constructores
Fecha::Fecha(){
  dia = 1;
  mes = 1;
  anio = 2021;
}

Fecha::Fecha(int dia, int mes, int anio){
  this->dia = dia;
  this->mes = mes;
  this->anio = anio;
}

Fecha::~Fecha(){

}

//Getters
int Fecha::getDia(){
  return dia;
}
int Fecha::getMes(){
  return mes;
}
int Fecha::getAnio(){
  return anio;
}
//Setters
void Fecha::setDia(int dia){
  this->dia=dia;
}
void Fecha::setMes(int mes){
  this->mes=mes;
}

void Fecha::setAnio(int anio){
  this->anio=anio;
}

//Otros Metodos
void Fecha::mostrarFecha(){
  cout << dia << "/" << mes << "/" << anio << endl;
}


Fecha Fecha::fechaEntrega(){
  int mesEntrega = mes + 3;
  int diaEntrega = dia;
  int anioEntrega = anio;
  if (mesEntrega > 12){
    int dif = mesEntrega - 12;
    mesEntrega = dif;
    anioEntrega = anioEntrega + 1;
  }

  Fecha entregaFecha(diaEntrega, mesEntrega, anioEntrega);
  return entregaFecha;
}

#endif // Fecha_h