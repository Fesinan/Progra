/*Una empresa de peajes, en una determinada zona tiene 5 cabinas para el cobro de peajes.
Desea obtener una estadística diaria de la recaudación de cada cabina entre las 0 y 6 horas.
Se ingresa:
- Nro. cabina (1 a 5)
- Hora (0 a 6)
- Importe del peaje.
Finaliza la información con Nro. cabina cero.
*/

#include <stdio.h>
#define t 7

int LeerYControlar (int, float, float);
void ingresoVecINT(int [], int, char *);
int buscarNVector (int [], int, int);
void mostrarMat (float [][t], int [], int, int);;

int main (void){
	float Rec[5][7]= {{0}}, impor;
	int CodCab[5], NumCab, hora, pos;
	ingresoVecINT(CodCab, 5, "\n\tIngrese el Codio de la cabina: ");

	printf("\n\n\tIngrese el numero de cabina (0 para teerminar): ");
	scanf("%d", &NumCab);

	while (NumCab != 0) {
		pos = buscarNVector(CodCab, NumCab, 5);
		if (pos >= 0){
			printf("\n\n\t Ingese la hora entre 0 y 6: ");
			hora = (int) LeerYControlar(0, 0, 6);
			printf("\n\n\t Ingrese el importe de la cabina: ");
			impor = LeerYControlar(-1, 0, 0);
			Rec[pos][hora] += impor;
		}else
			printf("\n\n\tCabina no existe");

		printf("\n\n\tIngrese el numero de cabina: ");
		scanf("%d", &NumCab);
	}
	mostrarMat(Rec, CodCab, 5, 7);
}

void ingresoVecINT(int vi[], int ca, char *men){
    int i;

    for(i = 0; i < ca; i++){
        printf("%s", men);
	vi[i] = (int) LeerYControlar(0, 100, 999);
    }
}

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

int buscarNVector (int vec[], int busca, int tam){
	int i = 0, pos = -1;
	while (i < tam && pos == -1) {
		if (vec[i] == busca) 
			pos = i;
		i++;
	}
	return pos;
}

void mostrarMat (float a[][t], int vec[], int f, int c){
	int  j;
	printf("\n\n\t Hora \n\t\t");
	for (int i = 0; i < f; i++) {
		printf("Cabina: %d", vec[i]);
		for (j = 0; j < c; j++) {
			printf("\t%10.2f", a[i][j]);
		}
		printf("\n\n \t\t");
	}
	printf("\n");
}
