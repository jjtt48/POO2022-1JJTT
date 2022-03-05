#ifndef MASCOTA_H
#define MASCOTA_H
#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Mascota{
private:
    string raza;
    string tipo;
    float peso;
    int edad;
    string tipoSangre;
    string nombre;
    double id;
    bool status;
    string fechaD;

public:
    Mascota();
    Mascota(string raza, string tipo, float peso, int edad, string tipoSangre, string nombre, double id, bool status, string fechaD);
    
};

#endif