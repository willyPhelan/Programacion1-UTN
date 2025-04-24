/*
15	Hacer un programa para ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente. En caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo A: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado” Ejemplo B: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado” Ejemplo C: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”
Para resolver este ejercicio sugerimos resolver antes el TP2 EJ 17.


*/#include <iostream>


using namespace std ;



int main() {

    int primer_num, num, i ;
    bool ordenado= true ;

    cout << "Ingrese un numero" << endl ;
    cin >> primer_num ;

    for(i=1 ; i <= 7  ; i++){

    cout << "Ingrese otro numero" << endl ;
    cin >> num ;

    if(num < primer_num) {
        ordenado = false ; }

        primer_num = num ; // actualizo el valor del primer num para comparar el segundo con el tercero y asi consecutivamente
    }



    if(ordenado) {cout << endl << "Conjunto ordenado" << endl ;
    } else { cout << endl << "Conjunto no ordenado" << endl ; }


    // FORMA CON MULTIPLES IF

   /* int i, num, vuelta=0, num1, num2, num3, num4, num5, num6, num7, num8;

	for(i=1 ; i <= 8  ; i++){

    cout << "Ingrese un numero" << endl ;
    cin >> num ;

    vuelta++ ;

    if(vuelta == 1) {
        num1 = num ;
    }

     if(vuelta == 2) {
        num2= num ;
    }

     if(vuelta == 3) {
        num3 = num ;
    }

     if(vuelta == 4) {
        num4 = num ; }


     if(vuelta == 5) {
        num5 = num ;
    }

     if(vuelta == 6) {
        num6 = num ;
    }

     if(vuelta == 7) {
        num7 = num ;
    }

     if(vuelta == 8) {
        num8 = num ;
    } }

    if(num1 <= num2 && num2 <= num3 && num3 <= num4 && num4 <= num5 && num5 <= num6 && num6 <= num7 && num7 <= num8 ) {
        cout << "Conjunto ordenado" << endl ;
    }  else { cout << endl << "Conjunto no ordenado" << endl ;  }

*/
	return 0 ;
 }
