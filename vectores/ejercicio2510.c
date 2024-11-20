#include <stdio.h>
#include<stdlib.h>
#define N 5

void Carga(int[], int[], int);
int Control1();
int Control2(int);
void informe(int[], int [], int );
int busqueda(int[],int, int);
int main(){
	int Codigo[N];
	int Precio[N];
	int consulta, pos;
	Carga(Codigo, Precio, N);
	informe(Codigo, Precio, N);
	printf("\nIngrese un codigo de producto para ver su precio:");
	scanf("%d",&consulta);
	pos= busqueda(Codigo, consulta,N);
	if(pos>=0)
		printf("\n PRECIO: %d",Precio[pos]);
	else
		printf("no existe");
	return 0;
}

void Carga(int Cod[], int Pre[], int NN ){
	int I;
	for ( I=0;I<NN;I++){
		Cod[I] = Control1();
		Pre[I]= Control2(0);		
	}
}
int Control1(){
	int dato;
	int desde=99;
	int hasta=999;
	do{
		printf("\nIngresa el CODIGO bien:");
		scanf("%d", &dato);
	} while(dato<desde || dato>hasta);
	return dato;
}

int Control2(int valor){
	 int dato;
	do{
		printf("\nIngresa el PRECIO bien: ");
		scanf("%d", &dato);
	}while(dato<valor);
	return dato;
}
void informe(int Cod[], int Pre[], int NN ){
	int I;
	printf("\nCodigo \tPrecio");
	for(I=0; I<NN;I++)
		printf("\n %d \t %6d",Cod[I], Pre[I]);
	
}
int busqueda(int Cod[], int dato, int NN){
	int posi= -1, I=0;
	while(posi==-1 && I<NN){
		if(Cod[I]==dato){
			posi=I;			
		}
		else{
			I ++;			
		}

	}
	return posi;
}
