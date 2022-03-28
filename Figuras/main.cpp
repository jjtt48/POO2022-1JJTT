#include <iostream>
#include "Figura.h"
using std::cin;
using std::cout;
void menu(Figura figura){
    int opc;

    do {
        cout << "Bienvenidos   \n";
        cout << "1. ingresar datos \n"; //Done
        cout << "2. modificar propietario \n"; //Done
        cout << "3. eliminar propietario \n"; //Done
        cout << "4. listar y total propietarios\n"; //Done

        cout << "5. informacion mascotas\n"; //Done
        cout << "6. Propietarios vinculados a mascota\n"; //Done
        cout << "7. Mascotas vinculados a propietario\n"; //Done
        cout << "8. asociar nuevo propietario \n";
        cout << "9. asociar nueva mascota \n";
        cout << "10. cambiar status mascota\n"; //Done
        cout << "11. eliminar propietario de mascota\n"; //Done
        cout << "0. Salir \n";

        cin >> opc;

    switch (opc) {

    }

    }while(opc !=0);

}

int main(){
    Figura figura;
    menu(figura);
    return 0;
}