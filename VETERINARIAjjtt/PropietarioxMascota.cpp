#include "PropietarioxMascota.h"



PropietarioxMascota::PropietarioxMascota(Propietario propietario, Mascota mascota){

    this->propietario = propietario;
    this->mascota = mascota;
    
}

Mascota PropietarioxMascota::getMascota()
{
    return this->mascota;
}

Propietario PropiedadxPropietario::getPropietario()
{
    return this->propietario;
}