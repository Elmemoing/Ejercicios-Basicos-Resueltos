/* Permitir el ingreso de una frase. Cambiar todas las letras por un caracter de guión: '*'
*/
#include<stdio.h>
#include<conio.h>

#define MAX 50

int main()
{
  int palabra[MAX];
  int x=0;
  Printf("Ingrese una palabra");
  gets(palabra);
  
  while (palabra[x]!='\0'){
  
    if palabra[x] >= A && palabra[x] <= Z || palabra[x] >= a && palabra[x] <= z{
    
    palabra[x] = '*';
    }
   x++;
  }
  printf("La palabra es con el cambio ahora es: %s", palabra)
  getch();
}
 
