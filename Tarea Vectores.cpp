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
#define CONT 10

int main()
{
	int edad[10],cont, posicionMayor = 0, posicionMenor = 0;
	int mayor, menor, suma;
	float promedio;
	cont = 0;
	suma = 0;
	
	for (int i = 0; i < CONT; i++) {
	      do {
		printf("\n Ingrese edad %d \n", i+1);
	        scanf("%d",&edad[i]);
	        cont ++;
	        mayor = edad[0];
	        menor = edad[0];
	           for (int i = 0; i <10; i++){
	                if (edad[i]>mayor){
	        	     mayor = edad[i];
	        	     posicionMayor = i;
			        }
			      }
				    for (int i = 0; i <10; i++ ){
			        if (edad[i]<menor){
	        	    menor = edad[i];
	        	    posicionMenor = i;
			        }
		           }
	       }while(edad[i]<1 || edad[i]>125);
	    suma=suma+edad[i];		   
        }
        promedio=suma/10;
	printf("La cantidad de ingreso de edades es: %d \n",cont); 
	printf("promedio de edad es: %f \n",promedio);
	printf("El mayor es: %d y se encuentra en la posicion: %d \n",mayor,posicionMayor);
	printf("El menor es: %d y se encuentra en la posicion: %d \n",menor,posicionMenor);
	getch();
}
