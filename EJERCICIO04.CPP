/* Permitir el ingreso de una frase. Cambiar todas las vocales por un caracter de guión: '*'*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

#define MAX 50

/*Alumno: Guillermo Z.Arguello Cordobe
Ejercicio 4 */

void main()
{
  clrscr; 
  char texto[MAX];
  int x=0;
  printf("ingrese frase en minuscula: ");
  gets(texto);
  
  while (texto[x]!='\0')
  { 
    if (texto[x]== 'a' || texto[x]== 'e' || texto[x]== 'i' || texto[x]== 'o' || texto[x]== 'u')
    {
      texto[x] = '*'; 
    }  
   x++;
  }
   printf("la frase con el cambio ahora es: %s", texto); 
   getch();
  }
