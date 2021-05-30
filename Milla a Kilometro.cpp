#include<stdio.h>
#include<conio.h>

int main()
{
  int milla, kilometro;
  
  printf("Ingrese milla");
  scanf("%d",&milla);
  
  kilometro = 1609*milla;
  
  printf("Milla &d a Kilometro es: &d", milla,kilometro);
  getch();
  return 0;
}
