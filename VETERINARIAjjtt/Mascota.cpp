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

string Mascota::getRaza(){
    return this -> raza;
}

string Mascota::getTipo(){
    return this -> tipo;
}

float Mascota::getPeso(){
    return this -> peso;
}

int Mascota::getEdad(){
    return this -> edad;
}

string Mascota::getTipoSangre(){
    return this -> tipoSangre;
}


string Mascota::getNombre(){
    return this -> nombre;
}

double Mascota::getId(){
    return this -> id;
}

bool Mascota::getStatus(){
    return this -> status;
}

string Mascota::getFechaD(){
    return this -> fechaD;
}