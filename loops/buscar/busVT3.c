#include <stdio.h>

int main() {
  int num;
  do {

    printf("Ingrese un numero (para parar de ingrsar ponga 253): ");
    scanf("%d", &num);

    if (num == 23) {
      printf("El numero es: %d\n", num);
    } 
    else {
      printf("El numero no es 23, es %d\n", num);
    }

  } while (num != 235);

  return 0;
}