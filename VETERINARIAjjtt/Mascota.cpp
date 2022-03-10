#include "Mascota.h"
#include <iostream>
Mascota::Mascota(){

}
Mascota::Mascota(string raza, string tipo, float peso, int edad, string tipoSangre, string nombre, double id, string status, string fechaD){
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

string Mascota::getStatus(){
    return this -> status;
}

string Mascota::getFechaD(){
    return this -> fechaD;
}

void Mascota::mostrarDatos(){
    cout << "su mascota es un: " << tipo << "\n";
    cout << "la raza es: " << raza << "\n";
    cout << "el peso es: " << peso << "\n";
    cout << "la edad es: " << edad << "\n";
    cout << "el tipo de sangre es: " << tipoSangre << "\n";
    cout << "el nombre es: " << nombre << "\n";
    cout << "el id es: " << id << "\n";
    cout << "el status es: " << status << "\n";
    if (status == "M"){
        cout <<"la fecha de defuncion es :" << fechaD;
    }
    cout << "\n";
}

void Mascota::modStatus(string status){
    this->status = status;
}

void Mascota::setFechaD(string fechaD){
    this->fechaD = fechaD;
}