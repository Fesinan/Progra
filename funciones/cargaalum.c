#include <stdio.h>
#include <sys/types.h>

int numEntre1y10 (int);
int ingreNota (void);
float promeEntero (int, int);

/*int cargaAlum (void);*/

int main (void) {
    int dni, acum, cant;
    acum = 0; cant = 0;

    printf("Ingrese un DNI de alumno (0 o negativo para salir): ");
    scanf("%d", &dni);

    while (dni > 0 cant < 100) {
        acum += ingreNota(); 
        cant ++;
        printf("Ingrese otro DNI de alumno (0 o negativo para salir): ");
        scanf("%d", &dni);
    }

    printf("La nota promedio es: %.2f \n", promeEntero(acum, cant));
    
    return 0;
}

/* Definicion de Funciones */

float promeEntero (int num, int cant) {
    return (float)num / cant;
}

int ingreNota (void) {
    int nota;
    do{
        printf("Ingrese una nota entre 1 a 10: ");
        scanf("%d", &nota);
        if (numEntre1y10(nota) == -1) {
            printf("\n \t NOTA NO EN RANGO !!! \n ");
        }
    }while (numEntre1y10(nota) == -1);
    return nota;
}

int numEntre1y10 (int a){
    if (a > 10 || a < 0) {
        a = -1;
    }
    return a;
}
