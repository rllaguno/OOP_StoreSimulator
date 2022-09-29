/*
Nombre Tarjeta
Descripcion:
Created by Rodrigo Llaguno Cárdenas 11/26/2021
*/
#include <iostream>
using namespace std;
#include "Direccion.h"
#include "Fecha.h"
#include <string.h>
#ifndef Tarjeta_h
#define Tarjeta_h

class Tarjeta{
  private:
    //Definicion de atributos
    Fecha fechaVencimiento;
    string nombreTarjeta;
    Direccion facturacion;
    int numeroTarjeta, cvv;
  
    public:
    //Definicion de methodos
    Tarjeta();
    Tarjeta(Fecha fechaVencimiento, string nombreTarjeta, Direccion facturacion, int numeroTarjeta, int cvv);
    ~Tarjeta();

    void setFechaVencimiento(Fecha fechaVencimiento);
    void setNombreTarjeta(string nombreTarjeta);
    void setFacturacion(Direccion facturacion);
    void setNumeroTarjeta(int numeroTarjeta);
    void setCvv(int cvv);

    Fecha getFechaVencimiento();
    string getNombreTarjeta();
    Direccion getFacturacion();
    int getNumeroTarjeta();
    int getCvv();

    void mostrarTarjeta();
    bool comprobarCvv();

};

//Metodos
//Constructores
Tarjeta::Tarjeta(){
  Fecha fechaVencimiento;
  nombreTarjeta = "";
  Direccion facturacion;
  numeroTarjeta = 0000000000000000;
  cvv = 000;
}
Tarjeta::Tarjeta(Fecha fechaVencimiento, string nombreTarjeta, Direccion facturacion, int numeroTarjeta, int cvv){
  this->fechaVencimiento = fechaVencimiento;
  this->nombreTarjeta = nombreTarjeta;
  this->facturacion = facturacion;
  this->numeroTarjeta = numeroTarjeta;
  this->cvv = cvv;
}
Tarjeta::~Tarjeta(){

}

//Getters
Fecha Tarjeta::getFechaVencimiento(){
  return fechaVencimiento;
}
string Tarjeta::getNombreTarjeta(){
  return nombreTarjeta;
}
Direccion Tarjeta::getFacturacion(){
  return facturacion;
}
int Tarjeta::getNumeroTarjeta(){
  return numeroTarjeta;
}
int Tarjeta::getCvv(){
  return cvv;
}

//Setters
void Tarjeta::setFechaVencimiento(Fecha fechaVencimiento){
  this->fechaVencimiento = fechaVencimiento;
}
void Tarjeta::setNombreTarjeta(string nombreTarjeta){
  this-> nombreTarjeta = nombreTarjeta;
}
void Tarjeta::setFacturacion(Direccion facturacion){
  this->facturacion = facturacion;
}
void Tarjeta::setNumeroTarjeta(int numeroTarjeta){
  this->numeroTarjeta = numeroTarjeta;
}
void Tarjeta::setCvv(int cvv){
  this->cvv = cvv;
}

//Otros Metodos
void Tarjeta::mostrarTarjeta(){
  cout << "Nombre de Tarjeta: " << nombreTarjeta << endl;
  cout << "Numero de Tarjeta: " << numeroTarjeta << endl;
  cout << "Fecha de Vencimiento: ";
  fechaVencimiento.mostrarFecha(); 
  cout << "CVV: " << cvv << endl;
  cout << "Facturacion: ";
  facturacion.mostrarDireccion();
}

bool Tarjeta::comprobarCvv(){
  int tCvv;
  bool check;
  cout << "\n";
  cout << "Inicia Comprobacion de Pago" << endl;
  cout << "Tarjeta con numero " << numeroTarjeta << endl;
  cout << "Ingrese CVV: ";
  cin >> tCvv;

  if (tCvv == cvv){
    cout << "\n";
    cout << "Pago Aprobado" << endl;
    cout << "Termina Comprobacion de Pago" << endl;
    check = true;

  }else if (tCvv != cvv){
    cout << "\n";
    cout << "CVV Incorrecto" << endl;
    cout << "Pago Declinado" << endl;
    cout << "Termina Comprobacion de Pago" << endl;
    check = false;
  }
  return check;
}

#endif // Tarjeta_h