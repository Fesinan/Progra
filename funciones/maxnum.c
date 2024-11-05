#include <stdio.h>

int maxNum (int, int);

int main(){
    int num1, num2;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num1);

    printf("Ingrese otro numero entero: ");
    scanf("%d", &num2);

    printf("El maximo de ambos numeros es: %d \n",maxNum(num1, num2));

}

int maxNum (int a, int b){
    int resu;

    if (a>b) {
        resu = a;
    }else {
        resu = b;
    }

    return resu;
}
