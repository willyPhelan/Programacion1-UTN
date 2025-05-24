/*
Hacer un programa para ingresar una lista de 13 números enteros. Se pide luego determinar e informar:
A) La cantidad de ternas de valores positivos consecutivos.
B) La cantidad de ternas de valores negativos consecutivos y ordenados en forma creciente.

Ejemplo si la lista fuera: 10, 5, 4, 3, -8, -3, -1, 0, 3, 8, -5, -8, -10 entonces el programa detectará una terna de positivos consecutivos (10, 5, 4) y una terna de negativos consecutivos ordenados (-8, -3, -1)

*/#include <iostream>

using namespace std;

int main() {

    int num1, num2, num3 ;
    int cont_ternas_p = 0 ;
    int cont_ternas_n = 0 ;
    int esperar_p = 0, esperar_n = 0 ;

    // Primeros dos números

    cout << "Ingresar un numero: " ;
    cin >> num1 ;

    cout << "Ingresar un numero: " ;
    cin >> num2 ;

    for (int i = 3 ; i <= 13 ; i++) {

    cout << "Ingresar un numero: " ;
    cin >> num3 ;

    // Verificion de terna de positivos consecutivos

    if(esperar_p == 0){
    if (num1 > 0 && num2 > 0 && num3 > 0) { cont_ternas_p++ ;
                                            esperar_p = 2; }} // saltar los próximos dos pasos


    // Verificion terna de negativos consecutivos y en orden creciente


    if(esperar_n == 0) {
        if (num1 < 0 && num2 < 0 && num3 < 0 && num1 < num2 && num2 < num3) {
            cont_ternas_n++ ;
            esperar_n = 2 ; }  }

    // Reduzco contadores de espera si están activos

    if (esperar_p > 0) esperar_p--;
    if (esperar_n > 0) esperar_n--;


    // Desplazo los números para la próxima terna

        num1 = num2 ;
        num2 = num3 ;

    }


    cout << "Cantidad de ternas de numeros positivos consecutivos: " << cont_ternas_p << endl ;
    cout << "Cantidad de ternas de numeros negativos consecutivos ordenados: " << cont_ternas_n << endl ; }
