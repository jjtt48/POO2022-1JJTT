#include <iostream>
#include "Sistema.h"

using std::cin;
using std::cout;
using std::string;

void menu(Sistema sistema)
{
    int opc = 0;
    do
    {
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

        switch (opc)
        {
        case 1:
            cout <<"entre :)";
            sistema.relacionMscPrp();
            break;
        case 2:
            sistema.modPropietario();
            break;
        case 3:
            sistema.erasePropietario();
            break;
        case 4:
            sistema.mostrarDatosPropietario();
            break;
        case 5:
            sistema.mostrarDatosMascota();
            break;
        case 6:
            sistema.mascotaDePropietarios();
            break;
        case 7:
            sistema.propietarioDeMascotas();
            break;
        case 8:
            sistema.asociarNewP();
            break;
        case 9:
            sistema.asociarNewM();
            break;
        case 10:
            sistema.cambioStatusM();
            break;
        case 11:
            sistema.erasePropietario();
            break;         
        default:
            break;
        }
    } while (opc != 0);
}

int main()
{
    
    Sistema sistema;
    menu(sistema);

    
    return 0;
}