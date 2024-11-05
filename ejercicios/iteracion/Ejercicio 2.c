/*2.	Se ingresa un número entero entre 1 y 10. Hallar su factorial.
      Por ejemplo factorial de 5! es 5*4*3*2*1  0 1*2*3*4*5   */
#include <stdio.h>
main()
{
  int NRO, CONT;
  int FAC = 1;  // variable donde se va a generar el factorial
  printf("\nINGRESAR NUMERO QUE QUIERE OBTENER EL FACTORIAL ");
  scanf("%d",&NRO);
  if (NRO>=1 && NRO <=10)  
  	{
	  for(CONT=NRO;CONT>0;CONT--)  // aqui el ciclo for a ir ->  5*4*3*2*1
     		FAC = FAC * CONT;  //se calcula la productoria
     	  printf("\n EL FACTORIAL DE %d es %d ", NRO, FAC);
      }
  else
      printf("\nEL NUMERO TIENE QUE SER ENTRE 1 y 10 ");
}

     
     
