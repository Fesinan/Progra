#include <stdio.h>

int main(){
    double r, circunferencia, superficie;

    printf("Ingrese el valor del radio de la circunferencia: ");
    scanf("%lf", &r);

    circunferencia = 2 * 3.14 * r;
    superficie = r * r * 3.14;

    printf("\n El valor de la superficie es: %f", superficie);
    printf("\n El valor de la circnferencia es: %f", circunferencia);
}
