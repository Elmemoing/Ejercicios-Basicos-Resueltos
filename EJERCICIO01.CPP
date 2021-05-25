/*Ingresar una palabra por teclado. 
Mostrar por pantalla la palabra y la cantidad de caracteres que tiene dicha palabra.*/

#include<stdio.h>
#include<conio.h>

#define MAX 50

/*Alumno: Guillermo Z.Arguello Cordobe
Ejercicio 1 */

void main()
{
    clrscr;
    char palabra[MAX+1];
    printf("Ingrese una palabra :");
    scanf("%s",&palabra);
    int vocales=0;
    int x=0;
    int cons=0;
    int total=0;
    while (palabra[x]!='\0')
    {
	if (palabra[x]=='a' || palabra[x]=='e' || palabra[x]=='i' || palabra[x]=='o' || palabra[x]=='u')
	{
	    vocales++;
	}
	else
	{
	    cons++;
	}
	x++;
    }
    total=vocales+cons;
    printf("La cantidad de caracteres que tiene la palabra %s es %i",palabra,total);
    getch();
}
