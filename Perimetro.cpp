#include<conio.h>
#include<stdio.h>

/*Calcular Perimetro de un rectangulo*/

int main()
{
  int perimetro,base,altura;
  
  printf("Ingrese altura del rectangulo ");
  scanf("%d",&altura);
  printf("Ingrese base del rectangulo ");
  scanf("%d",&base);

  perimetro = (base+altura)*2;
  
  printf("El perimetro es: %d",perimetro);
  getch();
  return 0;
}
