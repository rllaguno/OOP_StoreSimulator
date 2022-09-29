/*
Nombre Clase
Descripcion:
Created by Alexis Gabriel Chapa Romero XX/XX/XXXX
*/
#ifndef Articulo_h
#define Articulo_h
#include <iostream>

class Articulo{
  private:
    //Definicion de atributos
    std::string marca, modelo;
    int anio; 
    double precio;
  public:
    //Definicion de methodos
    //Constructores
    Articulo();
    Articulo(std::string marca, std::string modelo, int anio, double precio);
    ~Articulo();
    
    //Setters
    void setMarca(std::string marca);
    void setModelo(std::string modelo);
    void setAnio(int anio);
    void setPrecio(double precio);

    //Getters
    std::string getMarca();
    std::string getModelo();
    int getAnio();
    double getPrecio();

    //Methodos
    void mostrarArticulo();
};

//Metodos
//Constructores
Articulo::Articulo(){
  marca=" ";
  modelo=" ";
  anio=2021;
  precio=0;
}

Articulo::Articulo(std::string marca, std::string modelo, int anio, double precio){
  this->marca=marca;
  this->modelo=modelo;
  this->anio=anio;
  this->precio=precio;
}

Articulo::~Articulo(){
}

//Setters
void Articulo::setMarca(std::string marca){
  this->marca=marca;
}

void Articulo::setModelo(std::string modelo){
  this->modelo=modelo;
}

void Articulo::setAnio(int anio){
  this->anio=anio;
}

void Articulo::setPrecio(double precio){
  this->precio=precio;
}

//Getters
std::string Articulo::getMarca(){
  return marca;
}

std::string Articulo::getModelo(){
  return modelo;
}

int Articulo::getAnio(){
  return anio;
}

double Articulo::getPrecio(){
  return precio;
}

//Metodos
void Articulo::mostrarArticulo(){
  std::cout<<"Vehiculo\nMarca: "<<marca<<"\nModelo: "<<modelo<<" "<<anio<<"\nPrecio: "<<precio<<std::endl;
}

#endif // Articulo_h//