#include <stdio.h>

int main () {
    int celcius, kelvin, farenheit, decision;
    printf("elija un numero de el 1 al 3, 1 es celcius, 2 es kelvin, 3 es farenheit: \n");
    scanf("%d", &decision);

    if (decision == 1) {

        scanf("\n %d", &celcius);
        kelvin = celcius + 273;
        farenheit =  celcius + 32;
        printf(" la temperatura celcius es: %d \n", celcius);
        printf(" la temperatura de kelvin es %d \n", kelvin);
        printf(" la temperatura de farenheit %d \n", farenheit);
    }

    else if (decision == 2){

        scanf("\n %d", &kelvin);
        celcius = kelvin - 273;
        farenheit = (kelvin - 273) + 32;
        printf(" la temperatura kelvin es: %d \n", kelvin);
        printf(" la temperatura de celcius es %d \n", celcius);
        printf(" la temperatura de farenheit %d \n", farenheit);

    }
    else if (decision == 3) {
        scanf("\n %d", &farenheit);
        celcius = (farenheit - 32);
        kelvin = (farenheit - 32) + 273;
        printf(" la temperatura farenheit es: %d \n", farenheit);
        printf(" la temperatura de kelvin es %d \n", kelvin);
        printf(" la temperatura de celcius %d \n", celcius);

    }


}
