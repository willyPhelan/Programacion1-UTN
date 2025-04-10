/* Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia entre ambos.
Ejemplo A: Si se ingresan 3 y 8 se emite 5. Si se ingresan 8 y 3 se emite 5. Ejemplo B: Si se ingresan -3 y 9 se emite 12. Si se ingresan -12 y -1 se emite 11.
Ejemplo C: Si se ingresan -3 y -9 se emite 6. Si se ingresan -12 y -9 se emite 3.
Importante: Verifique que el programa emite SIEMPRE UN VALOR POSITIVO porque la diferencia absoluta siempre es un valor positivo.
*/


#include <iostream>


using namespace std ;



int main() {

    int num1, num2, dif ;

	cout << "Ingrese un num" << endl ;
	cin >> num1 ;

	cout << "Ingrese otro num" << endl ;
	cin >> num2 ;

	if (num1 > num2) {

        dif = num1 - num2 ;
        cout << "La diferencia es: " << dif << endl ;

        } else {
            dif = num2 - num1 ;
            cout << "La diferencia es: " << dif << endl ; }





	return 0 ;
 }
