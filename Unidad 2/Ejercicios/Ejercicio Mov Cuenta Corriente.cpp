/*
28
La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada. Por cada movimiento se registró:
Número de movimiento
Día
Tipo ('E' - Extracción / 'D' - Depósito)
Importe

Existe un registro por movimiento. Se desea calcular e informar:
El saldo final de la cuenta.
El porcentaje de movimientos de extracción y el porcentaje de depósito.
El depósito de mayor importe indicando también día y número de movimiento.
La cantidad de movimientos del día 10.




*/#include <iostream>


using namespace std ;



int main() {

    int i, nroMovimiento, dia, movimientos=3, cantidadDepositos=0, cantidadExtracciones=0,dia10=0 ,diamax, movmax, fecha=1;
    float importe, saldoInicial=0, saldoFinal, porcentajeDepositos, porcentajeExtracciones, maxDepo=0, totalPorD=0, totalPorE=0 ;
    bool tipo ;

    for (i=0 ; i < movimientos ; i++) {

        cout << "Movimiento " << i+1 << " de 14" << endl ;
        cout << "Dia: " << fecha++ << endl << endl ;

        cout << "Ingrese numero de movimiento" << endl ;
        cin >> nroMovimiento ;

        cout << "Ingrese el dia" << endl ;
        cin >> dia ;

        cout << "Ingrese el tipo de transaccion (Marque 0 para deposito y 1 para extraccion)" << endl ;
        cin >> tipo ;

        cout << "Ingrese el importe" << endl ;
        cin >> importe ;

        cout << endl ;






    if(tipo == 0 ) {
        cantidadDepositos++ ;
        totalPorD = totalPorD + importe ;
        } else {
        cantidadExtracciones++ ;
        totalPorE = totalPorE + importe ;}



        porcentajeDepositos = (cantidadDepositos * 100) / movimientos ;
        porcentajeExtracciones = (cantidadExtracciones * 100) / movimientos ;



        saldoFinal = totalPorD - totalPorE ;



        if (tipo == 0 && importe > maxDepo ) {
            maxDepo = importe ;
            diamax = dia ;
            movmax = nroMovimiento ; }

        if (dia == 10) {
            dia10++ ; }

    }
cout << "Cantidad de depositos: " << cantidadDepositos << endl <<"Cantidad de extracciones: " << cantidadExtracciones << endl ;
cout << "Porcentaje de depositos: %" << porcentajeDepositos << endl << "Porcentaje de extracciones: %" << porcentajeExtracciones << endl ;
cout << "Saldo al dia de la fecha: $" << saldoFinal << endl ;
        cout << endl ;


        cout << "Movimientos del dia 10: " << dia10 << endl ;
        cout << endl ;

        cout << "El deposito de mayor importe fue de: $" << maxDepo << " / Nro de movimiento: " << movmax <<  " / Dia: " << diamax  << endl ;






	return 0 ;
 }
