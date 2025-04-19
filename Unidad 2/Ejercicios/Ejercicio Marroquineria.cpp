/*
21
Una marroquinería dispone de 45 carteras blancas, 50 carteras negras, 40 marrones y 49 grises.
Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:

Cantidad de carteras
Tipo de cartera (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
Cantidad total de carteras vendidas en total.
Cuántas carteras quedaron de cada tipo.
Los colores de carteras que no se vendieron.
NOTA: Ninguna venta superará las 10 carteras.




*/#include <iostream>


using namespace std ;



int main() {

    int cBlancas=45, cNegras=50, cGrises=49, cMarrones=40, tipo1, tipo2, tipo3, tipo4, total=0,
    blancasVendidas=0, negrasVendidas=0, grisesVendidas=0, marronesVendidas=0 ;
    bool noN=false, noB=false, noM=false, noG=false  ;

    cout << "Ingrese la cantidad de carteras blancas vendidas (tipo 1)" << endl ;
    cin >> tipo1 ;


    cout << "Ingrese la cantidad de carteras negras vendidas (tipo 2)" << endl ;
    cin >> tipo2 ;

    cout << "Ingrese la cantidad de carteras grises vendidas (tipo 3)" << endl ;
    cin >> tipo3 ;

    cout << "Ingrese la cantidad de carteras marrones vendidas (tipo 4)" << endl ;
    cin >> tipo4 ;

    if(tipo1 > 0) {
        cBlancas = cBlancas - tipo1 ;
        blancasVendidas++ ;

        cout << endl ;
        cout << "BLANCAS" << endl ;
        cout << "La cantidad de carteras blancas vendidas (tipo 1) es de: " << tipo1 << endl ;
        cout << "Carteras blancas restantes en stock: " << cBlancas << endl ;
    } else {
        noB = true ;
        cout << endl ;
        cout << "BLANCAS" << endl ;
        cout << "Tipo de cartera no vendida" << endl ;
        }

    if(tipo2 > 0) {
        cNegras = cNegras - tipo2 ;
        negrasVendidas++ ;

        cout << endl ;
        cout << "NEGRAS" << endl ;
        cout << "La cantidad de carteras negras vendidas (tipo 2) es de: " << tipo2 << endl ;
        cout << "Carteras negras restantes en stock: " << cNegras << endl ;
    } else {
        noN = true;
        cout << endl ;
        cout << "NEGRAS" << endl ;
        cout << "Tipo de cartera no vendida" << endl ;
        }


    if(tipo3 > 0) {
        cMarrones = cMarrones - tipo3 ;
        marronesVendidas++ ;

        cout << endl ;
        cout << "MARRONES" << endl ;
        cout << "La cantidad de carteras marrones vendidas (tipo 3) es de: " << tipo3 << endl ;
        cout << "Carteras marrones restantes en stock: " << cMarrones << endl ;
    } else {
        noM = true ;
        cout << endl ;
        cout << "MARRONES" << endl ;
        cout << "Tipo de cartera no vendida" << endl ;
        }


    if(tipo4 > 0) {
        cGrises = cGrises - tipo4 ;
        grisesVendidas++ ;

        cout << endl ;
        cout << "GRISES" << endl ;
        cout << "La cantidad de carteras grises vendidas (tipo 4) es de: " << tipo4 << endl ;
        cout << "Carteras negras restantes en stock: " << cGrises << endl ;

    } else {
        noG = true ;
        cout << endl ;
        cout << "Gris" << endl ;
        cout << "Tipo de cartera no vendida" << endl ;

        }

        cout << endl ;
        cout << "Colores no vendidos: " << endl ;


        if(noB){cout << "Blanco" << endl ;}

        if(noN){cout << "Negro" << endl ;}

        if(noM){cout << "Marron" << endl ;}

        if(noG){cout << "Gris" << endl ;}




        total = tipo1 + tipo2 + tipo3 + tipo4 ;

        cout << endl ;
        cout << "Total de carteras vendidas: " << total << endl ;






	return 0 ;
 }
