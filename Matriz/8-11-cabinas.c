#include <stdio.h>
#define t 7

int LeerYControlar (int , float, float);
void mostrarMat (float [][t], int, int);;

int main (void) {
	float Rec[5][7] = {{0}} /* tanta pares de llaves como dimenciones */, impor ;
	int cab, hora;

	printf("\n\n\t\tIngrese el numero de cabina entre 1 a 5 (0 para teerminar): ");
	cab = (int) LeerYControlar(0, 0, 5);

	while (cab != 0) {
		printf("\n\n\t\t Ingese la hora entre 0 y 6: ");
		hora = (int) LeerYControlar(0, 0, 6);
		printf("\n\n\t\t Ingrese el importe de la cabina: ");
		impor = LeerYControlar(-1, 0, 0);
		Rec[cab - 1][hora] += impor;

		printf("\n\n\t\tIngrese el numero de cabina entre 1 a 5 (0 para teerminar): ");
		cab = (int) LeerYControlar(0, 0, 5);
	}

	printf("\n\n\n\t\t Recaudacion\n ");
	mostrarMat(Rec, 5, 7);
}

/* Definicion dee funciones */

int LeerYControlar (int det, float ini, float fin){
	int ban = 1;
	float dato;

	if(det >= -1 && det <= 1){
		do {
			scanf("%f", &dato);

			if (det == 0 && (dato < ini || dato > fin)) {
				printf("\n\t Ingrese de vuelta el dato (desde %.0f hasta %.0f): ", ini, fin);
			} else if (det == 1 && dato > fin) {
				printf("\n\t Ingrese de vuelta el dato (hasta %.0f): ",  fin);
			}else if (det == -1 && dato < ini) {
				printf("\n\t Ingrese de vuelta el dato (desde %.0f): ", ini);
			}else 
			ban = 0;

		}while (ban == 1);

		return dato;
	}else {
		printf("\n\n\t\t ERROR DETERMINANTE NO VALIDO \n\n");
		return -1;
	}
}

void mostrarMat (float a[][t], int f, int c){
	int i, j;
	printf("\n\n\t Hora \n\t\t");
	for (i = 0; i < f; i++) {
		printf("Cabina: %d", i);
		for (j = 0; j < c; j++) {
			printf("\t%6.2f", a[i][j]);
		}
		printf("\n\n \t\t");
	}
	printf("\n");
}
