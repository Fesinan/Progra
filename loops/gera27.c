#include <stdio.h>

int main()
{

int fact, cantcomp, cantfact;
float precunit, importefact, rectotal;

rectotal = 0;
cantfact = 0;

printf ("INGRESE EL NRO DE FACTURA  ");
scanf ("%d", &fact);


while (fact > 0)
    {
    cantfact++;

    printf (" INGRESE LA CANTIDAD DE COMPRA ");
    scanf ("%d", &cantcomp);

    printf (" INGRESE EL PRECIO UNITARIO ");
    scanf ("%f", &precunit);

    importefact = precunit * cantcomp;

    if (importefact > 10000){

        importefact = importefact * 0.9;

    }

    rectotal = rectotal + importefact;

    printf(" IMPORTE DE CADA FACTURA: %.2f\n", importefact);

    printf ("INGRESE EL NRO DE FACTURA  ");
    scanf ("%d", &fact);


    }

printf(" RECAUDACION TOTAL: %.2f\n", rectotal);
printf(" CANTIDAD DE FACTURAS: %d\n", cantfact);




}
