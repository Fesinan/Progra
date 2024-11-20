/*
Dado un conjunto de valores enteros leerlos y luego:
a-) Cargar una matriz M1 de 3 x 2 por filas mediante una Funcion.
b-) Obtener el valor promedio de M1.
c-) Máximo valor de la matriz M1 y en qué posición (fila-columna) se encuentra.
NOTA: puede haber varios máximos
*/
#include <stdio.h>

void CARGA_MATRIZ(int[][2], int, int);
void INFORME_MATRIZ(int[][2], int, int);
int SUMA_MATRIZ(int[][2], int, int);
float PROMEDIO(int,int);
int MAX_MATRIZ(int [][2], int, int);
void MOSTRAR_MAXIMO(int [][2], int, int);

int  main(){
	int sum;
	int M1[3][2];
	CARGA_MATRIZ(M1,3,2);
	INFORME_MATRIZ(M1,3,2);
	sum=SUMA_MATRIZ(M1, 3, 2);
	printf("\n\nEl Promedio de la matriz M1 es %.2f", PROMEDIO(sum,2*3));
	printf("\n\n El maximo de la Matriz es: %d", MAX_MATRIZ(M1, 3, 2));
	
}
void CARGA_MATRIZ(int M[][2], int Cf, int Cc){
	int i, j;
	printf("\n Ingrese los valores de la matriz:");
	
	for (i=0; i<Cf; i++)
		for(j=0; j<Cc; j++){
			printf("\n Ingrese el valor de la pocicion M[%d][%d]: ", i, j);
			scanf("%d", &M[i][j]);
		}
			
}
void INFORME_MATRIZ(int M[][2], int Cf, int Cc){
	int i, j;
	printf("\n Muestre los valores de la matriz:\n");
	
	for (i=0; i<Cf; i++){
		printf("\n");
		for(j=0; j<Cc; j++){
			printf("\t %6d",M[i][j]);
		}
	}
}

int SUMA_MATRIZ(int M[][2], int Cf, int Cc){
	int i, j;
	int SUM=0;
	for (i=0; i<Cf; i++){
		for(j=0; j<Cc; j++){
			SUM += M[i][j];  
		}
	}
	return SUM;
}

float PROMEDIO(int suma, int cantidad){
	float prom;
	prom =(float) suma/cantidad	;
	return prom;
	
}

int MAX_MATRIZ(int M[][2], int Cf, int Cc){
	int i, j, MAX = M[0][0];
	for (i=0; i<Cf; i++)
		for(j=0; j<Cc; j++)
			MAX = (M[i][j]>MAX) ? M[i][j] : MAX;
			/*if(M[i][j]>MAX)  
				MAX = M[i][j];*/
	return MAX;
}

void MOSTRAR_MAXIMO(int M[][2], int Cf, int Cc){
	int i, j, MAX;
	MAX = MAX_MATRIZ(M, Cf, Cc);
	for (i=0; i<Cf; i++){
		for(j=0; j<Cc; j++){
			if(M[i][j]==MAX){
				printf("\n\n El maximo esta en: %d %d",i,j);
				printf("\n\n El maximo es: %d",MAX);
			}
		}
	}
		
}

