/*12	Hacer un programa para ingresar una lista de 10 números e informar el máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. Máximo Negativo -3. Mínimo Positivo 2.*/

#include <iostream>
using namespace std;

int main() {
    int num, i, a, b, maximo_n=0, minimo_p=0 , vuelta=0;

    for (i = 1; i < 10; i++) {
    cout << "Ingrese un numero: ";
    cin >> num;

    if(num > 0) {
        for (a = 1 ; a >= 10 ; a++) {
            minimo_p = num ;
            if(num < minimo_p) {
                minimo_p = num ;
                cout << "Minimo positivo: " << minimo_p << endl;
        }
            }
        }}
        cout << "Minimo positivo: " << minimo_p << endl;


    return 0;
}
