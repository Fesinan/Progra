#include <stdio.h>
#include <math.h>

int main(void){
    int pri, i, num;
    pri = 1; 

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    for (i = 2; pri && i <= sqrt(num); i++) {
        if (!(num % i)) {
            pri = 0;
        }
    }

    if (pri) {
        printf("es primo \n");
    }
    else {
        printf("no es primo \n");
    }

    printf("\n\n\n \t\t Fin del Programa\n");

    return 0;
}
