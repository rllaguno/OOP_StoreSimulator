/*
Nombre Clase
Descripcion:
Created by Alexis Gabriel Chapa Romero XX/XX/XXXX
*/
#ifndef Direccion_h
#define Direccion_h
#include <iostream>
using namespace std;

class Direccion{
  private:
    //Definicion de atributos
    string pais, ciudad, municipio, calle, colonia;
    int numero, cp;
  
    public:
    //Definicion de methodos
    Direccion();
    Direccion(string pais, string ciudad, string municipio, string calle, string colonia, int numero, int cp);
    ~Direccion();

    void setPais(string pais);
    void setCiudad(string ciudad);
    void setMunicipio(string municipio);
    void setCalle(string calle);
    void setColonia(string colonia);
    void setNumero(int numero);
    void setCp(int cp);

    string getPais();
    string getCiudad();
    string getMunicipio();
    string getCalle();
    string getColonia();
    int getNumero();
    int getCp();

    void mostrarDireccion();
};

//Metodos
//Constructores
Direccion::Direccion(){
  pais = "";
  ciudad = "";
  municipio = "";
  calle = "";
  colonia = "";
  numero = 0;
  cp = 0;
}
Direccion::Direccion(string pais, string ciudad, string municipio, string calle, string colonia, int numero, int cp){
  this->pais = pais;
  this->ciudad = ciudad;
  this->municipio = municipio;
  this->calle = calle;
  this->colonia = colonia;
  this->numero = numero;
  this->cp = cp;
}
Direccion::~Direccion(){

}

//Getters
string Direccion::getCiudad(){
  return ciudad;
}
string Direccion::getPais(){
  return pais;
}
string Direccion::getMunicipio(){
  return municipio;
}
string Direccion::getCalle(){
  return calle;
}
string Direccion::getColonia(){
  return colonia;
}
int Direccion::getNumero(){
  return numero;
}
int Direccion::getCp(){
  return cp;
}

//Setters
void Direccion::setPais(string pais){
  this->pais = pais;
}
void Direccion::setCiudad(string ciudad){
  this->ciudad = ciudad;
}
void Direccion::setMunicipio(string municipio){
  this->municipio = municipio;
}
void Direccion::setCalle(string calle){
  this->calle = calle;
}
void Direccion::setColonia(string colonia){
  this->colonia = colonia;
}
void Direccion::setNumero(int numero){
  this->numero = numero;
}
void Direccion::setCp(int cp){
  this->cp = cp;
}

//Otros Metodos
void Direccion::mostrarDireccion(){
  cout << "Pais: " << pais << endl;
  cout << "Ciudad: " << ciudad << endl;
  cout << "Municipio: " << municipio << endl;
  cout << "Calle: " << calle << endl;
  cout << "Colonia: " << colonia << endl;
  cout << "Numero: " << numero << endl;
  cout << "Codigo Postal: " << cp << endl;
}


#endif // Direccion_h