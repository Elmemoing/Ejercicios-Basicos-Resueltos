#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char palabra[20];
	int n;
	
	printf("ingrese una palabra \n");
	scanf("%s",palabra);
	n = strlen(palabra);
	printf("La longitud de la palabra es: %d \n", n);	
	getch();
	return 0;
}
