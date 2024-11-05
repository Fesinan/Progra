#include <stdio.h>

int main(void) {
  int  contra, con, num;
  contra = 25364;
  con = 0;

  do {

    printf("Ingrese una contrasenia: ");
    scanf("%d", &num);
    con++; 
  } while (num != contra && con != 3);

  if (con < 3) {
    printf("Contracenia correcta");
  }
  else {
    printf("Contracenia incorrecta, se terminaron los 3 intentos.");
  }
  return 0; 
}