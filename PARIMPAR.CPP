#include <conio.h>
#include <stdio.h>

void main()
{
    clrscr();
    int numero, pares, impares;
    int cont_par, cont_impar, total_suma;
    int iteracion;
     printf( "Introduzca un numero: \n ");
     scanf( "%d", &numero );

    pares = 0;
    impares = 0;
    cont_par = 0;
    cont_impar = 0;

    while ( numero<100 | numero >300)
    {
	if ( numero % 2 == 0 )
	   {
		    pares += numero;
	    cont_par ++;
	   }
	else
	   {
	    impares += numero;
	    cont_impar ++;
	   }
     printf( "Introduzca un numero: \n");
     scanf( "%d", &numero );
    }
    total_suma = pares+impares;
    iteracion = cont_par+cont_impar;
    printf( "\n   La suma de los pares es: %d", pares );
    printf( "\n   La suma de los impares es: %d", impares );
    printf( "\n   La cantidad de pares es: %d", cont_par );
    printf( "\n   La cantidad de los impares es: %d", cont_impar );
    printf( "\n   La suma total de los numeros es: %d", total_suma );
    printf( "\n   La cantidad de iteraciones es: %d", iteracion );
    getch();
}
