/*
19
Este ejercicio lo resolverán en la parte de código de la materia.
El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita:

Nombre: C/C++ - Tipo: 'C' Valor Hora: $7500
Nombre: C# - Tipo: '#' Valor Hora: $ 6100
Nombre: Python - Tipo: 'P' Valor Hora: $ 5400
Nombre: Go - Tipo: 'G' Valor Hora: $ 5000


Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool)




*/

#include <iostream>


using namespace std ;



int main() {

    int horas=0, total=0, urg=0 ;
    char lenguaje ;
    bool urgente ;

	cout << "Ingrese la cantidad de horas de trabajo" << endl ;
	cin >> horas ;

	cout << "Ingrese el lenguaje (c para C/C++, p para Python, # para C# o g para Go)" << endl ;
	cin >> lenguaje ;

	cout << "Desea que este trabajo sea tratado con urgencia (marque 1 para SI, 0 para NO)?" << endl ;
	cin >> urgente ;

	if(lenguaje == 'c' && urgente == true) {
        total = (horas * 7500) ;
        urg = total * 2.20 ;
        cout << "El total es de: $" << urg << endl ;

	} else if (lenguaje == 'c' && urgente == false) {
	    total = (horas * 7500) ;
	    cout << "El total es de: $" << total << endl ;
	}

		if(lenguaje == '#' && urgente == true) {
        total = (horas * 6100) * 2.20 ;
        urg = total * 2.25 ;
        cout << "El total es de: $" << urg << endl ;

	} else if (lenguaje == '#' && urgente == false) {
	    total = (horas * 6100) ;
	    cout << "El total es de: $" << total << endl ;
	}

	if(lenguaje == 'p' && urgente == true) {
        total = (horas * 5400) * 2.20 ;
        urg = total * 2.25 ;
        cout << "El total es de: $" << urg << endl ;
	} else if (lenguaje == 'p' && urgente == false) {
	    total = (horas * 5400) ;
	    cout << "El total es de: $" << total << endl ;
	}

	if(lenguaje == 'go' && urgente == true) {
        total = (horas * 500) * 2.20 ;
        urg = total * 2.25 ;
        cout << "El total es de: $" << urg << endl ;
	} else if (lenguaje == 'go' && urgente == false) {
	    total = (horas * 5000) ;
	    cout << "El total es de: $" << total << endl ;
	}



	return 0 ;
 }
