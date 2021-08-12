#include <conio.h>
#Include <stdio.h>

int main()
{
  int velocidad_uno, velocidad_dos;
  float tiempo, aceleracion;
  
  printf("Ingrese velocidad uno: ");
  scanf("%d",&velocidad_uno);
  
  printf("Ingrese velocidad dos: ");
  scanf("%d",&velocidad_dos);
  
  printf("Ingrese tiempo: ");
  scanf("%f",&tiempo);
  
  aceleracion = (velocidad_dos-velocidad_uno)/tiempo;
  
  printf("la aceleracion escalar media es: %f",aceleracion);
  
  return 0;
}
