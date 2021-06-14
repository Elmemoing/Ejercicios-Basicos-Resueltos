/* Permitir el ingreso de una frase. Cambiar todas las letras por un caracter de guión: '*'
*/
#include<stdio.h>
#include<conio.h>

#define MAX 50

int main()
{
  char palabra[MAX+1];
  int x=0;
  printf("Ingrese una palabra ");
  gets(palabra);
  
  while (palabra[x]!='\0'){
  
    if (palabra[x] >= A && palabra[x] <= Z){
      palabra[x] = '*'
    }
    else{
      palabra[x] = '*';
    }
   x++;
  }
  printf("La palabra con el cambio ahora es: %s", palabra)
  getch();
}
 
