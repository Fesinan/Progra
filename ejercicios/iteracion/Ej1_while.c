/****SE ingresa Nros. enteros. Finaliza con numero igual a cero.
  Obtener el promedio de los numeros positivos***/
#include <stdio.h>
main()
{
  int  CONTPOS, NRO,  SUMPOS;
  SUMPOS =  CONTPOS = 0;  // SOLO VALIDO PARA UN MISMO TIPO DE DATO
  
  printf ("\n INGRESE NUMERO (FINALIZA CON CERO) ")	;
  scanf ("%d",&NRO);
  while (NRO != 0)
  {
      if (NRO > 0)
        {
        	SUMPOS += NRO;  // SUMPOS = SUMPOS + NRO;
        	CONTPOS ++;     // CONTPOS = CONTPOS + 1;

        }
    printf ("\n INGRESE NUMERO ")	;
    scanf ("%d",&NRO);
  }
    if( CONTPOS > 0)   // HAY QUE VERIFICAR SI SE INGRESARON NUMEROS POSITIVOS
       printf("\nEL PROMEDIO DE POSITIVOS ES %.2f",(float)SUMPOS/CONTPOS);
	else
	   printf("\nNO SE INGRESARON POSITIVOS");
}
