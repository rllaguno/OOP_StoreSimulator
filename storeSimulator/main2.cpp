#include <iostream>
#include <map>


#include "Cliente.h"


void altaArticulo(){
  string marca, modelo;
  int anio, cantCarros; 
  double precio;
  bool cd;

  cout << "¿Cuantos carros desea comprar?\n"<< endl;
  cin >> cantCarros;
  Articulo carros[cantCarros];

  for (int i = 0; i < cantCarros; i++){
    cd = true;
    cout<<"Introduzca la marca del vehiculo " << i+1  << ":" <<endl;
    cin>>marca;
    cout<<"Introduzca el modelo del vehiculo " << i+1  << ":" <<endl;
    cin>>modelo;
    cout<<"Introduzca el anio del vehiculo " << i+1  << ":" <<endl;
    cin>>anio;
    cout<<"Introduzca el precio del vehiculo " << i+1  << ":" <<endl;
    cin>>precio;

    carros[i].setMarca(marca);
    carros[i].setModelo(modelo);
    carros[i].setPrecio(precio);
    carros[i].setAnio(anio);
    
  }
  
}

void altaDireccion(Direccion &direccionIngresada){
  string pais, ciudad, municipio, calle, colonia;
  int numero, cp;
  cout << "Pais: " << endl;
  cin>>pais;
  cout << "Ciudad: " << endl;
  cin>>ciudad;
  cout << "Municipio: " << endl;
  cin>>municipio;
  cout << "Calle: "  << endl;
  cin>>calle;
  cout << "Colonia: " << endl;
  cin>>colonia;
  cout << "Numero: "  << endl;
  cin>>numero;
  cout << "Codigo Postal: " << endl;
  cin>>cp;

  direccionIngresada.setPais(pais);
  direccionIngresada.setCiudad(ciudad);
  direccionIngresada.setMunicipio(municipio);
  direccionIngresada.setCalle(calle);
  direccionIngresada.setColonia(colonia);
  direccionIngresada.setNumero(numero);
  direccionIngresada.setCp(cp);
}

void altaFecha(Fecha &fechaIngresada){
  int dia, mes, anio;
  cout<<"Introduzca el dia: "<<endl;
  cin>>dia;
  cout<<"Introduzca el mes: "<<endl;
  cin>>mes;
  cout<<"Introduzca el anio: "<<endl;
  cin>>anio;

  fechaIngresada.setAnio(anio);
  fechaIngresada.setMes(mes);
  fechaIngresada.setDia(dia);
}

void altaTarjeta(Tarjeta &tarjetaIngresada){
  Fecha fechaVencimiento;
  string nombreTarjeta;
  Direccion facturacion;
  int numeroTarjeta, cvv;

  cout << "Nombre de Tarjeta: " << nombreTarjeta << endl;
  cin>>nombreTarjeta;
  cout << "Numero de Tarjeta: " << numeroTarjeta << endl;
  cin>>numeroTarjeta;
  cout << "Fecha de Vencimiento: ";
  altaFecha(fechaVencimiento);
  cout << "CVV: " << cvv << endl;
  cin>>cvv;
  cout << "Facturacion: ";
  altaDireccion(facturacion);

  tarjetaIngresada.setFechaVencimiento(fechaVencimiento);
  tarjetaIngresada.setNombreTarjeta(nombreTarjeta);
  tarjetaIngresada.setFacturacion(facturacion);
  tarjetaIngresada.setNumeroTarjeta(numeroTarjeta);
  tarjetaIngresada.setCvv(cvv);
}

void altaPedido(Pedido &pedidoNuevo){
  int cant;
  Fecha fechaPedido, fechaEntrega;
  Articulo articuloPedido;
  Direccion direccionEnvio;

  cout<<"Ingrese la cantidad de articulos que tendra su pedido: ";
  cin>>cant;
  altaFecha(fechaPedido);
  fechaEntrega=fechaPedido.fechaEntrega();
  altaArticulo();
  pedidoNuevo.setArticuloPedido(articuloPedido);
  altaDireccion(direccionEnvio);

  pedidoNuevo.setFechaPedido(fechaPedido);
  pedidoNuevo.setFechaEntrega(fechaEntrega);
  pedidoNuevo.setDireccionEntrega(direccionEnvio);
}

void altaCliente(Cliente clienteNuevo){
  string nombre, costumerID, correo, telefono;
  Pedido pedidoCliente;
  Direccion direccionCliente;
  Tarjeta tarjetaCliente;
  int edad;

  cout<<"Introduzca el nombre del cliente: "<<endl;
  cin>>nombre;
  cout<<"Introduzca la edad del cliente: "<<endl;
  cin>>edad;
  cout<<"Introduzca el ID del cliente: "<<endl;
  cin>>costumerID;
  cout<<"Introduzca el correo del cliente: "<<endl;
  cin>>correo;
  cout<<"Introduzca el telefono del cliente: "<<endl;
  cin>>telefono;
  cout<<"Pedido del cliente: "<<endl;
  altaPedido(pedidoCliente);
  cout<<"Direccion del cliente: "<<endl;
  altaDireccion(direccionCliente);
  cout<<"Tarjeta del cliente: "<<endl;
  altaTarjeta(tarjetaCliente);

  clienteNuevo.setNombre(nombre);
  clienteNuevo.setCostumerId(costumerID);
  clienteNuevo.setCorreo(correo);
  clienteNuevo.setTelefono(telefono);
  clienteNuevo.setEdad(edad);
  clienteNuevo.setPedido(pedidoCliente);
  clienteNuevo.setDireccion(direccionCliente);
  clienteNuevo.setTarjeta(tarjetaCliente);
}

/*template<typename Map>
void printAll(Map& dicc){
  for (const auto& [marca, modelos] : dicc) {
    cout<<"Marca: "<<marca<<endl;
    for (const auto& [modelo, detalles] : modelos) {
      cout<<"  Modelo: "<<modelo<<endl;
      for (const auto& [detalle, valor] : detalles) {
        cout<<"    "<<detalle<<" "<<valor<<endl;
  }
  }
    cout<<endl;
  }
}*/

int main(){

  cout << "\n";
  cout << "Bienvenido a la tienda de carros" << endl;
  cout << "Nuestra variedad de carros actualmente consiste en: \n" << endl;

  map<string,map<string,map<string, double>>> vehiculos;

  vehiculos["Hyundai"]={{"I10 SD",{{"Precio",222800},{"Anio",2022},{"Diponibles",10}}},{"Accent HB",{{"Precio",274000},{"Anio",2022},{"Diponibles",8}}},{"Elantra",{{"Precio",366900},{"Anio",2022},{"Diponibles",4}}},};

  vehiculos["Nissan"]={{"Versa",{{"Precio",280900},{"Anio",2020},{"Diponibles",12}}},{"Altima",{{"Precio",668900},{"Anio",2021},{"Diponibles",3}}},{"March",{{"Precio",227900},{"Anio",2022},{"Diponibles",6}}},};

  vehiculos["KIA"]={{"Forte GT Line Sedan",{{"Precio",456900},{"Anio",2022},{"Diponibles",2}}},{"Stinger",{{"Precio",760900},{"Anio",2022},{"Diponibles",4}}},{"Sorento",{{"Precio",675900},{"Anio",2022},{"Diponibles",1}}},};

  vehiculos["Honda"]={{"HRV",{{"Precio",419900},{"Anio",2022},{"Diponibles",7}}},{"Civic",{{"Precio",500900},{"Anio",2022},{"Diponibles",3}}},{"City",{{"Precio",404900},{"Anio",2022},{"Diponibles",5}}},};

  //printAll(vehiculos);
  cout << "¿Que desea hacer?\n" << endl;


  int indiceArticulo=0,indicePedido=0,indiceCliente=0, opcion, cant;
  bool validar=false;

  Articulo articulo[20];
  Pedido pedido[10];
  Cliente cliente[20];
  /* Opciones que debe hacer el programa: 
    1. Alta Articulo [altaArtriculo()] **Lista
    2. Alta Cliente [altaCliente()] **
    3. Alta Pedido [altaPedido()] **
    4. Desplegar informacion de cierto pedido
    5. Desplegar articulos disponibles [mostrarArticulos()]
    6. Desplegar Lista de Pedidos
    7. {Extra..} Comprar [PEDIDO.pagarPedido()->comprobarCvv()]
    8. Salir **Lista
  */

  while (!validar){
    cout<<"Opciones Tienda\n    1. Alta Articulo\n    2. Alta Cliente\n    3. Alta Pedido\n    4. Desplegar informacion pedido\n    5. Desplegar articulos disponibles\n    6. Desplegar lista de Pedidos\n    7. Extra\n    8. Salir"<<endl;
    cin>>opcion;
    switch(opcion){
      case 1: 
        //FUNCION(OBJETO)
        altaArticulo();
        break;
      case 2: 
        //FUNCION(OBJETO)
        altaCliente(cliente[indiceCliente]);
        break;
      case 3: 
        //FUNCION(OBJETO)
        altaPedido(pedido[indicePedido]);
        break;
      case 4: 
        //FUNCION(OBJETO)
        break;
      case 5: 
        //FUNCION(OBJETO)
        break;
      case 6: 
        //FUNCION(OBJETO)
        break;
      case 7: 
        //FUNCION(OBJETO)
        break;
      case 8: 
        validar=true;
        cout<<"\nHasta Luego!"<<endl;
        break;
      default: 
        cout<<"La opcion ingresada no es valida, ingrese otra opcion.";
    }
  }
  
  
  return 0;
}