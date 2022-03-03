#ifndef SISTEMA_H
#define SISTEMA_H

#include <iostream>
#include "Propietario.h"
#include "Mascota.h"
#include "PropietarioxMascota.h"
#include <vector>

using std::string;
using std::vector;

class Sistema{
private:
    vector<Propietario> propietarios;
    vector<Mascota> Mascotas;
    vector<PropietarioxMascota> PropietariosxMascotas;
    

public:
    Sistema();
    void Datos();
    
};
#endif
