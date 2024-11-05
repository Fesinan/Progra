#include <stdio.h>
#define tam 6

void carga(int[], int);
void mostrar(int[], int);
void copia(int[], int, int[]);
void copiaInver(int[], int, int[]);
void suma(int[], int [], int[], int);
void mostrarPar(int [], int);
int sumaVector(int [], int);
float proVector(int [], int);
void mostrarMayor(int [], int);
void orden(int);

int main(){
    int A[tam], B[tam], C[tam], D[tam], sum;
    float pro;

    carga(A, tam);
    orden(tam);
    printf("\nVector A\n");
    mostrar(A, tam);

    copia(A, tam, B);
    printf("\nVector B\n");
    mostrar(B, tam);

    suma(A, B, C, tam);
    printf("\nVector C\n");
    mostrar(C, tam);

    copiaInver(A, tam, D);
    printf("\nVector D\n");
    mostrar(D, tam);

    printf("\nPares de A");
    mostrarPar(A, tam);

    sum = sumaVector(A, tam);
    printf("\n\n Suma de los elementos del vector a: %d\n", sum);

    pro = proVector(A, tam);
    printf("\n\n Promedio del vector A: %.2f", pro);

    printf("\n\n\n");
    mostrarMayor(A,tam);

    printf("\n\n\n\t\t\t Se termino \n\t\t\t");
    return 0;
}


void carga(int ve[], int ce){

    int i;

    for(i = 0; i < ce; i++){
        printf("Ingrese un valor: ");
        scanf("%d", &ve[i]);
    }

}

void mostrar(int ve[], int ca){
    printf("\n\n\n\n\t\t\t");
    for( int i = 0; i < ca; i++){
        printf("%6d", ve[i]);
    }

}

void mostrarPar(int ve[], int ca){
    printf("\n\n\n\n\t\t\t");
    for( int i = 0; i < ca; i++){
        if(ve[i] % 2 == 0){
            printf("%6d", i);
        }
    }

}

void copia(int a[],int ca,int b[]){
    int i;

    for(i = 0; i < ca; i++){
        b[i]=a[i];
    }

}

void copiaInver(int a[],int ca,int b[]){
    int i, j = ca-1;

    for(i = 0; i < ca; i++){
        b[i]=a[j];
        j--;
    }

}


void suma(int a[],int b[],int c[],int ca){
    int i;

    for(i = 0; i < ca; i++){
        c[i]=b[i]+a[i];
    }

}

int sumaVector(int a[], int ca){
    int i, s = 0;

    for(i = 0; i < ca; i++){
        s += a[i];
    }

    return s;
}

float proVector(int a[], int t){
    float pro;

    pro = (float)sumaVector(a, t) / t;

    return pro;

}

void mostrarMayor(int A[], int ca){
    int i, mayor = A[0];
    for(i = 1; i < ca; i++){
        if( mayor < A[i] ){
            mayor = A[i];
        }
    }
    printf("Mayor: %d", mayor);
}

void orden(int a){
    int i;
    printf("\n\nOrden:\t\t\t");
    for(i = 0; i < a; i++){
        printf("%6d", i);
    }
    printf("\n\n\n");
}
