

#ifndef FIGURAS_CUADRADO_H
#define FIGURAS_CUADRADO_H

#include "Figura.h"

class Cuadrado: public Figura{
        private:
        float sizeLado;

        public:
        Cuadrado();
        Cuadrado(float sizeLado);
        float calcularArea(float sizeLado);
        float calcularPerimetro(float sizeLado);
        void mostrarFigura();

};
#endif //FIGURAS_CUADRADO_H
