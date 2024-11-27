#include <stdio.h>
#include <conio.h>
#define N 100

struct Empleado
{
    char Nombre[81];
    float Sueldo;
    int Antiguedad;
};

void Carga(struct Empleado []);
void Antiguedad(struct Empleado []);
void Promedio(struct Empleado []);


int main ()
{
    struct Empleado Datos[N];

    Carga(Datos);
    Antiguedad(Datos);
    Promedio(Datos);

    return 0;
}

void Carga(struct Empleado Datos [])
{

    int i;

    for (i=0;i<N;i++)
    {
        printf("\ningrese nombre y apellido: ");
        fflush(stdin);
        gets(Datos[i].Nombre);

        printf("\ningrese el sueldo: ");
        scanf("%f",&Datos[i].Sueldo);

        printf("\ningrese la antiguedad: ");
        scanf("%d",&Datos[i].Antiguedad);
    }
}

void Antiguedad(struct Empleado Datos[])
{
    int i,j,Antiguedad;

    for ( i = 0; i < N; i++)
    {
        if (i==0 || Datos[i].Antiguedad>Antiguedad)
        {
            Antiguedad=Datos[i].Antiguedad;
        }
    }
    for ( j = 0; j < N; j++)
    {
        if (Datos[j].Antiguedad=Antiguedad)
        {
            printf("el empleado con la mayor antiguedad es %s, su sueldo es de %.2f y tiene una antiguedad de: %d",Datos[j].Nombre,Datos[j].Sueldo,Datos[j].Antiguedad);
        }
    }
}

void Promedio(struct Empleado Datos [])
{
    int i,Suma=0,Promedio=0;

    for ( i = 0; i <N; i++)
    {
        Suma+=Datos[i].Sueldo;
    }
    Promedio=(float)Suma/N;

    for ( i = 0; i < N; i++)
    {
       if (Datos[i].Sueldo>=Promedio)
       {
        printf("el empleado que tiene un sueldo igual o mayor al promedio es %d, su sueldo es %.2f y tiene una antiguedad de %d",Datos[i].Nombre,Datos[i].Nombre,Datos[i].Antiguedad);
       }
    }
}