#include <stdio.h>

int main() {
    int catlog, i, j;

    printf("ingrese el tamaño de los catetos: ");
    scanf("%d", &catlog);

    for (i=0; i<catlog; i++) {
        for (j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");

/*        j=0;
        do {
        printf("*");
        j++;
        }while (j<=i);
        printf("\n");
    */

    }

}
