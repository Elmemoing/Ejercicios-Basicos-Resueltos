#include<conio.h>
#include<stdio.h>


int main()
{
 float Longuitud,radio;
 float pi=3.1416;
 printf("ingrese el radio: ");
 scanf("%f",&radio);
 
 Longuitud = (2*pi*radio);

 printf("la longitud de circunferencia es: %.f",Longuitud);
 getch();
 return 0;
}
