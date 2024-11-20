#include <stdio.h>
#define N 5

void Carga(int[], int);
void Muestra(int [], int);
void Copia(int[], int, int []);
void Adicion(int[], int[], int, int[]);
void Inversa(int[], int[]);
void Listar (int [], int [], int [], int, int[]);
void Pares(int [], int);
void Suma(int [], int, int);
void Promedio(int [], int, int, float);
void Maximo(int[], int, int);

int main (){
	int A[N], copia[N], suma[N], inversa[N], total, maximo;
	float prom;

	Carga(A, N);
	Muestra(A, N);
	Copia(copia, N, A);
	Adicion(suma, copia, N, A );
	Inversa(inversa,A);
	Listar(A, copia, suma,N, inversa);
	Pares(A,N);
	Suma(A,N, total);
	Promedio(A,N,total,prom);
	Maximo(A,N,maximo);
}

void Carga(int A[], int NN){
	printf("carga\n");
	int I;
	for ( I=0;I<NN;I++){
		scanf("%d", &A[I]);
	}	
}

void Muestra(int A[], int NN){
	printf("\nmuestra\n");
	int I;
	for ( I=0;I<NN;I++){
		printf("\n%d", A[I]);
	}
}

void Copia(int B[], int NN, int A[]){
	printf("\ncopia\n");
	int I;
	for (I=0;I<NN;I++ ){
		B[I]=A[I];
		printf("\n%d", B[I]);
	}
}
void Adicion(int C[], int B[], int NN, int A[]){
	printf("\nadicion\n");
	int I;
	for (I=0;I<NN;I++ ){
		C[I]= B[I]+A[I];
		printf("\n%d", C[I]);
	}
}
void Inversa(int D[], int A[]){
	printf("\nInversa\n");
	int I;
	for (I=4; I>=0;I--){
		D[I]=A[I];
		printf("\n%d", D[I]);
	}
}
void Listar(int A[], int B[], int C[], int NN, int D[]){
	int I;
	printf("\nMUESTRA TOTAL\n");
	
	printf("\nMuestra\n");
	for ( I=0; I<NN ;I++){
	printf("\n%d", A[I]);
	}
	
	printf("\nCopia\n");
	for (I=0;I<NN;I++ ){
	printf("\n%d", B[I]);
	}
	
	printf("\nAdicion\n");
	for (I=0;I<NN;I++ ){
	printf("\n%d", C[I]);
	}
	
	printf("\nInversa\n");
	for (I=4; I>=0;I--){
	printf("\n%d", D[I]);
	}
}
void Pares(int A[], int NN){
	int I;
	for ( I=0; I<NN ;I++){
		if (A[I] % 2==0)
		printf("\nPosicion: %d",I);
	}
}
void Suma(int A[], int NN, int todos){
	int I;
	for ( I=0; I<NN ;I++){
		todos += A[I];
		
	}
	printf("\nla suma de todos los valores es: %d",todos);
}	

void Promedio(int A[], int NN, int todos, float resultado){
	int I;
	for ( I=0; I<NN ;I++){
		todos+= A[I];
	}	
	resultado = (float) todos / NN;
	printf("\nEL PROMEDIO de todos los valores es: %.2f",resultado);	
}	
void Maximo(int A[], int NN, int max){
	max= -1;
	int I;
	for ( I=0; I<NN ;I++){
		if (A[I]>max){
			max=A[I];
		}
	}	
	printf("\nel mayor de todos los valores es: %d",max);
}
