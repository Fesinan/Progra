/** Obtener el promedio de  5 numeros Enteros **/
#include <stdio.h>
main()
{
  int SUM = 0, CONT, NRO;
  float PROM;
  for (CONT = 1 ; CONT <= 5 ; CONT ++)
    {
      printf ("\n INGRESE NUMERO ")	;
      scanf ("%d",&NRO);
      SUM +=NRO;   // SUM = SUM + NRO;
    }
   //PROM =  SUM /5. ;   // AQUI SE DIVIDE UN ENTERO Y UN REAL, EL RESULTADO ES UN REAL
   PROM =  (float)SUM /5 ;
    //PROM =  SUM /5 ;   // ESTO ESTA MAl, PORQUE HACER UNA DIVISION DE ENTEROS
  printf("\nEL PROMEDIO ES %.2f",PROM);
}
