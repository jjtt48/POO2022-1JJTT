

#ifndef FIGURAS_RECTANGULO_H
#define FIGURAS_RECTANGULO_H

#include "Figura.h"

class Rectangulo: public Figura{
    private:
        float sizeLadoLargo;
        float sizeLadoCorto;

    public:
        Rectangulo();
        Rectangulo(float sizeLadoLargo,float sizeLadoCorto);
        float calcularArea(float LadoLargo, float LadoCorto);
        float calcularPerimetro(float LadoLargo, float LadoCorto);
        void mostrarFigura();

};
#endif //FIGURAS_RECTANGULO_H
