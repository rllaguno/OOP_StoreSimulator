/*
Nombre Clase
Descripcion:
Created by Alexis Gabriel Chapa Romero XX/XX/XXXX
*/
#include "Articulo.h"
#include "Fecha.h"
#include "Direccion.h"

#ifndef Pedido_h
#define Pedido_h

class Pedido{
  private:
    //Definicion de atributos
    Fecha fechaPedido, fechaEntrega;
    Articulo articuloPedido;
    Direccion direccionEntrega;
  public:
    //Definicion de methodos
    //Constructores
    Pedido();
    Pedido(Fecha fechaPedido, Fecha fechaEntrega, Articulo articuloPedido, Direccion direccionEntrega);
    ~Pedido();
    
    //Setters
    void setFechaPedido(Fecha fechaPedido);
    void setFechaEntrega(Fecha fechaEntrega);
    void setArticuloPedido(Articulo articuloPedido);
    void setDireccionEntrega(Direccion direccionEntrega);

    //Getters
    Fecha getFechaPedido();
    Fecha getFechaEntrega();
    Articulo getArticuloPedido();
    Direccion getDireccionEntrega();

    //Metodos
    void informacionPedido(); 
    void pagarPedido();

};

//Metodos
//Constructores
Pedido::Pedido(){
  Fecha fechaPedido, fechaEntrega=fechaPedido.fechaEntrega();
  Articulo articuloPedido;
  Direccion direccionEntrega;
}

Pedido::Pedido(Fecha fechaPedido, Fecha fechaEntrega, Articulo articuloPedido, Direccion direccionEntrega){
  this->fechaPedido=fechaPedido;
  this->fechaEntrega=fechaEntrega;
  this->articuloPedido=articuloPedido;
  this->direccionEntrega=direccionEntrega;
}

Pedido::~Pedido(){
}

//Setters
void Pedido::setFechaPedido(Fecha fechaPedido){
  this->fechaPedido=fechaPedido;
}

void Pedido::setFechaEntrega(Fecha fechaEntrega){
  this->fechaEntrega=fechaEntrega;
}

void Pedido::setArticuloPedido(Articulo articuloPedido){
  this->articuloPedido=articuloPedido;
}

void Pedido::setDireccionEntrega(Direccion direccionEntrega){
  this->direccionEntrega=direccionEntrega;
}


//Getters
Fecha Pedido::getFechaPedido(){
  return fechaPedido;
}

Fecha Pedido::getFechaEntrega(){
  return fechaEntrega;
}

Articulo Pedido::getArticuloPedido(){
  return articuloPedido;
}

Direccion Pedido::getDireccionEntrega(){
  return direccionEntrega;
}

//Metodos

void Pedido::informacionPedido(){
  cout<<"Fecha pedido: ";
  fechaPedido.mostrarFecha();
  cout<<"Fecha entrega: ";
  fechaEntrega.mostrarFecha();
  cout<<"Articulo: ";
  articuloPedido.mostrarArticulo();
  cout<<"Direccion de Entrega: ";
  direccionEntrega.mostrarDireccion();
} 

void Pedido::pagarPedido(){
  
}


#endif // Pedido_h