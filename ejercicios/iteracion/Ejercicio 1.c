/*1.	Se ingresa un Nro. y se informa la tabla de multiplicar del 1 al 10.*/
#include <stdio.h>
main()
{
  int NRO, CONT;
  printf("\nINGRESAR NUMERO QUE QUIERE INFORMAR LA TABLA DE MULTIPLICAR ");
  scanf("%d",&NRO);
  if (NRO>0)  // se verifica que numero sea positivo, mayor que cero
  { // inicio if
   printf ("\n\t TABLA DEL %d \t", NRO);
   for(CONT=1;CONT<=10;CONT++)  //tabla del 1 al 10
   	printf ("\n\t %3d X %3d = %3d", NRO , CONT , NRO * CONT);	
  } //fin if
  else
    printf("\n EL NUMERO TIENE QUE SER POSITIVO ");
}
