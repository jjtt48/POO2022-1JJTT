#include "TwentyOne.h"
float TwentyOne::jugar(float gonzosApostar) {
    int opcion;
    float gonzosResultado;
    srand(time(nullptr));
    int numMaxRandom = 11;
    int numMinRandom = 1;
    acumulado = numMinRandom + rand() % numMaxRandom;
    for (acumulado; acumulado < 22; acumulado += numMinRandom + rand() % numMaxRandom) {
        cout << "Tu numero hasta ahora es: " << acumulado << endl;
        if(acumulado == 21) {
            gonzosResultado = calcularResultado(gonzosApostar);
            return gonzosResultado;
        }
        cout << "Que desea hacer?" << endl;
        cout << "1. Parar." << endl;
        cout << "2. Seguir." << endl;
        cout << "Opcion: ";
        cin >> opcion;
        if(opcion == 1 ) {
            gonzosResultado = calcularResultado(gonzosApostar);
            return gonzosResultado;
        }
    }
    gonzosResultado = calcularResultado(gonzosApostar);
    return gonzosResultado;
}
float TwentyOne::calcularResultado(float gonzosApostar) {
    float maxResult = 2.5;
    float midResult = 1.2;
    float lowestResult = 0;

    if (acumulado == 21) {
        return maxResult * gonzosApostar;
    }
    else if (acumulado < 21) {
        return midResult * gonzosApostar;
    }
    else if (acumulado > 21) {
        return lowestResult * gonzosApostar;
    }
}

void  TwentyOne::mostrarReglas() { //implementacion del metodo heredado mostrarReglas
    cout<< "se le sumaran numeros aleatorios entre 1 a 11 hasta que el acumulado sea 21 y tendra la opcion de parar o seguir sumando, si el acumulado se pasa de 21 usted perdera la cantidad que aposto"<<
    "\nsi el acumulado en algun momento da exactamente 21 usted automaticamente recibira 2.5 veces lo que aposto "<<
    "\n si usted decide parar se le dara 1.2 veces lo que aposto";
}