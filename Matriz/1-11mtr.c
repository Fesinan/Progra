#include <stdio.h>

void CARGA_MATRIZ(int[][2], int, int);
void INFORME_MATRIZ(int[][2], int, int);

int  main(){
	int M1[3][2];
	CARGA_MATRIZ(M1,3,2);
	INFORME_MATRIZ(M1,3,2);
	
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
