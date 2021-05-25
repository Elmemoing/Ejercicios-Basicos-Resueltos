#include<stdio.h>
#include<conio.h>

/*Alumno: Guillermo Z. Arguello Cordobe
Ejercicio 3*/

void main()
{
    clrscr;
    char palabra[50];
    printf("Ingrese Palabra: ");
    gets(palabra);
    if (palabra[0] >'B' && palabra[0] <='Z' && palabra[0] != 'E' && palabra[0] != 'I' && palabra[0] != 'O' && palabra[0] != 'U')
    {
       printf("Empieza con consonante mayuscula \n");
    }
    else if (palabra[0] >'b' && palabra[0] <='z' && palabra[0] != 'e' && palabra[0] != 'i' && palabra[0] != 'o' && palabra[0] != 'u')
	 {
	    printf("Empieza con consonante minuscula \n");
	 }
	 else if (palabra[0] == 'a' || palabra[0] == 'e' || palabra[0] == 'i' || palabra[0] == 'o' || palabra[0] =='u')
	    {
	      printf("Empieza con vocal minuscula \n");
	    }
	    else
	       {
		 printf("Empieza con vocal mayuscula \n");
	       }
    getch();
}
