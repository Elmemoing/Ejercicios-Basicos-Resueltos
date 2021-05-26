#include<stdio.h>
#include<conio.h>

/*Alumno: Guillermo Z. Arguello Cordobe
Ejercicio 5*/

void main()
{
  clrscr();
  char palabra[100];
  int i=0;
  printf("Ingrese una palabra: ");
  gets(palabra);

  while(palabra[i]!='\0')
  {
    if (palabra[i]>= 'a' && palabra[i]<= 'z')
    {
     palabra[i] = palabra[i] - 'a' + 'A';
     }
     x++;
    }
    printf("En mayuscula es: %s\n", palabra);
    getch();
}
