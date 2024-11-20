/*
 *
 * Determine el promedio de cada fila de una matriz 3x4
 *
 */


#include <stdio.h>
#include <stdlib.h>

void PromedioVec (int [][4], float [], int, int );
void ingresaMat (int [][4], int , int );
void muestraVecINT(float [], int );


int main (void){
	int Mat[3][4];
	float ProVec[3];

	ingresaMat(Mat, 3, 4);

	printf("\n El promedio de ecada fila es:");
	PromedioVec(Mat, ProVec, 3, 4);
	muestraVecINT(ProVec, 3);
	
	return 0;
}

void ingresaMat (int a[][4], int f, int c){
	int i, j;
	
	for (i = 0; i < f; i++) {
		for (j = 0; j < c; j++) {
			a[i][j] = 10 + rand() % 300;
		}
	}
}

void PromedioVec (int M[][4], float V[], int tamF, int tamC){
	int i, j;

	for (i = 0; i < tamF; i++) {
		for (j = 0; j < tamC; j++) {
			V[i] += M[i][j];
		}
		V[i] = (float) V[i]/tamC;
	}
}

void muestraVecINT(float vi[], int ca){
    printf("\n\n\n\n\n");
    for( int i = 0; i < ca; i++){
        printf("%6.2f\n", vi[i]);
    }
}
