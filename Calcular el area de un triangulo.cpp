#include <conio.h>
#include <stdio.h>
#include <math.h>

int main()
{
	int base, altura;
	float area;
	
	printf("ingrese base del triangulo: \n");
	scanf("%d",&base);
	
	printf("ingrese altura del triangulo: \n");
	scanf("%d",&altura);
	
	area = (base*altura)/2;
	
	printf("el area es: %1.f",area);
}
