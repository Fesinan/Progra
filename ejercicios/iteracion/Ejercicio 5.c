/*5.Se ingresan números hasta uno negativo. Hallar el promedio de los números ingresados*/
#include <stdio.h>
main()
{
 int NRO, SUM, CONT;
 SUM = CONT = 0; // se inicializa el acumular y contador, como son del mismo tipo se puede expresar asi.
  
 printf("\nINGRESAR NUMERO (termina con negativo ) ");
 scanf("%d",&NRO);  // se ingresa  primer numero
 while(NRO>=0)	 // mientras que el numero ingresado NO se negativo
  { // inicio del while
    SUM += NRO; // suma del numeros ingresados
    CONT ++; // cuenta los numeros ingresados
    printf("\nINGRESAR NUMERO (termina con negativo ) ");
    scanf("%d",&NRO);  // se ingresa  demas numeros, lo que provoca la repeticion del while	
  }  // fin del while
  /* como la estructura while puede ser que no se ejecute nunca, cuando el primer ingreso 
  ya es condicion de fin, la obtener el promedio (sumador/contador) siempre se tiene que verificar 
  que sea el contador distinto de cero, para evitar la division por cero */
  if (CONT > 0)
     printf("Promedio de valores ingresados %.2f", (float)SUM/CONT);
  else
     printf("NO SE INGRESARON VALORES");
}
  
