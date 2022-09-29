/*
Nombre Clase
Descripcion:
Created by Alexis Gabriel Chapa Romero XX/XX/XXXX
*/
#include "Pedido.h"
#include "Direccion.h"
#include "Tarjeta.h"
#include <iostream>
using namespace std;

#ifndef Cliente_h
#define Cliente_h
class Cliente{
  private:
    //Atributtos
    string nombre, costumerID, correo, telefono;
    Pedido pedidoCliente;
    Direccion direccionCliente;
    Tarjeta tarjetaCliente;
    int edad;

  public:
    //Constructores
    Cliente();
    Cliente(string nombre, string costumerID, string correo, string telefono, int edad, Pedido pedidoCliente, Direccion direccionCliente, Tarjeta tarjetaCliente);
    ~Cliente();
    
    //Setters
    void setNombre(string nombre);
    void setCostumerId(string costumerID);
    void setCorreo(string correo);
    void setTelefono(string telefono);
    void setEdad(int edad);
    void setPedido(Pedido pedidoCliente);
    void setDireccion(Direccion direccionCliente);
    void setTarjeta(Tarjeta tarjetaCliente);

    //Getters
    string getNombre();
    string getCostumerId();
    string getCorreo();
    string getTelefono();
    int getEdad();
    Pedido getPedidoCliente();
    Direccion getDireccionCliente();
    Tarjeta getTarjeta();

    //Methodos
    void mostrarCliente(); 
};

//Metodos
//Constructores
Cliente::Cliente(){
  string nombre = " ", costumerID = " ", correo = " ", telefono = " ";
  int Edad = 0;
  Pedido pedidoCliente;
  Direccion direccionCliente;
  Tarjeta tarjetaCliente;
}

Cliente::Cliente(string nombre, string costumerID, string correo, string telefono, int edad, Pedido pedidoCliente, Direccion direccionCliente, Tarjeta tarjetaCliente){
  this->nombre = nombre;
  this->costumerID = costumerID;
  this->correo = correo;
  this->telefono = telefono;
  this->edad = edad;
  this->pedidoCliente = pedidoCliente;
  this->direccionCliente = direccionCliente;
  this->tarjetaCliente = tarjetaCliente;
}

Cliente::~Cliente(){
}

//Setters
void Cliente::setNombre(string nombre){
  this->nombre = nombre;
}

void Cliente::setCostumerId(string costumerID){
  this->costumerID = costumerID;
}

void Cliente::setCorreo(string correo){
  this->correo = correo;
}

void Cliente::setTelefono(string telefono){
  this->telefono = telefono;
}

void Cliente::setEdad(int edad){
  this->edad = edad;
}

void Cliente::setPedido(Pedido pedidoCliente){
  this->pedidoCliente = pedidoCliente;
}

void Cliente::setDireccion(Direccion direccionCliente){
  this->direccionCliente = direccionCliente;
}

void Cliente::setTarjeta(Tarjeta tarjetaCliente){
  this->tarjetaCliente = tarjetaCliente;
}

//Getters
string Cliente::getNombre(){
  return nombre;
}

string Cliente::getCostumerId(){
  return costumerID;
}

string Cliente::getCorreo(){
  return correo;
}

string Cliente::getTelefono(){
  return telefono;
}

int Cliente::getEdad(){
  return edad;
}

Pedido Cliente::getPedidoCliente(){
  return pedidoCliente;
}

Direccion Cliente::getDireccionCliente(){
  return direccionCliente;
}

Tarjeta Cliente::getTarjeta(){
  return tarjetaCliente;
}

//Metodos
void Cliente::mostrarCliente(){
  cout<<"Costumer ID: "<<costumerID<<"\nNombre: "<<nombre<<"\nEdad: "<<edad<<"\nCorreo: "<<correo<<"\nTelefono: "<<telefono<<endl;
  pedidoCliente.informacionPedido();
  direccionCliente.mostrarDireccion();
  tarjetaCliente.mostrarTarjeta();
}

#endif // Cliente_h