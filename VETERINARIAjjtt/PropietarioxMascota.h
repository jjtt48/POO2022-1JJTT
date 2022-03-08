#ifndef PROPIETARIOXMASCOTA_H
#define PROPIETARIOXMASCOTA_H

#include "Mascota.h"
#include "Propietario.h"

class PropietarioxMascota{
private:
    Mascota mascota;
    Propietario propietario;
    

public:
    PropietarioxMascota();
    PropietarioxMascota(Propietario propietario, Mascota mascota);
    Mascota getMascota();
    Propietario getPropietario();
};


#endif