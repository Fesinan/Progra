//SUMAR LOS PRIMEROS N NUMEROS NATURALES PARES
// EJEMPLO SI N = 5 -> SE SUMA 2 + 4 + 6 + 8 + 10  = 30
#include <stdio.h>
main()
{
  int SUM, N,CONT;
  SUM = 0;
  printf("\nINGRESAR CANTIDAD DE NUMEROS : ");
  scanf ("%d",&N);
  for (CONT = 2 ; CONT <= 2*N ; CONT+=2)
    {
     SUM +=CONT;     // SUM = SUM + CONT;
    }
  printf("\nLA SUMA DE LOS PRIMEROS %d NUMEROS NATURALES ES %d",N, SUM);
}
