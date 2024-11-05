/*3.	Se ingresa N y N números naturales. Determinar:
a-) La cantidad de valores múltiplos de 3.
b-) La suma de los valores que se ingresaron en orden par.
c-) El promedio de los números múltiplos de 5 pero no múltiplos de 3.*/
#include <stdio.h>
main()
{
 int N, NRO,CONT;
 int CONT_MUL3 =0; // contador de numeros multilpos de 3
 int SUM_PAR=0; // acumular(sumador) de numeros cuando el orden de ingreso (CONT) es par
 int SUM_MUL5_NO3=0; // sumador de numeros multiplos de 5 y no de 3
 int CONT_MUL5_NO3=0; // contador de numeros multiplos de 5 y no de 3
 
 printf("\nINGRESAR CANTIDAD DE NUMEROS ");
 scanf("%d",&N);
 if (N>0)  // se verifica el ingreso de cantidad de numeros (N) mayor que cero
 { // inicio if
 
   for(CONT=1;CONT<=N;CONT++)   // ingresamos N numeros
    { // inicio bloque del for
    	printf("\nINGRESAR NUMERO ");
      scanf("%d",&NRO);
      if(NRO%3 == 0)  // se verifica si NRO es multiplo de 3 y si es se cuenta
          CONT_MUL3++;
      if(CONT%2 == 0)  // se verifica si CONT (orden de ingreso) es par y si es se suma el numero
          SUM_PAR+=NRO;
      if ((NRO%5 == 0) && (NRO%3 != 0)) //se verifica si NRO es multiplo de 5 y NO de 3 
          {                             // si se cumple
          	SUM_MUL5_NO3+=NRO;  	    // se suma el NRO
          	CONT_MUL5_NO3 ++;		    // se cuenta 	
          }
    } // fin bolque del for
    // informes
    printf("\nCANTIDAD DE NUMEROS MULTIPLOS DE 3 : %d",CONT_MUL3);
    printf("\nSUMA DE NUMEROS INGRESADOS EN ORDEN PAR : %d",SUM_PAR);
    if (CONT_MUL5_NO3!=0 ) // se verifica si hay algun numero multiplo de 5 y no de 3. NO SE PUEDE DIVIDIR 0/0
    	 printf("\n PROMEDIO DE NUMEROS MULTIPLO DE 5 Y NO DE 3 : %.2f", (float)SUM_MUL5_NO3/CONT_MUL5_NO3);
    else
    	 printf("\n NO EXISTE NINGUN NUMERO MULTIPLO DE 5 Y NO DE 3 ");	 
 } // fin if
 else
  printf("\n LA CANTIDAD DE NUMEROS (N) )TIENE QUE SER POSITIVA ");
  
}
 
 	
	
	
	
	
	
	


