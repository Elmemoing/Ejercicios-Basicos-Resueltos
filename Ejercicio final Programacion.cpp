/*Ejercicio nro1
Realizar un programa que solicite al usuario el ingreso de una frase (que no supere los 100 caracteres).
Se debe imprimir la frase original ingresada.
La cantidad de vocales
a, e, i, o, u diferenciando mayusculas y minusculas.
Imprimir todo en mayusculas.
Imprimir todo en minusculas.
Tipo inverso.
Tipo frase.
Pueden utilizar un menu para seleccionar la funcion deseada.*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()	
{
	char frase[100];
	int vocales=0, minuscula=0, mayuscula=0;
	int i=0, x=0, c=0, d=0;
	
	printf("Ingrese una frase: \n");
	gets(frase);
	
	/*Frase original*/
	printf("\n\n 1- Frase original Ingresada es: %s",frase);
	
	/*Cantidad de vocales*/
	while (frase[i]!='\0')
    {
		if (frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u' || frase[i]=='A' || frase[i]=='E' || frase[i]=='I' || frase[i]=='O' || frase[i]=='U')
			{
	    		vocales++;
			}
		i++;
    }
    printf("\n\n 2- La cantidad de vocales que tiene la frase es: %d", vocales);
	
	/*Cantidad de vocales minusculas y mayusculas*/
	while (frase[c]!='\0')
    {
		if (frase[c]=='a' || frase[c]=='e' || frase[c]=='i' || frase[c]=='o' || frase[c]=='u')
			{
	    		minuscula++;
			}
		c++;
    }
    printf("\n\n 2- La cantidad de vocales minusculas que tiene la frase es: %d", minuscula);

	/*Frase a mayuscula*/
	while(frase[x]!='\0')
  			{
    			if (frase[x]>= 'a' && frase[x]<= 'z')
    		{
     			frase[x] = frase[x] - 'a' + 'A';
     		}
     			x++;
    		}
    printf("\n\n 4- En mayuscula es: %s\n", frase);
	return 0;
	getch();
}
