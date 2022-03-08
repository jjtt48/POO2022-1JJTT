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
    double buscarID;
    vector<Propietario> Dueños;
    vector<Mascota> mascotas;
    vector<PropietarioxMascota> propietariosxMascotas;
    

public:
    Sistema();
    void entradaDatosPropietario();
    void entradaDatosMascota();
    void modPropietario();
    void erasePropietario();
    void relacionMscPrp();
};
#endif
