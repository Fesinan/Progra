/** Sumar 5 numeros Enteros **/
#include <stdio.h>
main()
{
  int SUM, CONT, NRO;
  SUM = 0;
  for (CONT = 1 ; CONT <= 5 ; CONT ++)
    { printf ("\n INGRESE NUMERO ")	;
      scanf ("%d",&NRO);
      SUM +=NRO;   //SUM = SUM + NRO;

    }

  printf("\nLA SUMA ES %d",SUM);

}
