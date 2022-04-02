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
    vector<Propietario> Duenos;
    vector<Mascota> mascotas;
    vector<PropietarioxMascota> propietariosxMascotas;
    

public:
    Sistema();
    int entradaDatosPropietario();
    int entradaDatosMascota();
    void modPropietario();
    void erasePropietario();
    void relacionMscPrp();
    void mostrarDatosPropietario();
    void mostrarDatosMascota();
    void propietarioDeMascotas();
    void mascotaDePropietarios();
    void cambioStatusM();
    double entradaDatosMascotaVersionNueva();
    double entradaDatosPropietarioVersionNueva();
    void asociarNewM();
    void asociarNewP();
};
#endif
