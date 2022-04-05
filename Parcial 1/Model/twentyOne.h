//
// Created by User on 5/04/2022.
//

#ifndef CASINO_POLIMORFISMO_TWENTYONE_H
#define CASINO_POLIMORFISMO_TWENTYONE_H
#include "Juego.h"
#include<cstdlib>
#include<ctime>

class TwentyOne : public Juego {
private:
    int acumulado;
protected:
    float calcularResultado(float gonzosApostar) override;

public:
    ~TwentyOne() override = default; // Los destructores deben ser sobreescritos y deben ser virtual en la clase papa. Si no tiene nada especial se puede marcar como default
    float jugar(float gonzosApostar) override;
    void mostrarReglas() override; //Declaracion del metodo mostrarReglas heredado en la clase hija
};
#endif //CASINO_POLIMORFISMO_TWENTYONE_H
