/*Realizar un programa que permita el ingreso por teclado la edad de 10 personas.
Se debe repetir hasta que el usuario ingrese una edad menor a 1 o mayor a 125.
Informar por pantalla:
 
la cantidad de ingreso de edades.
el promedio de edad.
la edad mayor y la posición del índice que se encuentra en el vector
la edad menor y la posición del índice que se encuentra en el vector
*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int edad[10],cont;
	int mayor, menor, suma;
	int promedio;
	cont = 0;
	suma = 0;
	mayor = 0;
	for (int i = 0; i < 10; i++) {
	    do {
		printf("\n Ingrese edad %d \n", i+1);
	        scanf("%d",&edad[i]);
	        cont ++;
	        mayor = edad[0];
	        if (edad[i]>mayor){
	        	mayor = edad[i];
			}
	       }while(edad[i]<1 || edad[i]>125);
	    suma=suma+edad[i];		   
    }
    
    promedio=suma/10;
	printf("promedio de edad es: %d \n",promedio);
	printf("El mayor es: %d \n",mayor);
	printf("La cantidad de ingreso de edades es: %d",cont); 
	getch();
}
