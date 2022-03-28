
#ifndef FIGURAS_CIRCULO_H
#define FIGURAS_CIRCULO_H


#include "Figura.h"

class Circulo : public Figura{
private:
    float radio;

public:
    Circulo();
    Circulo(float radio);
    float calcularArea(float radio);
    float calcularPerimetro(float radio);
    void mostrarFigura();

};
#endif //FIGURAS_CIRCULO_H
