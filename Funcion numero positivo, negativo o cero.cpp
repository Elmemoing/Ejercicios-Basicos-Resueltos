#include<conio.h>
#include<stdio.h>
#include<math.h>

//funciones ejercicio 3 algoritmia
char numero (float x)
{
 if( x < 0 )
 { 
 printf("el numero es negativo");
 }
 else if( x > 0 ){
  printf("el numero es positivo");
 }
 else{
printf("es cero");
 }
}

main()
{
	float n;
	char r;
	printf("ingresa valor: \n\n");
	scanf("%g",&n);
	r=numero(n);
	getch();
	
} 
