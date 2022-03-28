#include <iostream>
#include <cmath>
#include "Circulo.h"

using std::pow;
using std::cout;
Circulo::Circulo(){

}
Circulo::Circulo(float radio){
    this->radio = radio;
}
float Circulo::calcularArea(float radio){

    float respuesta = 0;
    respuesta += M_PI * pow(radio,2);
    this->area = respuesta;
}
float Circulo::calcularPerimetro(float radio){

    float respuesta = 0;
    respuesta += (M_PI*radio*2);
    this->perimetro = respuesta;
}
void Circulo::mostrarFigura(){
    cout<<"      ******      "<<"\n";
    cout<<"   ************   "<<"\n";
    cout<<" **************** "<<"\n";
    cout<<" **************** "<<"\n";
    cout<<"   ************   "<<"\n";
    cout<<"      ******      "<<"\n";
}

