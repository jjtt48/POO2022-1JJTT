#include "Propietario.h"
#include <iostream>

Propietario::Propietario(string nombre, double id, string email, double telefono){
    this-> nombre = nombre;
    this-> id = id;
    this-> email = email;
    this-> telefono = telefono;
    
}

string Propietario::getNombre(){
    return this-> nombre;
}

double Propietario::getId(){
    return this-> id;
}

string Propietario::getEmail(){
    return this-> email;
}

double Propietario::getTelefono(){
    return this-> telefono;
}

string Propietario::modNombre(string nombre){
    this->nombre = nombre;
}
double Propietario::modId(double id){
    this->id = id;
}
string Propietario::modEmail(string email){
    this->email = email;
}
double Propietario::modTelefono(double telefono){
    this->telefono = telefono;
}
