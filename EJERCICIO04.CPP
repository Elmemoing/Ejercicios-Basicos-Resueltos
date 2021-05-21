/* Permitir el ingreso de una frase. Cambiar todas las vocales por un caracter de guión: '*'*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define MAX 50

void main()
{
  clrscr; 
  char texto[MAX];
  int x=0;
  printf("ingrese frase: ");
  gets(texto);
  
  while (palabra[x]!=\n)
  { 
    if (texto[x]== 'a' || texto[x]== 'e' || texto[x]== 'i' || texto[x]== 'o' || texto[x]== 'u')
    {
      texto[x]= 42; 
    }  
   x++;
  }
   printf("la frase con el cambio ahora es: %c", texto); 
    getch();
  }
