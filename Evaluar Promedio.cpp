/*Desarrolla un programa que haga lo siguiente
1 muestre el nombre de tres alumnos juan, saul, leo, después  pida 3  calificaciones
2 realiza el promedio de esas calificaciones
3 evalúa el promedio si es menor a 7 muestra un mensaje de reprobado*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int calif1, calif2, calif3;
	int prom;
	
	printf("Ingrese calificacion de Juan \n");
	scanf("%d",&calif1);
	printf("ingrese calificacion de saul \n");
	scanf("%d",&calif2);
	printf("ingrese calificacion de leo \n");
	scanf("%d",&calif3);

	prom = (calif1+calif2+calif3)/3;
	printf ("Promedio es: \n %d", prom);
	
	if (prom >7)
	{
		printf("\n Aprobado");
        }	
	else
	{
		printf("\n reprobado");
	}
	getch();
	return 0;
}
