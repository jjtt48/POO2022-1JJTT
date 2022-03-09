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
    void modNombre(string nombre);
    void modId(double id);
    void modEmail(string email);
    void modTelefono(double telefono);
    void mostrarDatos();
};
#endif