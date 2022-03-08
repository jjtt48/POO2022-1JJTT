#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include<iostream>

using std::cin;
using std::cout;
using std::string;

class Propietario{
private:
    string nombre;
    double id;
    string email;
    double telefono;

public:
    Propietario();
    Propietario(string nombre, double id, string email, double telefono);
    string getNombre();
    double getId();
    string getEmail();
    double getTelefono();
    string modNombre(string nombre);
    double modId(double id);
    string modEmail(string email);
    double modTelefono(double telefono);
};
#endif