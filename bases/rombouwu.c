#include <stdio.h>

int main (){
    float D, d, are;
    printf("Ingrese las diagonales de un rombo: ");
    scanf("%f%f", &D, &d);
    are=(D*d)/2;
    printf("El area es: %.3f\n", are);
}
