#include <iostream>
#include "Rectangulo.h"
#include <cmath>

using std::cout;
using std::pow;
Rectangulo::Rectangulo(){

}
Rectangulo::Rectangulo(float sizeLadoLargo,float sizeLadoCorto){
    this->sizeLadoLargo = sizeLadoLargo;
    this->sizeLadoCorto = sizeLadoCorto;
}
float Rectangulo::calcularArea(float LadoLargo, float LadoCorto){

    float respuesta = 0;
    respuesta += (sizeLadoLargo*sizeLadoCorto);
    this->area = respuesta;
}
float Rectangulo::calcularPerimetro(float LadoLargo, float LadoCorto){

    float respuesta = 0;
    respuesta += 2*(sizeLadoCorto + sizeLadoLargo);
    this->perimetro = respuesta;
}
void Rectangulo::mostrarFigura(){

}
