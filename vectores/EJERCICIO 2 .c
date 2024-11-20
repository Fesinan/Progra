/* 	EN BASE AL PROGRAMA EJERCICIO 
	1) IMPRIMIR EL PROMEDIO DE CADA ALUMNO, REALIZARLO CON UNA FUNCION (PROMEDIO) QUE RECIBA LA LINEA DE NOTAS DEL ALUMNO Y RETORNE EL PROMEDIO (FLOAT) 
	2)LAS MATERIAS SE CODIFICAN DE 0 A 5 RECIBIR UN CODIGO DE MATERIA(EJ:0) E IMPRIMIR LOS DATOS DEL MEJOR ALUMNO DE ESA MATERIA
	3)RECIBIR EL CDOGIO DE UNA MATERIA (EJ:4) Y ORDENAR TODOS LOS DATOS DE MAYOR A MENOR EN ESA MATERIA EN PRIMERA INSTANCIA
	4)Y POR PROMEDIO EN SEGUNDA INSTANCIA Y USAR EL PROMEDIO COMO CAMPO SEGUNDARIO DEL ORDENAMIENTO(SE SUGIERE USAR LA FUNCION DE PROMEDIO DEL PUNTO 2)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 16
#define MAT 6
//funciones
void CARGAR(char[][20],char[],int[][MAT],int);
void MIRAR(char[][20],char[],int[][MAT],int);
float PROMEDIO (char[],int[][MAT],int);



int main(){
	char NOM [M][20];
	char SEX [M];
	int NOTA [M][MAT];
	CARGAR(NOM,SEX,NOTA,M);
	MIRAR(NOM,SEX,NOTA,M);
	PROMEDIO(SEX,NOTA,M);
	
	
	printf("\n\n\t\t FIN DEL PROGRAMA");
	getchar();	
	return 0;
}

//funciones
void CARGAR(char NOM[][20],char SEX[],int NOTA[][MAT],int N)
{
	int I,J;
	char NOMBRE[][20]={"JAVIER","TOMAS","TAMARA","AGUSTIN",
						"MORA","LUNA","URIEL","SANTINO",
						"PABLO","DELFINA","ELIANA","IGNACIO",
						"CARLOS","ABRIL","SOFIA","MATIAS",};
	char SEXO[]={'M','M','F','M','F','F','M','M','M','F','F','M','M','F','F','M'};
	for(I=0;I<N;I++)
	{
	strcpy(NOM[I],NOMBRE[I]);
	SEX[I]=SEXO[I];
	for(J=0;J<MAT;J++)
	
	NOTA[I][J]= 2 + rand()%9;
	}
}
	

	
	



void MIRAR(char NOM[][20],char SEX[],int NOTA[][MAT],int N)
{
	int I,J;
		printf("\n\n\t\t %-15s %5s %8s \n\n", "NOMBRE","SEXO",	"NOTA");
		for(I=0;I<N;I++){
				printf("\n\n\t\t %-15s %5c ", NOM[I],SEX[I]);
	
				for(J=0;J<MAT;J++)
						printf("%6d",NOTA[I][J]);
		}


}

float PROMEDIO (char SEX[],int NOTA[][MAT],int N)
{
	int I;
	int contm=0,contf=0;
	float promm=0,promf=0,notf=0,notm=0;
	for(I=0;I<N;I++)
	{
		if(SEX[I]=='F'){
			notf+=NOTA[I];
			contf++;
		}
		else {
			notm+=NOTA[I];
			contm++;
		}
	}
	promf=notf/contf;
	promm= notm/contm;

	printf("\n\n\t\t el promedio de hombres es de %2.2f y el de mujeres %2.2f",promm,promf);
	getchar();

}
