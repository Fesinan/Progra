/***********************************************************************************************
En un negocio trabajan 4 vendedores, cuyos códigos son numeros correlativos de 1 a 4.
Cada vez que se realiza una venta, se emite una factura, donde se indica:
o	Número de Factura
o	Código  de vendedor
o	Importe de la venta.
La información termina con Número de Factura igual a cero.
Se pide informar:
1-) Recaudación  por  vendedor.
2-) Cantidad de facturas emitidas por vendedor.
3-) Recaudacion total del negocio.
*/
/************************************************************************************************/

#include <stdio.h>
#define tam 4

int ingreso_rangoINT(int, int);
void print_vec(int [], float [], int);

int main(void) {
    int facXven[tam] = {0}, fact, ven;
    float recaudacion, recTotal = 0, recXven[tam] = {0};

    printf("\tIngrese Nro de factura (0 Para terminar): ");
    scanf("%d", &fact);

    while (fact > 0){
        printf("\t\nIngrese el Nro del vendedor (de 1 a 4): ");
        ven = ingreso_rangoINT(1, 4);
        
        printf("\t\nIngrese el importe de la venta: ");
        scanf("%f", &recaudacion);

        recTotal += recaudacion;
        facXven[ven - 1]++;
        recXven[ven - 1] += recaudacion;

        printf("\tIngrese Nro de factura (0 Para terminar): ");
        scanf("%d", &fact);
    }
    if (recTotal) {
        printf("La recaudacion total es: %.2f", recTotal);
        printf("\n\n \t La recaudacion por vendedor fue: ");
        printf("\n\n \t Codigo \t Ventas por Vendedor \t Recaudacion por Vendor \n");

        print_vec(facXven, recXven, tam);
    }
    else 
        printf("\n\n \t No se ingreso ningun valor \n\n");

    return 0;
}

/******************************** 
 *   Declaracion de Funcionesl  *
 ********************************/

int ingreso_rangoINT(int inicio, int fin){
    int dato;

    do {
        scanf("%d", &dato);
        if (dato < inicio || dato > fin) 
            printf("Ingrese de vuelta, un numero entero entre 1 y 4: ");
    }while (dato < inicio || dato > fin);

    return dato;
}

void print_vec(int entero[], float real[], int N){
    int i;
    for (i = 0; i < N; i++) {
        printf("\n \t %4d \t\t %4d \t\t %4.2f", i+1, entero[i], real[i]);
    }
        printf("\n");
}

/*void carga(int ve[], int ce){

    int i;

    for(i = 0; i < ce; i++){
        printf("Ingrese un valor: ");
        scanf("%d", &ve[i]);
    }

}*/
