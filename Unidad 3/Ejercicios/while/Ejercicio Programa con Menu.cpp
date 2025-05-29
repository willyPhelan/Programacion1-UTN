/*
Hacer un programa que contenga un menú con el siguiente formato:

Menú principal
-----------------------------
1 - Ingresar medida en metros
2 - Convertir a centímetros
3 - Convertir a kilómetros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa

Ingrese opción:

Al ingresar a la opción 1, nos pedirá una medida (float) en metros que con las siguientes opciones del menú podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo desee y sólo finalizará al ingresar a la opción 0.


*/

#include <iostream>


using namespace std ;



int main() {

    int opcion=-1 ;
    float metros ;
    bool metrosIngresados = false ;

    cout << "------------------- MENU -------------------------" << endl ;

    while(opcion != 0){


            cout << "--------------------------------------------------" << endl ;

            cout << "Ingrese la opcion [1] para ingresar los metros" << endl ;

            cout << "--------------------------------------------------" << endl ;

            cout << "Ingrese la opcion [2] para convertir a centimetros" << endl ;

            cout << "--------------------------------------------------" << endl ;

            cout << "Ingrese la opcion [3] para convertir a kilometros" << endl ;

            cout << "--------------------------------------------------" << endl ;

            cout << "Ingrese la opcion [4] para convertir a pulgadas" << endl ;

            cout << "--------------------------------------------------" << endl ;

            cout << "Ingrese la opcion [5] para convertir a pies" << endl ;

            cout << "--------------------------------------------------" << endl ;
            cout << "--------------------------------------------------" << endl ;

            cout << "Ingrese la opcion [0] para finalizar" << endl << endl ;

            cin >> opcion ;

            cout << "--------------------------------------------------" << endl ;


             switch (opcion) {

            case 1:
                cout << "Ingrese la medida en metros: " ;
                cin >> metros ;
                metrosIngresados = true ;
                break ;

            case 2:
                if (metrosIngresados)
                    cout << metros << " metros son " << metros * 100 << " centimetros." << endl ;
                else
                    cout << "Primero debe ingresar una medida en metros (opcion 1)." << endl ;
                break ;

            case 3:
                if (metrosIngresados)
                    cout << metros << " metros son " << metros / 1000 << " kilometros." << endl ;
                else
                    cout << "Primero debe ingresar una medida en metros (opcion 1)." << endl ;
                break ;

            case 4:
                if (metrosIngresados)
                    cout << metros << " metros son " << metros * 39.3701 << " pulgadas." << endl ;
                else
                    cout << "Primero debe ingresar una medida en metros (opcion 1)." << endl ;
                break ;

            case 5:
                if (metrosIngresados)
                    cout << metros << " metros son " << metros * 3.28084 << " pies." << endl ;
                else
                    cout << "Primero debe ingresar una medida en metros (opcion 1)." << endl ;
                break ;

            case 0:
                cout << "Programa finalizado!" << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }


            cout << "--------------------------------------------------" << endl ;
            cout << "--------------------------------------------------" << endl ;





             }



	return 0 ;
 }
