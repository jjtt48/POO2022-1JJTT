#include "Mascota.h"
#include <iostream>

Mascota::Mascota(string raza, string tipo, float peso, int edad, string tipoSangre, string nombre, double id, bool status, string fechaD){
    this-> raza = raza;
    this-> tipo = tipo;
    this-> peso = peso;
    this-> edad = edad;
    this-> tipoSangre = tipoSangre;
    this-> nombre = nombre;
    this-> id = id;
    this-> status = status;
    this-> fechaD = fechaD;
}