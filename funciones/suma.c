#include <stdio.h>

int genesum(int , int );

int main (){
    int num1, num2;

    printf(" INGRESE UN NUMERO: ");
    scanf("%d", &num1);

    printf(" INGRESE OTRO NUMERO: ");
    scanf("%d", &num2);

    printf (" LA SUMA DE LOS NUMEROS INGRESADOS ES :  %d \n", genesum(num1, num2));
}

int genesum (int num1, int num2){
    /*int sum;

    sum = num1 + num2;

    return sum;*/
    return (num1+num2);
}
