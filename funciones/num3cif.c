#include <stdio.h>

int num3cifra(int);
int vocalOCon(char);

int main(void){
    int num;
    char letra;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    num3cifra(num);

    getchar();

    printf("Ingrese una letra: ");
    scanf("%c", &letra);

    vocalOCon(letra);

    return 0;
}

int num3cifra(int a){
    int resu;
    if(a >= 100 && a <= 999){
        printf("El numero %d es de 3 cifras \n", a);
        resu = 1;
    }else{
        printf("El numero %d no es de 3 cifras \n", a);
        resu = 0;
    }

    return resu;
}

int vocalOCon(char a){
    int resu;
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
        printf("La letra %c es una vocal \n", a);
        resu = 1;
    }else {
        printf("La letra %c no es una vocal \n", a);
        resu = 0;
    }

    return resu;

}
