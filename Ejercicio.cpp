#include <conio.h>
#include <stdio.h>



#define MAX 50

int main()
{
	char frase[MAX];
	int longitud=0, i=0, x=0;
	printf("Ingrese frase ");
	gets(frase);
	
	/*Ejercicio 1*/
	printf ("El texto ingresado de manera original es: %s ", frase);

	
	/*Calculo de Longuitud*/
	do
   {
	i++;
	longitud=i;
   }while((frase[i]!='\0')&&(i<MAX+1)); 

    /*Ejercicio numero 2*/
    if (frase[0]== 'A' || frase[0]== 'E' || frase[0]== 'I' || frase[0]== 'O' || frase[0]== 'U')
    {
    printf ("\n El texto ingresado de forma inversa es: ");
    for (int x = longitud; (x >= 0); x--)
    {
      printf ("%c", frase[x]);
    }
    } else{
    	printf("No comienza con vocal mayuscula \n");
	}
