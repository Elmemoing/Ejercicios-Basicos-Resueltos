#include <conio.h>
#include <stdio.h>

#define MAX 50

int main()
{
	char frase[MAX], mayuscula[MAX];
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
    /*Ejercico numero 3*/
    } else if (frase[x] !='a' && frase[x] !='e' && frase[x] !='i' && frase[x] !='o' && frase[x] !='u'){
	
	printf("\npalabra cambiada por mayusculas es:	");
	x = 0;
	while(frase[x] != '\0'){
		mayuscula[x] = frase[x];
		if (frase[x] !='a' && frase[x] !='e' && frase[x] !='i' && frase[x] !='o' && frase[x] !='u' && frase[x] !='A' && frase[x] !='E' &&
		frase[x] !='I' && frase[x] !='O' && frase[x] !='U'){
			if (frase[x] > 97 && frase[x] < 123){
			
			mayuscula[x] = frase[x] - 32;
		}
		printf("%c",mayuscula[x]);
		}
		x += 1;
	}
}
    /*Ejercicio 4*/
	x = 0;
	printf("\nPalabra Cambiada por * es:	");	
	while(frase[x] != '\0'){
		
		if (frase[x] !='a' && frase[x] !='e' && frase[x] !='i' && frase[x] !='o' && frase[x] !='u' && frase[x] !='A' && frase[x] !='E' &&
		frase[x] !='I' && frase[x] !='O' && frase[x] !='U' && frase[x] > 63 && frase[x] < 91){
			frase[x] = '*';
		}
		x += 1;
	}	
	
	printf("%s",frase);
		
    getch();
    return 0;
}
