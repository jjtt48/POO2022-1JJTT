#ifndef PROPIETARIOXMASCOTA_H
#define PROPIETARIOXMASCOTA_H

#include "Mascota.h"
#include "Propietario.h"

class PropietarioxMascota{
private:
    Mascota mascota;
    Propietario propietario;
    

public:
    PropietarioxMascota(Propietario propietario, Mascota mascota);
};


#endif