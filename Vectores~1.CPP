#include <stdio.h>
#include <conio.h>
#define CONT 10

/*ALUMNO: Guillermo Arguello Cordobe*/

void main()
{
	clrscr;
	int edad[10],cont, posicionMayor = 0, posicionMenor = 0;
	int mayor, menor;
	float promedio, suma;
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
		   for (int c = 0; c <10; c++ ){
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
	printf("promedio de edad es: %.2f \n",promedio);
	printf("El mayor es: %d y se encuentra en la posicion: %d \n",mayor,posicionMayor);
	printf("El menor es: %d y se encuentra en la posicion: %d \n",menor,posicionMenor);
	getch();
}
