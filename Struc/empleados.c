#include <stdio.h>
#define N 5

struct Lista{
    char ApellidoNombre [81];
    float sueldo;
    int edad;
}

int main (void){

}

void LeeChar(char cad[], int n){
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
	while (c!='\n' && c!=EOF ) {
		c=getchar();
	}
}

void LimpBuf(){
char c;
c=getchar();
while (c!=EOF && c!='\n')
	c=getchar();
}

void CargaVecEstruc (struct Lista vecStr[], int tam){
    int i;

    for (i=0; i < tam; i++) {
        printf("\n\n\t Ingrese el nombre del empleado: ");
        LeeChar(vecStr[i].ApellidoNombre, 81);
        LimpBuf();
        printf("\n\n\t Ingrese el sueldo: ");
        scanf("%f", &vecStr[i].sueldo);
        printf("")
    }
}
