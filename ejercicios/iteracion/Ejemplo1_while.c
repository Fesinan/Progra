/*********************************
  SE INGRESAN NUMEROS ENTEROS.
  FINALIZA CON CERO.
  SUMAR LOS NUMEROS INGRESADOS
**********************************/
#include <stdio.h>
main()
{
  int NRO, SUM;
  SUM = 0;
  
  printf("\nINGRESAR NUMERO (termina con cero): ");
  scanf ("%d",&NRO);
 
  while (NRO != 0)
  {
    SUM +=NRO;
    
    printf ("\nINGRESAR NUMERO (termina con cero): ");
    scanf("%d",&NRO);
  }
  printf("\nLA SUMA ES %d",SUM);
}
