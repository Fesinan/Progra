/******************************************
SE INGRESAN 10 LETRAS . INDICAR CUANTAS LETRAS A SE INGRESARON
****************************************************************/
#include <stdio.h>
main()
{
  int CONT, CONT_A = 0;
  char LETRA;
  for (CONT = 1 ; CONT <= 10 ; CONT ++)
  {
    printf("\nINGRESAR LETRA : ");
    fflush(stdin);  // BORRA EL ENTER - LIMPIA EL BUFFER DE ENTRADA
    scanf (" %c",&LETRA); // OTRA FORMA DE SACAR EL ENTER ES EL ESPACIO DENTRO DEL scanf

    if (LETRA == 'A' || LETRA == 'a')
       CONT_A ++;
  }
  printf("\nLA CANTIDAD DE LETRA  A o a INGRESADAS ES %d",CONT_A);
}
