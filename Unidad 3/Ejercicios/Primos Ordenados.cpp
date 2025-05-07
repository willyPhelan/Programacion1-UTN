/*
Dada una lista de 7 números enteros todos distintos entre sí determinar e informar con un cartel aclaratorio si los números primos ingresados en la misma están ordenados de menor a mayor.
Los números primos pueden no ser consecutivos, pero sí estar ordenados.

Ejemplo A: 4, 5, 7, 12, 13, 19, 20. Se emite un cartel que diga “Ordenados” ya que los números primos están ordenados: 5, 7, 13, 19.

Ejemplo B: 4, 10, 3, 5, 11, 7, 14. Se emite un cartel que diga “Desordenados” ya que los números primos no están ordenados: 3, 5, 11, 7.

*/#include <iostream>


using namespace std ;



int main() {

    int i, a, num, menor=0, cont=0, primoAnterior=0, primos=0 ;
    bool ordenado=true ;


      for (int i = 0; i < 7; i++) {

        cout << "Ingresar un numero: " << endl ;
        cin >> num ;

        // Verifica si es primo

        int cont = 0 ;
        for (int a = 1 ; a <= num ; a++) {
            if (num % a == 0) {
                cont++ ;
            }
        }

        if (cont == 2) {
            if (num < primoAnterior) {
                ordenado = false ;
            }

            primoAnterior= num ;
            primos++ ;

}}

    if(ordenado){cout <<"Conjunto de primos ordenados" << endl ;} else { cout << "Conjunto de primos desordenados" << endl ; }
	return 0 ;
 }
