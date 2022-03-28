#include <iostream>
#include "Figura.h"
using std::cin;
using std::cout;
Figura::Figura(){

}

void agreagarFigura(){
    int x;
    cout<< "ingrse 1 para circulo";
    cout<< "ingrse 2 para cuadrado";
    cout<< "ingrse 3 para rectangulo";

    if(x == 1) {
        float y;
        cout << "ingrese el radio"<<"\n";
        cin >> y;
        figuras.push_back(new Circulo(y));
    }
    else if(x == 2){
        float y;
        cout<< "ingrese el lado"<<"\n";
        cin>> y;
        figuras.push_back(new Cuadrado(y));
    }
    else if(x==3){
        float y, z;
        cout<< "ingrese base"<<"\n";
        cin >> y;
        cout<<"ingrese altura"<<"\n";
        cin >> z;
        figuras.push_back(new Rectangulo(y,z));

    }
}

void hallarArea(){

}