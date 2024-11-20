#include <stdio.h>
#define p 10

typedef int cod[p];
typedef float prec[p];

void ingresoParVectores(int [], float [], int);
void muestraParVectores(int [], float[], int);
int mostrarMayor(float [], int);
int buscarVerctor(int [], int);

int main(void){
    cod A;
    prec B;
    int may, conPre;

    ingresoParVectores(A, B, p);

    muestraParVectores(A, B, p);

    may=mostrarMayor(B, p);
    printf("El producto mas caro es: %d", A[may]);

   // conPre=buscarVerctor(A, p);
    printf("El precio del producto es: %.2f", B[conPre]);

    return 0;
}

void ingresoParVectores(cod ve,prec b, int ce){
    int i;

    for(i = 0; i < ce; i++){
        printf("Ingrese un Codigo: ");
        scanf("%d", &ve[i]);
        printf("Ingrese un presio: ");
        scanf("%f", &b[i]);
    }
}

void muestraParVectores(int ve[], float vb[], int ca){
   printf("\n\n\n\n\t\t\t");
    for( int i = 0; i < ca; i++){
        printf("%6d\n", ve[i]);
        printf("%6.2f", vb[i]);
    }

}


int mostrarMayor(float A[], int ca){
    int i, j;
    float mayor = A[0];
    for(i = 1; i < ca; i++){
        if( mayor < A[i] ){
            mayor = A[i];
            j=i;
        }
    }
    return j;
}
