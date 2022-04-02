#include "Propietario.h"
#include <iostream>
Propietario::Propietario(){

}
Propietario::Propietario(string nombre, double id, string email, double telefono, int edad){
    this-> nombre = nombre;
    this-> id = id;
    this-> email = email;
    this-> telefono = telefono;
    this-> edad = edad;
    
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

void Propietario::modNombre(string nombre){
    this->nombre = nombre;
}
void Propietario::modId(double id){
    this->id = id;
}
void Propietario::modEmail(string email){
    this->email = email;
}
void Propietario::modTelefono(double telefono){
    this->telefono = telefono;
}
void Propietario::modEdad(int edad){
    this->edad= edad;
}
void Propietario::mostrarDatos(){
    cout << "El nombre es: " << nombre << "\n";
    cout << "El id es: " << id << "\n";
    cout << "El email es: " << email << "\n";
    cout << "El telefono es: " << telefono << "\n";
    cout << "la edad es : " << edad << "\n";
    cout << "\n";
}