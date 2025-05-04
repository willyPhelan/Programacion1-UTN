/*
28	La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada. Por cada movimiento se registró:
-	Número de movimiento
-	Día
-	Tipo ('E' - Extracción / 'D' - Depósito)
-	Importe

Existe un registro por movimiento. Se desea calcular e informar:
-	El saldo final de la cuenta.
-	El porcentaje de movimientos de extracción y el porcentaje de depósito.
-	El depósito de mayor importe indicando también día y número de movimiento.
-	La cantidad de movimientos del día 10.

*/#include <iostream>


using namespace std ;



int main() {

    int i, numero_movimiento, movimiento=0, dia, depo=0, extra=0, depositos, mov_mayor=0, dia_mayor=0, mov_dia_10=0 ;
    char tipo ;
    float importe, total=0, porcentaje_d=0, porcentaje_e=0, depo_mayor=0 ;
    bool hay_depo=false ;

	for(i = 1 ; i <= 14 ; i++){

         movimiento++ ;

         cout << "Ingrese el numero de movimiento" << endl ;
         cin >> numero_movimiento ;

         cout << "Ingrese el dia que realizo el movimiento" << endl ;
         cin >> dia ;

         cout << "Indique el tipo de movimiento: E para extraccion o D para deposito" << endl  ;
         cin >> tipo ;

         cout << "Indique el  importe del movimiento realizado" << endl ;
         cin >> importe ;


         if(tipo == 'e') {
            total -= importe ;
            extra++ ;
             } else {
                 total += importe ;
                 depo++ ; }


        porcentaje_d = (depo * 100) / 4 ;
        porcentaje_e = (extra * 100) / 4 ;

        if(tipo == 'd' && i == 1) {
           hay_depo = true ;
           depo_mayor = importe ;
           mov_mayor = numero_movimiento ;
           dia_mayor = dia ; }

        if(tipo == 'd' && hay_depo == true) {
                if(importe > depo_mayor){
                depo_mayor = importe ;
                mov_mayor = numero_movimiento ;
                dia_mayor = dia ;}}

        if(dia == 10){
                mov_dia_10++ ;
        }

	} // -- for

	if(total < importe) {
        cout << endl << "Saldo insuficiente para realizar la operacion" << endl ;
	} else {

	    cout << endl << "Porcentaje de depositos: %" << porcentaje_d << endl ;
        cout << "Porcentaje de extacciones: %" << porcentaje_e << endl ;
        cout << "Deposito de mayor importe: $" << depo_mayor << " Nro. de movimiento: " << mov_mayor << " El dia: " << dia_mayor <<endl ;
        cout << "Movimientos del dia 10: " << mov_dia_10 << endl ;
        cout << "Saldo final: $" << total << endl ;
        }







	return 0 ;
 }
