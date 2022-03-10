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
    string status;
    string fechaD;

public:
    Mascota();
    Mascota(string raza, string tipo, float peso, int edad, string tipoSangre, string nombre, double id, string status, string fechaD);
    string getRaza();
    string getTipo();
    float getPeso();
    int getEdad();
    string getTipoSangre();
    string getNombre();
    double getId();
    string getStatus();
    string getFechaD();
    void mostrarDatos();
    void modStatus(string status);
    void setFechaD(string fechaD);
    
};

#endif