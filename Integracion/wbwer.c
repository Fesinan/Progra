#include <stdio.h>
#include <string.h>
#define N 3

struct materia {
char nombre[50]; 
int código; 
int correlativas[5];
};
void Cargar(struct materia []); 
void correlativas( struct materia vec[], int ce, char materia[]); 



int main()
{
    struct materia Datos[N];
    char Nombre[50];
    Cargar(Datos);
    printf("cual es el nombre de la materia a buscar: ");
    fflush(stdin);
    gets(Nombre);
    correlativas(Datos,N,Nombre);
    return 0;
}
void Cargar(struct materia Datos[])
{
    int i,j;

    for(i=0;i<N;i++)
    {
        printf("\ningrese un nombre: ");
        fflush(stdin);
        gets(Datos[i].nombre);
        printf("\ningrese el codigo: ");
        scanf("%d",&Datos[i].código);
        for ( j = 0; j < N; j++)
        {
        printf("\ningrese las correlativas: ");
        scanf("%d",&Datos[i].correlativas[j]);
        }

    }
}
void correlativas( struct materia vec[], int ce, char materia[])
{
    int i,j;


    for (i = 0; i < ce; i++)
    {
        printf("ingrese nombre de la materia a buscar: ");
        gets(vec[i].nombre);

        if (strcmp(vec[i].nombre,materia)==0)
        {
            for (j = 0; j < N; j++)
            {
                printf("las correlativas de la materia %s son %d",vec[i].nombre,vec[i].correlativas[j]);
            }

        }
        else
        printf("no existe la materia");
    }
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            if (vec[i].correlativas[j]==0)
        {
            printf("la materia %s no tiene correlativas ",vec[i].nombre);
        }
        }

    }

}