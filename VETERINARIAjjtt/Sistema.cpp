#include <iostream>
#include "Sistema.h"

using std::cout;
using std::cin;

void Sistema::entradaDatosPropietario(){
    string nombre;
    double id;
    string email;
    double telefono;
    
    cout <<"Ingrese su nombre: \n" ;
    cin >> nombre;
    cout <<"Ingrese su id: \n" ;
    cin >> id;
    cout <<"Ingrese su email: \n" ;
    cin >> email;
    cout <<"Ingrese su telefono: \n" ;
    cin >> telefono;

    Propietario propDefault(nombre, id, email, telefono);
    
    Dueños.push_back(propDefault);

}

void Sistema::entradaDatosMascota(){
    string raza;
    string tipo;
    float peso;
    int edad;
    string tipoSangre;
    string nombre;
    double id;
    bool status;
    string fechaD;
    
    cout <<"Ingrese tipo de mascota: \n" ;
    cin >> tipo;
    cout <<"Ingrese raza de su mascota: \n" ;
    cin >> raza;
    cout <<"Ingrese edad de su mascota: \n" ;
    cin >> edad;
    cout <<"Ingrese el peso de su mascota: \n" ;
    cin >> peso;
    cout <<"Ingrese el tipo de sangre de su mascota: \n" ;
    cin >> tipoSangre;
    cout <<"Ingrese el nombre de su mascota: \n" ;
    cin >> nombre;
    cout <<"Ingrese la identificacion de su mascota: \n" ;
    cin >> id;
    cout <<"Su mascota aun vive ? (true/false) \n" ;
    cin >> status;
    if (status == false){
        cout <<"ingrese la fecha de defuncion de su mascota";
        cin >> fechaD;
    }
    
    Mascota MascotaDefault(raza, tipo, peso, edad, tipoSangre, nombre, id, status, fechaD);
    mascotas.push_back(MascotaDefault);

}

void Sistema::modPropietario(){
    cout <<"Ingrse el id del propietario a modificar: \n";
    cin >> buscarID;
    for (int i = 0; i < Dueños.size(); i++){
        if(Dueños[i].getId() == buscarID){
            string nombre;
            double id;
            string email;
            double telefono;
    
            cout <<"Ingrese su nombre: \n" ;
            cin >> nombre;
            Dueños[i].modNombre(nombre);
            cout <<"Ingrese su id: \n" ;
            cin >> id;
            Dueños[i].modId(id);
            cout <<"Ingrese su email: \n" ;
            cin >> email;
            Dueños[i].modEmail(email);
            cout <<"Ingrese su telefono: \n" ;
            cin >> telefono;
            Dueños[i].modTelefono(telefono);        
        }
    }
    
}

void Sistema::erasePropietario(){
    cout <<"Ingrse el id del propietario a modificar: \n";
    cin >> buscarID;
    for (int i = 0; i < Dueños.size(); i++){
        if(Dueños[i].getId() == buscarID){
            Dueños.erase(Dueños.begin()+i);
        }
    }
    
}

void Sistema::relacionMscPrp(){
    int numM, numP;
    cout <<"Ingrse numero de propietarios: \n";
    cin >> numP;
    for(int i = 0; i < numP; i++){
        void entradaDatosPropietario();
    }
    cout <<"Ingrse numero de propietarios: \n";
    cin >> numM;
    for(int i = 0; i < numM; i++){
        void entradaDatosMascota();
    }
}