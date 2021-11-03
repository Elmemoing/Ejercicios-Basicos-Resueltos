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
	int i=0, x=0, c=0, d=0, e=0, a=0; /*contadores*/
	
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
    printf("\n\n 3- La cantidad de vocales minusculas que tiene la frase es: %d", minuscula);
	while (frase[d]!='\0')
    {
		if (frase[d]=='A' || frase[d]=='E' || frase[d]=='I' || frase[d]=='O' || frase[d]=='U')
			{
	    		mayuscula++;
			}
		d++;
    }
    printf("\n    La cantidad de vocales mayusculas que tiene la frase es: %d", mayuscula);
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
    
    /*Frase a minuscula*/
    while(frase[e]!='\0')
  		  {
    		if (frase[e]>= 'A' && frase[e]<= 'Z')
    		   {
     				frase[e] = frase[e] - 'A' + 'a';
     		   }
     		   e++;
    		}
    printf("\n\n 5- En minuscula es: %s\n", frase);
    
    /*Frase Inverso*/
    while (frase[a++]!='\0');
    {
    	printf("\n\n 6- La frase invertida es: ");
		while(a>=0)
			{
			printf("%c",frase[a--]);
			}
	}
	
	/*Tipo frase*/
	if (frase[0]>= 'a' && frase[0]<= 'z')
		{
			frase[0] = frase[0] - 'a' + 'A';
		}
	printf("\n\n 7- Tipo frase es: %s", frase);
	return 0;
	getch();
}
