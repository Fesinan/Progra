#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5

void CARGA_MATRIZ(char[][81],int);
void INFORMAR_MATRIZ(char [][81], int );
int BUSQUEDA (char [][81], char [], int);

int main(){
	char nombre[N][81], nomBus[81];
	int pos;

	CARGA_MATRIZ(nombre, N);
	INFORMAR_MATRIZ(nombre, N);
	printf("\nIngerse el nombre a buscar: ");
	fgets(nomBus, 81, stdin);
	pos = BUSQUEDA(nombre, nomBus, N);

	if (pos >= 0) {
		printf("\n\n\t EL nombre que busca esta en la posicion. %d", pos + 1);
	}else {
		printf("\n\n\t EL nombre que busca no existe en la lista de nombres");
	}

	printf("\n\n\n\t Fin del programa");
	getchar();
}

void CARGA_MATRIZ(char M[][81], int Cf){
	int i;
	
	for (i=0; i<Cf; i++){
		printf("\n Ingrese los nombres de la matriz: ");
		fgets(M[i], 81, stdin);
	}
}

void INFORMAR_MATRIZ(char M[][81], int Cf){
	int i;
	printf("\n Los nombres ingresados de la matriz son:\n");
	for (i=0; i<Cf; i++){
		printf("\t");
		puts(M[i]);
	}
}

int BUSQUEDA (char vecha[][81], char busq[], int n){
	int i;
	for (i = 0; i <= n && strcmp(vecha[i], busq) != 0;i++) {
			
	}
	if (i <= n) 
		return i;
	else
		return -1;
}
