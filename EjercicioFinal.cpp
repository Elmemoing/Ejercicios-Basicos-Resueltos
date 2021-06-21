#include <stdio.h>
#include <conio.h>
#define tam 100

int main()
{
    char palabra[tam],palabraMayus[tam];
    int i = 0, j, x =0;
    
    gets(palabra);

    printf("La cadena introducida es: %s\n", palabra);
    
    if (palabra[x]=='A' || palabra[x]=='E' ||
	palabra[x]=='I' || palabra[x]=='O' || palabra[x]=='U'){
    
	    while(palabra[i]!='\0'){
	        i++;
	    }
	    printf("La cadena invertida es: ");
	    for (j=i-1; j>=0; j--){
	        printf("%c", palabra[j]);
	    }
			
	}else if (palabra[x] !='a' && palabra[x] !='e' && palabra[x] !='i' && palabra[x] !='o' && palabra[x] !='u'){
	
	
	printf("\nCadena cambiada por mayusculas:	");
	x = 0;
	while(palabra[x] != '\0'){
		palabraMayus[x] = palabra[x];
		if (palabra[x] !='a' && palabra[x] !='e' && palabra[x] !='i' && palabra[x] !='o' && palabra[x] !='u' && palabra[x] !='A' && palabra[x] !='E' &&
		palabra[x] !='I' && palabra[x] !='O' && palabra[x] !='U'){
			if (palabra[x] > 97 && palabra[x] < 123){
			
			palabraMayus[x] = palabra[x] - 32;
		}
		printf("%c",palabraMayus[x]);
		}
		x += 1;
	 }
          }

	x = 0;
	printf("\nCadena Cambiada por *:	");	
	while(palabra[x] != '\0'){
		
		if (palabra[x] !='a' && palabra[x] !='e' && palabra[x] !='i' && palabra[x] !='o' && palabra[x] !='u' && palabra[x] !='A' && palabra[x] !='E' &&
		palabra[x] !='I' && palabra[x] !='O' && palabra[x] !='U' && palabra[x] > 63 && palabra[x] < 91){
		palabra[x] = '*';
		}
		x += 1;
	}	
	
	printf("%s",palabra);
		
		
    getch();
    return 0;
}
