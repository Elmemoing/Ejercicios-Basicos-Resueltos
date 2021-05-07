#include <stdio.h>
#include <conio.h>

/* ALUMNO: GUILLERMO ARGUELLO CORDOBE*/

void main()
{       
    clrscr();
	char nombre[101], apellido[101], nro_cedula[10];
	char fecha_nac[11], direccion[51], asignatura[30];
	int dia_clases, asistencia, nota_1;
	int nota_2, ex_final, nota_final;
	float porcentaje_asistencia;

	printf("ingrese el nombre: \n ");
	scanf(" %s",&nombre);
	printf("ingrese el apellido: \n ");
	scanf(" %s",&apellido);
	printf("ingrese cedula: \n ");
	scanf(" %s",&nro_cedula);
	printf("ingrese fecha de nacimiento: \n ");
	scanf(" %s",&fecha_nac);
	printf("ingrese su direccion: \n ");
	scanf(" %s",&direccion);
	printf("ingrese el nombre de la asignatura: \n ");
	scanf(" %s",&asignatura);
	printf("ingrese dias de clases: \n ");
	scanf(" %d",&dia_clases);
	printf("ingrese dias asistidos por el alumno: \n ");
	scanf(" %d",&asistencia);
	printf("ingrese calificacion de examen 1: \n ");
	scanf(" %d",&nota_1);
	printf("ingrese calificacion de examen 2: \n ");
	scanf(" %d",&nota_2);
	printf("ingrese calificacion de examen final: \n ");
	scanf(" %d",&ex_final);
	if (nota_1 <= 25) {
	      if (nota_2 <= 25) {
		     if (ex_final <= 50) {
			   nota_final = (nota_1+nota_2+ex_final);
			   porcentaje_asistencia = asistencia*100/dia_clases;
		   if (nota_final <60) {
		printf("\n -Nombre: %s", nombre);
		printf("\n -Apellido: %s", apellido);
		printf("\n -CI: %s", nro_cedula);
		printf("\n -Direccion: %s", direccion);
		printf("\n -Fecha de nacimiento: %s", fecha_nac);
		printf("\n -Nombre de asignatura: %s", asignatura);
		printf("\n reprobado");
	} else {
		if (nota_final>59 &&nota_final<70) {
		if (porcentaje_asistencia>=70) {
		printf("\n -Nombre: %s", nombre);
		printf("\n -Apellido: %s", apellido);
		printf("\n -CI: %s", nro_cedula);
		printf("\n -Direccion: %s", direccion);
		printf("\n -Fecha de nacimiento: %s", fecha_nac);
		printf("\n -Nombre de Asignatura: %s", asignatura);
		printf("\n Aprobado con nota 2");
		} else {
		printf("\n -Nombre: %s", nombre);
		printf("\n -Apellido: %s", apellido);
		printf("\n -CI: %s", nro_cedula);
		printf("\n -Direccion: %s", direccion);
		printf("\n -Fecha de nacimiento: %s", fecha_nac);
		printf("\n -Nombre de asignatura:%s", asignatura);
		printf("\n Reprovado por falta de asistencia");
	    }
   } else {
		if ( nota_final>69 && nota_final<80) {
		if (porcentaje_asistencia>=70) {
		printf("\n -Nombre: %s", nombre);
		printf("\n -Apellido: %s", apellido);
		printf("\n -Numero de Cedula: %s", nro_cedula);
		printf("\n -Direccion: %s", direccion);
		printf("\n -Fecha de nacimiento: %s", fecha_nac);
		printf("\n -Nombre de asignatura: %s", asignatura);
		printf("\n Aprobado con nota 3");
		} else {
		printf("\n -Nombre: %s", nombre);
		printf("\n -Apellido: %s", apellido);
		printf("\n -Numero de Cedula: %s", nro_cedula);
		printf("\n -Direccion: %s", direccion);
		printf("\n -Fecha de nacimiento: %s", fecha_nac);
		printf("\n -Nombre de asignatura: %s", asignatura);
		printf("\n Reprovado por falta de asistencia");
		}
		} else {
		if ( nota_final>79 && nota_final<90) {
		if (porcentaje_asistencia>=70) {
		    printf("\n -Nombre: %s", nombre);
		    printf("\n -Apellido: %s", apellido);
		    printf("\n -Numero de Cedula: %s", nro_cedula);
		    printf("\n -Direccion: %s", direccion);
		    printf("\n -Fecha de nacimiento: %s", fecha_nac);
		    printf("\n -Nombre de asignatura: %s", asignatura);
		    printf("\n Aprobado con nota 4");
		} else {
		    printf("\n -Nombre: %s", nombre);
		    printf("\n -Apellido: %s", apellido);
		    printf("\n -Numero de Cedula: %s", nro_cedula);
		    printf("\n -Direccion: %s", direccion);
		    printf("\n -Fecha de nacimiento: %s", fecha_nac);
		    printf("\n -Nombre de asignatura: %s", asignatura);
		    printf("\n Reprovado por falta de asistencia");
		 }
		   } else {
			{
		 if (nota_final>89 && nota_final<=100)
		    if (porcentaje_asistencia>=70) {
		    printf("\n -Nombre: %s", nombre);
		    printf("\n -Apellido: %s", apellido);
		    printf("\n -Numero de Cedula: %s", nro_cedula);
		    printf("\n -Direccion: %s", direccion);
		    printf("\n -Fecha de nacimiento: %s", fecha_nac);
		    printf("\n -Nombre de asignatura: %s", asignatura);
		printf("\n Aprobado con nota 5");
		   } else {
			printf("\n -Nombre: %s", nombre);
			printf("\n -Apellido: %s", apellido);
			printf("\n -Numero de Cedula: %s", nro_cedula);
			printf("\n -Direccion: %s", direccion);
			printf("\n -Fecha de nacimiento: %s", fecha_nac);
			printf("\n -Nombre de asignatura: %s", asignatura);
			printf("\n Reprovado por falta de asistencia");
					}
			}
		 }
		}
	  }
	 }
	}
       else{
		  printf("\n la nota del examen no es menor a 50");
				  }
			    }
	   else{ printf("\n La nota examen parcial 2 no es menor a 25");
			   }
	 }
    else{ printf("\n\n La nota examen parcial 1 no es menor a 25");
    }

	getch();
}
