#include <stdio.h>

int main (int argc, char *argv[])
{
	
	int numA, numB;
	int auxiliar;

	printf("Introduce el primer numero entero: ");
	scanf("%d", &numA);
	printf("Introduce el segundo numero entero: ");
	scanf("%d", &numB);

	printf("A: %d B: %d\n", numA, numB);

	
	auxiliar=numA;
	numA=numB; 
	numB=auxiliar;

	printf("A: %d B: %d\n", numA, numB);
	return 0;
}
