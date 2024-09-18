#include <stdio.h>

int main(){
    int num1, num2, num3, can;    
    float pro;

    printf("Ingrese tres numeros enteros: \a");
    can=scanf("%d%d%d", &num1, &num2, &num3);

    pro=(float) (num1+num2+num3)/can;

    printf("\a El promedio de esos numeros es: %.3f\n", pro);
}
