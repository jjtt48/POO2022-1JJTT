

#ifndef FIGURAS_FIGURA_H
#define FIGURAS_FIGURA_H
#include <iostream>
#include <vector>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
using std::vector;
class Figura{
    private:
        vector<Figuras*> figuras;
    protected:
        float area;
        float perimetro;

    public:
        Figura();
        void agreagarFigura();
        virtual float calcularArea(float sizeLado);
        virtual float calcularPerimetro(float sizeLado);
        virtual void mostrarFigura();


};

#endif //FIGURAS_FIGURA_H
