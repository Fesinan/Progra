/*Dado una matriz cuadrada de 3 x 3
a-) Cargar los datos en la matriz
b-) Informar los elementos de la diagonal principal
b-) Sumar los elementos de las diagonales secundaria.
*/

#include <stdio.h>
#define t 5

void ingresaMat (int [][t], int);
void mostrarMat (int [][t], int);
void sumaPDiago (int [][t], int);
int sumaSDiago (int [][t], int);

int main (void) {
	int a[t][t], sumaP, sumaS;

	ingresaMat(a, t);

	sumaPDiago(a, t);

	sumaS = sumaSDiago(a, t);

	printf("\n\t La suma de la diagonal secundaria es: %d \n", sumaS);

	mostrarMat(a, t);

	return 0;
}


void ingresaMat (int a[][t], int tam){
	int i, j;
	
	for (i = 0; i < tam; i++) {
		for (j = 0; j < tam; j++) {
			printf("Ingrese un valor: ");
			scanf("%d", &a[i][j]);
		}
	}
}

void mostrarMat (int a[][t], int n){
	int i, j;
	
	printf("\n\n \t\t");

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%6d", a[i][j]);
		}

		printf("\n\n \t\t");
	
	}
	printf("\n");
}

void sumaPDiago (int a[][t], int n){
	int i, j, sum = 0;

	for (i = 0, j = 0; i < n && j < n; i++, j++) {
		printf("%6d", a[i][j]);
	}
}

int sumaSDiago (int a[][t], int n){
	int i, j, sum = 0;

	for (i = 0, j = n-1; i < n && j >= 0; i++, j--) {
		sum += a[i][j];
	}
	return sum;
}
