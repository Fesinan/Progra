/**Ingresar 3 Nros. ENTEROS. Determinar si son pares o impares**/
/**************************************************************/
#include <stdio.h>
main()
{
  int NRO, CONT;
  for (CONT = 1 ; CONT <= 3 ; CONT ++)
    {
      printf ("\n INGRESE NUMERO % d : ", CONT );
      scanf ("%d",&NRO);
      if ( NRO %2 == 0)
         printf("\n EL NRO ES PAR\n");
      else
         printf("\n EL NRO ES IMPAR\n");
    }
}
