/*
Dada una matriz de enteros 4 x 4,
Se pide:
a- Obtener el mínimo valor de la diagonal principal Función
b- Determinar por fila y guardar en un vector la cantidad de elementos por fila
menores al mínimo de la diagonal principal. Función
*/

#include <stdio.h>
#include <stdlib.h>

int minDiagonal(int[][4], int);
void ingresaMat(int[][4], int, int);
void minXFila(int[][4], int[], int, int, int);
void muestraVecINT(int[], int);

int main(void) {
  int mat[4][4], min, minimo[4] = [];

  ingresaMat(mat, 4, 4);
  min = minDiagonal(mat, 4);
  printf("\n\n El valor minomo de la diagonal es: %d", min);
  minXFila(mat, minimo, 4, 4, min);

  printf("\n La cantidad de valores menores en cada fila son: ");
  muestraVecINT(minimo, 4);
  return 0;
}

void muestraVecINT(int vi[], int ca) {
  printf("\n");
  for (int i = 0; i < ca; i++)
    printf("\n\t\t Fila %d cantidad: %6d", i, vi[i]);
  printf("\n\n\n\n");
}

void ingresaMat(int a[][4], int f, int c) {
  int i, j;
  for (i = 0; i < f; i++)
    for (j = 0; j < c; j++) {
      a[i][j] = rand();
      printf("\n\t\tValor es: %d\n", a[i][j]);
    }
}

int minDiagonal(int mat[][4], int tam) {
  int min = mat[0][0], i;

  for (i = 1; i < tam; i++)
    if (mat[i][i] < min)
      min = mat[i][i];

  return min;
}

void minXFila(int mat[][4], int vec[], int cf, int cc, int minD) {
  int i, j;
  for (i = 0; i < cf; i++) 
    for (j = 0; j < cc; j++)
      if (mat[i][j] < minD)
        vec[i]++;
}