

#include <stdio.h>
int main(void) {

  int num;
  printf("\n\n\n\n INICIO DE PROGRAMA\n");

  printf("Ingrese un numero(para dejar ingrese -1): ");
  scanf("%d", &num);

  while (num >= 0) {

    if (!(num % 2)) {
      printf("El numero %d es par \n", num);
    } else {
      printf("El numero %d es impar \n", num);
    }

    printf("Ingrese un numero(para dejar ingrese -1): ");
    scanf("%d", &num);
  }

  printf("\n\n\n\n\t\t FIN DE PROGRAMA\n");
  getchar();
  return 0;
}