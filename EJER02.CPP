#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define MAX 200

/*Alumno: Guillermo Z.Arguello Cordobe
Ejercicio 2 */

void main()
{
    clrscr();
    char texto[MAX+1];
    printf("Ingrese una frase :");
    gets(texto);
    int cantidad=1;
    int x=0;
    while (texto[x]!='\0')
    {
    if (texto[x] == ' ')
       {
	cantidad++;
       }
     x++;
    }
    printf("La cantidad de palabra que tiene la frase %s es %i",texto,cantidad);
    getch();
}