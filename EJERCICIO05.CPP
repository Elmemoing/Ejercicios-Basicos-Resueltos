#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*Alumno: Guillermo Z. Arguello Cordobe
Ejercicio 5*/
void main()
{
    clrscr();
    char c[50];
    int x=0;
    printf("Ingrese una palabra en minuscula: ");
    gets(c);

    while(c[x]!='\0')
    {
     if (c[x]>= 'a' && c[x]<= 'z')
     {
	c[x] = c[x] - 'a' + 'A';
     }
     x++;
    }
    printf("En mayuscula es: %s\n", c);
    getch();
}
