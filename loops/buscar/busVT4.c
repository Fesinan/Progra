#include <stdio.h>

int main() {
  int num, con;
  con = 0;

  do {

    printf("Ingrese un numero (para parar de ingrsar ponga 253): ");
    scanf("%d", &num);

    if (num == 23) {
        con++;
    }

  } while (num != 235);

  printf("Se ingresaron el numero 23 un total de: %d\n", con); 
  getchar();
  
  return 0;
}