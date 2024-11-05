#include <stdio.h>
#include <math.h>

int main(void){
    int pri, i, num;
    float pote;
    pri = 1; pote = 2;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num>0) {

        for (i = 2; pri && i <= sqrt(num); i++) {
            if (!(num % i)) {
                pri = 0;
            }
        }

        if (pri) {
            pote = pow(pote, num);
            printf("La potencia del numero es %.2f\n", pote);
            pote--;
            printf("El numero M de %d es %.2f\n", num, pote);
        }
        else {
            printf("no es primo \n");
        }

    }else {
        printf("no es positivo\n");
    }

    printf("\n\n\n \t\t Fin del Programa\n");

    return 0;
}
