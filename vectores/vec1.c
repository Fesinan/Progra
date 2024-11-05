#include <stdio.h>
#define tam 5

void carga_vector (int [], float [], int);
int control_elemento (int , int);
void informe_vector (int a[], float b[], int t);
void informar_mayor (int [], float [], int);
int posicion_mayor (float [],int [], int);
void informar_busqueda (int [], float[], int);

int main (void) {
    int codigo[tam];
    float precio[tam];

    carga_vector(codigo, precio, tam);

    informar_mayor (codigo, precio, tam);

    informar_busqueda(codigo, precio, tam);
    informe_vector(codigo, precio, tam);



    return 0;
}

void carga_vector (int a[], float b[], int t){
    int i;

    for (i = 0; i < t ; i++){
        printf("Ingresa el codigo: ");
        a[i] = control_elemento(100, 999);

        printf("Ingrese el precio del producto: ");
        scanf("%f", &b[i]);
    }
}

int control_elemento(int inicio, int fin){
    int co;
    scanf("%d", &co);

    while (co < inicio || co > fin){
        printf("Ingrese de nuevo el codigo: ");
        scanf("%d", &co);
    }
    return co;
}

void informe_vector (int a[], float b[], int t){
    int i;

    for (i = 0; i < t ; i++){
        printf("\n\n\t El codigo es: %d", a[i]);
        printf("\n\n\t El precio del producto es: %.2f", b[i]);
    }
}

void informar_mayor (int a[], float b[], int t){
    int pos[t] , i, j;
    j = posicion_mayor (b, pos, t);

    printf("\n\t Los Productos con mayor precio son: \t");
    for (i = 0; i < j; i++)
        printf("%6d", a[pos[i]]);
}


int posicion_mayor (float a[], int pos[], int t){
    int i, j = 0;
    float sum = 0, pro;

    for (i = 0; i < t; i++)
        sum += a[i];

   pro = sum / t;

   for (i = 0; i < t; i++)
        if (a[i] >= pro){
            pos[j] = i;
            j++;
        }
   return j;
}

void informar_busqueda (int a[], float b[], int t) {
    int codigo, i;
    printf("\n ingrese el codigo que desea buscar\n");
    scanf("%d", &codigo);
    for(i = 0; i < t && codigo != -1; i++)
            if(a[i] == codigo) {
                    printf("\nel producto %d que busca cuesta %.2f", codigo, b[i]);
                    codigo = -1;
            }

      if(codigo != -1)
        printf("\nel producto no fue encontrado \n");
}

