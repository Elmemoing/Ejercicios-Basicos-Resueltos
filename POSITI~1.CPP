#include <conio.h>
#include <stdio.h>

void main()
{
    clrscr();
    int numero, positivo, negativo;
    int cont_positivo, cont_negativo, total_suma;
    int iteracion;
     printf( "Introduzca un numero (0=fin) \n");
     scanf( "%d", &numero );

    positivo = 0;
    negativo = 0;
    cont_positivo = 0;
    cont_negativo = 0;

    while ( numero != 0)
    {
	if ( numero > 0 )
	   {
	    positivo += numero;
	    cont_positivo ++;
	   }
	else
	   {
	    negativo += numero;
	    cont_negativo ++;
	   }
     printf( "Introduzca un numero (0=fin): \n");
     scanf( "%d", &numero );
    }
    total_suma = positivo+negativo;
    iteracion = cont_positivo+cont_negativo;
    printf( "\n   La suma de los positivos: %d", positivo );
    printf( "\n   La suma de los negativos es: %d", negativo );
    printf( "\n   La cantidad de positivos es: %d", cont_positivo );
    printf( "\n   La cantidad de negativos es: %d", cont_negativo );
    printf( "\n   La suma total de los numeros es: %d", total_suma );
    printf( "\n   La cantidad de iteraciones es: %d", iteracion );
    getch();

}
