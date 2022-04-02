#include <iostream>
#include "Sistema.h"

using std::cout;
using std::cin;
using std::string;

Sistema::Sistema(){

}

int Sistema::entradaDatosPropietario(){
    string nombre;
    double id;
    string email;
    double telefono;
    int edad;
    cout <<"Ingrese su nombre: \n" ;
    cin >> nombre;
    cout <<"Ingrese su id: \n" ;
    cin >> id;
    cout <<"Ingrese su email: \n" ;
    cin >> email;
    cout <<"Ingrese su telefono: \n" ;
    cin >> telefono;
    cout <<"Ingrese su edad: \n";
    cin >> edad;
    if(edad > 18){
        
        Propietario propDefault(nombre, id, email, telefono, edad);
        Duenos.push_back(propDefault);
        return 0;
    }
    cout<<"debe ser mayor de edad para hacer su registro \n";
    return 0;
}

int Sistema::entradaDatosMascota(){
    string raza;
    string tipo;
    float peso;
    int edad;
    string tipoSangre;
    string nombre;
    double id;
    string status = "V";
    string fechaD;
    
    cout <<"Ingrese tipo de mascota: \n" ;
    cin >> tipo;
    if(tipo != "perro"){
        cout<<"solo se atienden perros \n";
        return 0;
    }
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
    
    
    
    Mascota MascotaDefault(raza, tipo, peso, edad, tipoSangre, nombre, id, status, fechaD);
    mascotas.push_back(MascotaDefault);
    return 0;
}


void Sistema::modPropietario(){
    cout <<"Ingrse el id del propietario a modificar: \n";
    cin >> buscarID;
    for (int i = 0; i < Duenos.size(); i++){
        if(Duenos[i].getId() == buscarID){
            
            string nombre;
            double id;
            string email;
            double telefono;
            int edad;   
            cout <<"Ingrese su nombre: \n" ;
            cin >> nombre;
            Duenos[i].modNombre(nombre);
            propietariosxMascotas[i].getPropietario().modNombre(nombre);//0
            cout <<"Ingrese su id: \n" ;
            cin >> id;
            Duenos[i].modId(id);
            propietariosxMascotas[i].getPropietario().modId(id);//0
            cout <<"Ingrese su email: \n" ;
            cin >> email;
            Duenos[i].modEmail(email);
            propietariosxMascotas[i].getPropietario().modEmail(email); //0
            cout <<"Ingrese su telefono: \n" ;
            cin >> telefono;
            Duenos[i].modTelefono(telefono);
            propietariosxMascotas[i].getPropietario().modTelefono(telefono); //0
            cout <<"Ingrese su edad: \n" ;
            cin >> edad;
            Duenos[i].modEdad(edad);
            propietariosxMascotas[i].getPropietario().modEdad(edad);
        }
    }
}


void Sistema::erasePropietario(){
    cout <<"Ingrse el id del propietario a modificar: \n";
    cin >> buscarID;
    for (int i = 0; i < Duenos.size(); i++){
        if(Duenos[i].getId() == buscarID){
            Duenos.erase(Duenos.begin()+i);
        }
    }
    for (int i = 0; i < propietariosxMascotas.size(); i++){
        if(propietariosxMascotas[i].getPropietario().getId() == buscarID){
            propietariosxMascotas.erase(propietariosxMascotas.begin()+i);
        }
    }
}

void Sistema::relacionMscPrp(){ 
    
    entradaDatosPropietario();
    entradaDatosMascota();
    
    PropietarioxMascota entryDefault(Duenos[Duenos.size()-1], mascotas[mascotas.size()-1]); 
    propietariosxMascotas.push_back(entryDefault);   
    
}

void Sistema::mostrarDatosPropietario(){
    int contPropietarios = 0;
    for (int i = 0; i < Duenos.size(); i++){
      Duenos[i].mostrarDatos();
      contPropietarios++;  
    }
    cout <<"El numero total de propietarios es: " << contPropietarios <<"\n" ;
}

void Sistema::mostrarDatosMascota(){
    int contMascota = 0;
    for (int i = 0; i < mascotas.size(); i++){
      cout << contMascota + 1 <<") \n";
      mascotas[i].mostrarDatos();
      contMascota++;  
    }
    cout <<"El numero total de propietarios es: " << contMascota;
}

void Sistema::propietarioDeMascotas(){
    cout <<"Ingrse el id del propietario a consultar: \n";
    cin >> buscarID;
    for (int i = 0; i < propietariosxMascotas.size(); i++){
        if(propietariosxMascotas[i].getPropietario().getId() == buscarID){
            propietariosxMascotas[i].getMascota().mostrarDatos();
        }
    }
}            

void Sistema::mascotaDePropietarios(){
    cout <<"Ingrse el id de la mascota a consultar: \n";
    cin >> buscarID;
    cout << propietariosxMascotas.size();
    for (int i = 0; i < propietariosxMascotas.size(); i++){
        if(propietariosxMascotas[i].getMascota().getId() == buscarID){
            propietariosxMascotas[i].getPropietario().mostrarDatos();
        }
    }
}

void Sistema::cambioStatusM(){
    cout <<"Ingrse el id de la mascota a consultar: \n";
    cin >> buscarID;
    string fechaD;
    cout <<"ingrse fecha de defuncion: \n";
    cin >> fechaD;
    for (int i = 0; i < propietariosxMascotas.size(); i++){
        if(propietariosxMascotas[i].getMascota().getId() == buscarID){
            string change = "M";
            propietariosxMascotas[i].getMascota().modStatus(change);
            
            propietariosxMascotas[i].getMascota().setFechaD(fechaD);

        }    
    }
    for (int i = 0; i < mascotas.size(); i++){
        if(mascotas[i].getId() == buscarID){
            string change = "M";
            mascotas[i].modStatus(change);
            mascotas[i].setFechaD(fechaD);
        }    
    }
}

double Sistema::entradaDatosMascotaVersionNueva(){
    string raza;
    string tipo;
    float peso;
    int edad;
    string tipoSangre;
    string nombre;
    double id;
    string status = "V";
    string fechaD;
    
    cout <<"Ingrese tipo de mascota: \n" ;
    cin >> tipo;
    if(tipo != "perro"){
        cout<<"solo se atienden perros \n";
        return 0;
    }
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
    
    
    Mascota MascotaDefault(raza, tipo, peso, edad, tipoSangre, nombre, id, status, fechaD);
    mascotas.push_back(MascotaDefault);
    return id;
}

void Sistema::asociarNewM(){
    double memoryID = 0;
    cout <<"ingrese el id del propietario al que se va a asociar la nueva mascota: \n";
    cin >> buscarID;
    for (int i = 0; i < Duenos.size(); i++){
        if(Duenos[i].getId() == buscarID){
            memoryID += entradaDatosMascotaVersionNueva();
            for (int v = 0; v < mascotas.size(); v++){
                if(mascotas[v].getId() == memoryID){
                    PropietarioxMascota entryDefault(Duenos[i], mascotas[v]); //0
                    propietariosxMascotas.push_back(entryDefault); 
                }
            }
            
        }    
    }
}

double Sistema::entradaDatosPropietarioVersionNueva(){
    string nombre;
    double id;
    string email;
    double telefono;
    int edad;
    
    cout <<"Ingrese su nombre: \n" ;
    cin >> nombre;
    cout <<"Ingrese su id: \n" ;
    cin >> id;
    cout <<"Ingrese su email: \n" ;
    cin >> email;
    cout <<"Ingrese su telefono: \n" ;
    cin >> telefono;
    cout <<"ingrese su edad: \n";
    cin >> edad;
    if(edad > 18){
        Propietario propDefault(nombre, id, email, telefono, edad);
        Duenos.push_back(propDefault);
        return id;
    }
    cout << "Debe ser mayor de edad para hacer el registro";
    return 0;
}

void Sistema::asociarNewP(){
    double memoryID = 0;
    cout <<"ingrese el id de la mascota a la que se le va a asociar el nuevo propietario: \n";
    cin >> buscarID;
    for (int i = 0; i < mascotas.size(); i++){
        if(mascotas[i].getId() == buscarID){
            memoryID += entradaDatosPropietarioVersionNueva();
            for (int v = 0; v < Duenos.size(); v++){
                if(mascotas[v].getId() == memoryID){
                    PropietarioxMascota entryDefault(Duenos[v], mascotas[i]); //0
                    propietariosxMascotas.push_back(entryDefault); 
                }
            }
            
        }    
    }
}