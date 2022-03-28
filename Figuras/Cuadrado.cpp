#include <iostream>
#include "Cuadrado.h"
#include <cmath>

using std::cout;
using std::pow;
Cuadrado::Cuadrado(){

}
Cuadrado::Cuadrado(float sizeLado){
    this->sizeLado = sizeLado;
}
float Cuadrado::calcularArea(float sizeLado){

    float respuesta = 0;
    respuesta += pow(sizeLado,2);
    this->area = respuesta;
}
float Cuadrado::calcularPerimetro(float sizeLado){

    float respuesta = 0;
    respuesta += (sizeLado*4);
    this->perimetro = respuesta;
}
void Cuadrado::mostrarFigura(){
    cout<<"******"<<"\n";
    cout<<"*    *"<<"\n";
    cout<<"*    *"<<"\n";
    cout<<"*    *"<<"\n";
    cout<<"*    *"<<"\n";
    cout<<"******"<<"\n";

}
