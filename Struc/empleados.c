/*
Se dispone de los siguientes datos de los empleados de una empresa:
 Apellido y nombre (máximo 80 caracteres)
 Sueldo
 Antigüedad.
Se sabe que la cantidad de empleados son 100.
Se pide un programa que:
a- Declarar un tipo de dato que contenga la información del empleado
b- Declarar un vector de estructuras del tipo de dato creado en el punto a.
c- Cargar en un vector de estructuras, los datos referentes a los empleados, Función INGRESO.
d- Informar los Datos completos del o los empleados de mayor antigüedad.
e- Informar los Empleados que superen o igualen el sueldo promedio, informando sus tres atributos.
*/

#include <complex.h>
#include <stdio.h>
#define N 5

struct Lista{
    char ApellidoNombre [81];
    float sueldo;
    int edad;
};

void infoPromedio (struct Lista [], int );
void mayorEdad (struct Lista [], int );
void mostrarVecStruc (struct Lista [], int );
void cargaVecEstruc (struct Lista [], int );
void mostrarStruc (struct Lista );
void limpBuf();
void leeChar(char [], int );

int main (void){
    struct Lista empleados[N];

    cargaVecEstruc(empleados, N);
    printf("\n\n\n\n\t\tLos empleados son\n\n\n: ");
    mostrarVecStruc(empleados, N);
    printf("\n\n\n\n El empleado con mayor edad es: \n\n");
    mayorEdad(empleados, N);
    printf("\n\n\n\n Los empleados con mayor sueldo son: \n\n");
    infoPromedio(empleados, N);

    return 0;
}

void leeChar(char cad[], int n){
	char c;
	int i;
	i=0;
	c=getchar();
	while (c!='\n' && c!=EOF && i<n-1) {
		cad[i]=c;
		c=getchar();
		i++;
	}
	cad[i]='\0';
	while (c!='\n' && c!=EOF ) 
		c=getchar();
}

void limpBuf() {
    char c;
    c = getchar();
    while (c != EOF && c != '\n')
        c = getchar();
}

void cargaVecEstruc (struct Lista vecStr[], int tam){
    int i;

    for (i=0; i < tam; i++) {
        printf("\n\n\t Ingrese el nombre del empleado: ");
        leeChar(vecStr[i].ApellidoNombre, 81);
        printf("\n\n\t Ingrese el sueldo: ");
        scanf("%f", &vecStr[i].sueldo);
        printf("\n\n\t Ingrese la edad del empleado: ");
        scanf("%d", &vecStr[i].edad);
        limpBuf();
    }
}

void mostrarStruc (struct Lista Str){
        printf("\n\n\t El nombre del empleado es: %s", Str.ApellidoNombre);
        printf("\n\n\t Ll sueldo es: %8.2f", Str.sueldo);
        printf("\n\n\t la edad del empleado: %6d", Str.edad);
}

void mostrarVecStruc (struct Lista vecStr[], int tam){
    int i;

    for (i=0; i < tam; i++) {
        mostrarStruc(vecStr[i]);
    }
}

// Informar los Datos completos del o los empleados de mayor antigüedad

void mayorEdad (struct Lista vecStr[], int tam){
    int i, posMax, maxAnt = vecStr[0].edad;

    for (i = 1; i < tam; i++) {
        if (maxAnt < vecStr[i].edad){
            maxAnt = vecStr[i].edad;
            posMax = i;
        }
    }
    mostrarStruc(vecStr[posMax]);
}

// Informar los Empleados que superen o igualen el sueldo promedio, informando sus tres atributos.

void infoPromedio (struct Lista vecStr[], int tam){
    int i;
    float pro = 0;

    for (i = 0; i < tam; i++) {
        pro += vecStr[i].sueldo;
    }
    pro = (float) pro / tam;
    for (i = 0; i < tam; i++) {
        if (vecStr[i].sueldo >= pro) {
            mostrarStruc(vecStr[i]);
        }
    }
}