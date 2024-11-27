/*
Las localidades para asistir a un recital que se desarrolla durante cuatro días, puede ser adquiridas por
Internet o personalmente en distintos puntos de venta. Existen cinco sectores, cuya identificación (10
caracteres) y sus respectivos costos
Se pide:
a- Declarar un tipo de dato que contenga:
Sector(10 caracteres)
Costo de la entrada (real)
Capacidad de ubicaciones en el sector (entero)
Cantidad de entradas vendidas por dia (vector de 4 elementos)

a- Declarar un vector, cuya fila le corresponde a cada sector.
b- Cargar toda la información. FUNCION
c- Indicar la cantidad de entradas libres por sector en cada dia FUNCION
d- Recaudación por sector
e- Sector de mínima recaudación.
*/

#include <stdlib.h>
#include <stdio.h>

struct lista {
    char sector [11];
    float costo;
    int capacidad, vendidas[4];
};

void ingreso (struct lista [], int);
void libresXDia (struct lista [], int [][4], int);
void recaudacion (struct lista [], float[], int);
int recaMin (float [], int);

int main (void){
    struct lista localidades[5];
    int libres [5][4], posmin;
    float reca[5];

    ingreso(localidades, 5);

    libresXDia(localidades, libres, 5);

    recaudacion(localidades, reca, 5);

    posmin = recaMin(reca, 5);
    printf("\n\n\t la recaudacion del sector %s, es la minima en todo el concierto", localidades[posmin].sector);

    return 0;
}

void ingreso (struct lista vecStr[], int tam){
    int i, j;

    for (i = 0; i < tam; i++) {
        printf("\n INgrese un nombre del estadio %d: ", i);
        fgets(vecStr[i].sector, 11, stdin);
        vecStr[i].costo = (float) rand() / 1000;
        printf("\n El costo de las entradas es: %10.2f", vecStr[i].costo);
        vecStr[i].capacidad = rand() % 1000;
        printf("\n La capacidad de los estadios es: %6d", vecStr[i].capacidad);
        for (j = 0; j < 4; j++) {
            vecStr[i].vendidas[j] = rand() % 1000;
            printf("\n\n El dia %d se vendieron: %d", j, vecStr[i].vendidas[j]);
        }
    }
}

void libresXDia (struct lista vecStr[], int vec[][4], int tam){
    int i, j;

    printf("\n\n\t Libres por dia por sona son:");
    for (i = 0; i < tam; i++) 
        for (j = 0; j < 4; j++){
            vec[i][j] = vecStr[i].capacidad - vecStr[i].vendidas[j];
            printf("\n\n\t En el sector %s sobran: %6d",vecStr[i].sector, vec[i][j]);
        }
}

void recaudacion (struct lista vecStr[], float vec[], int tam){
    int i, j, vendidas = 0;

    for (i = 0; i < tam; i++) {
        for (j = 0; j < 4 ; j++) {
            vendidas += vecStr[i].vendidas[j];
        }
        vec[i] = (float)vecStr[i].costo * (float)vendidas;
        printf("\n\n\t la recaudacion del sector %s es: %10.2f", vecStr[i].sector, vec[i]);
    }
}

int recaMin (float vec[], int tam){
    int i, posmin = 0;
    float min = vec[0];

    for (i = 1; i < tam; i++) {
        if (vec[i] < min) {
            min = vec[i];
            posmin = i;
        }
    }
    return posmin;
}