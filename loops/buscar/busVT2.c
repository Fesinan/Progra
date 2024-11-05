#include <stdio.h>

int main(){
    int num;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    if (num == 23) {
    printf("El numero es: %d\n", num);
    }
    else {
        printf("El numero no es 23, es %d\n", num);
    }


    return 0;
}