#include<stdio.h>
#include<conio.h>

/*Alumno: Guillermo Z. Arguello Cordobe
Ejercicio 5*/

void main()
{
  clrscr();
  char frase[50];
  int x=0;
  printf("Ingrese una palabra en minuscula: ");
  gets(c);

  while(frase[x]!='\0')
  {
    if (frase[x]>= 'a' && frase[x]<= 'z')
    {
     frase[x] = frase[x] - 'a' + 'A';
     }
     x++;
    }
    printf("En mayuscula es: %s\n", frase);
    getch();
}
