/***SE INGRESAN 10 LETRAS . INDICAR CUANTAS LETRAS A SE INGRESARON
******************************************************************/
#include <stdio.h>
#include <ctype.h>

main()
{
  int CONT, CONT_A = 0;
  char LETRA;
  for (CONT = 1 ; CONT <= 10 ; CONT ++)
  {
    printf("\nINGRESAR LETRA : ");
    fflush(stdin);
    scanf (" %c",&LETRA);// se deja un espacio en C online para sacar el <ENTER> 

    LETRA = toupper(LETRA);  // convierte el caracter en mayuscula
    if (LETRA == 'A')
       CONT_A ++;
  }
  printf("\nLA CANTIDAD DE LETRA  A INGRESADAS ES %d",CONT_A);
}
