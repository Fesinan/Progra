#include <stdio.h>
#include <string.h>
#define N 3

struct materia {
char nombre[50]; 
int código; 
int correlativas[5];
};

void LeeChar(char [], int );
void LimpBuf();
void Cargar(struct materia []); 
void correlativas( struct materia vec[], int ce, char materia[]); 

int main()
{
    struct materia Datos[N];
    char Nombre[50];
    Cargar(Datos);
    printf("\n\n\tcual es el nombre de la materia a buscar: ");
    LeeChar(Nombre, 50);
    correlativas(Datos,N,Nombre);
    return 0;
}

void LeeChar(char cad[], int n){
	int i, c;
	i=0;
	c=getchar();
	while (c!='\n' && c!=EOF && i<n-1) {
		cad[i]=c;
		c=getchar();
		i++;
	}
	cad[i]='\0';
	while (c!='\n' && c!=EOF ) {
		c=getchar();
	}
}

/*
void LimpBuf() {
  char c;
  c = (char) getchar();
  while (c != EOF && c != '\n')
    c = getchar();
}
*/

void Cargar(struct materia Datos[])
{
    int i,j;

    for(i=0;i<N;i++)
    {
        printf("\ningrese un nombre: ");
        LeeChar(Datos[i].nombre, 50);
        printf("\ningrese el codigo: ");
        scanf("%d",&Datos[i].código);
        for ( j = 0; j < 5; j++)
        {
        printf("\ningrese las correlativas: ");
        scanf("%d",&Datos[i].correlativas[j]);
        }
        getchar();
    }
}

void correlativas( struct materia vec[], int ce, char materia[])
{
    int i,j;


    for (i = 0; i < N; i++)
    {
        if (strcmp(vec[i].nombre,materia)==0)
        {
            for (j = 0; j < ce; j++)
            {
                printf("\n\n\tlas correlativas de la materia %s son %d",vec[i].nombre,vec[i].correlativas[j]);
            }
        }
    }

    for (i = 0; i < N; i++) {
      j = 0;
      while (!vec[i].correlativas[j] && j < ce)
        j++;
      if (j < ce) {
        printf("\n\n\t La materia %s si posee correlativas", vec[i].nombre);
      }else {
        printf("\n\n\t La materia %s no posee correlativas", vec[i].nombre);
      }
    }
}