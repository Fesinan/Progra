/*
repaso  28 septiembre laborarotorio   RECIBO DE SUELDO
Ejercicio Nro. 3: 
Realizar un programa que permita el ingreso de los siguientes 
datos de 30 vendedores: Código de vendedor, sueldo, género (F o M), unidades vendidas en el mes por el vendedor y antigüedad en años. 
Se pide:

1)  Calcular e informar los descuentos y aumentos teniendo en cuenta los siguientes parámetros:
a)	Si ha vendido menos de 10 unidades en el mes se descontará 10% de su sueldo tras informar "rendimiento bajo".
b)	Si la antigüedad es mayor o igual a 30 años y las unidades vendidas son mayores o iguales a 50 
    se incrementará 35% de su sueldo.
c)	Si vende más de 100 unidades, se incrementará un 50% a su sueldo tras informar "rendimiento alto".

2)  Informar cuántos vendedores son mujeres y cuántos hombres.

3)   Calcular e informar 
el total en pesos de sueldos sin aumentos ni descuentos
, total en pesos de descuentos
, total en pesos de aumentos y
 total en pesos de sueldos finales a pagar por la empresa a todos sus empleados.
OBSERVACIÓN:   Debe utilizarse la estructura switch donde sea posible. :*/

#include<stdio.h>

int main(){
	
// declaracion de variables  EN LAS DECALARACION NO VAN IGUAL salvo cuando se declara y tambien se asigna valor	

int codigo,unidades,antig,i,mascTot,femTot,contfem=0,contmasc=0;
float sueldo=0,bruto=0,neto=0,aum=0,desc=0,desctot=0,rend=0,aumtot=0;
char genero,fem,masc;

// ingreso del tope; estrura for   / FOR NO LLEVA IGUAL 
// el print de pantalla no lleva %f2f  

for(i=1;i<30;i++){  

// ingreso codigo
		printf("ingrese el codigo");
		scanf("%d",&codigo);
		printf("\n el codigo es:%d\n",codigo);

// ingreso sueldo
		printf("ingrese su sueldo");
		scanf("%f",&sueldo);
		printf("\n el sueldo es:%.2f\n",sueldo);	

// ingreseo de antiguedad

		printf("ingrese antig");
		scanf("%fd",&antig);
		printf("\n la antiguedad es:%.d\n",antig);
		

// ingresa unidades 

		printf("ingresar unidades vendidas");
		scanf("%d",&unidades);
		printf("\n nunidades vendidas:%.d\n",unidades);
						}// llave de dierre del for
		
//  1)Calcular e informar los descuentos y aumentos teniendo en cuenta los siguientes parámetros:
	
	//a)si ha vendido menos de 10 unidades en el mes se descontará 10% de su sueldo tras informar "rendimiento bajo".
		// calculamos el descuento  sueldo como es 10% se multiplica por 0.1 
		
	if (unidades<10){
		
		desc= sueldo*0.1;  // se saca el descuento que da en la variable descuento
	
		printf("rendimento bajo");
		scanf("%.2f",&antig);
					}// lla cierra if
	
	
	
	/*b)si la antigüedad es mayor o igual a 30 años y las unidades vendidas 
	son mayores o iguales a 50 se incrementará 35%   de su sueldo. 
	{ el  35% se multiplica por 0.35 por  es =a multiplicar  el (suelto x 35 )/100} */	
	
		// calculo de antiguedad y aumento del 35%   
		 
    if (unidades>= 50 && antig>30){  // no se pone punto y coma e los  if 
    	
		aum=sueldo*0.35;
    				}
	
 //d)Si vende más de 100 unidades, se incrementará un 50% a su sueldo tras informar "rendimiento alto".
	/* calculo de aumento por antiguedad y aumento 50 % es = a (100x50) /100=50  iagual a sueldo=*0.50   */
	
		// calculo del rendimiento alto 
		
		
	if (unidades>100){
		printf("rendimiento alto");
	
		aum=sueldo*0.50;
					
		 			}// llave de cierre del if rendimiento alto
		
// punto 3  calculo de femenino masculino xd 

		
	printf("ingrese f si es femenino o m si es masculino");
	        
		
		
	switch( genero){// se coloca el nombre del a varible entre parentesis
	   
	   	case 'f': // f miniscul 
		case 'F':fem++;// f mayuscula
		break;
	   
	   
	   
	   case	'm':
	   case	'M':masc++;
		   	break;
		   	
	contMasc=+'M'+'m';
	contFem+=+'f'+'F';
		   	   
		   }
	   			
		defalutl:printf("valor ingrasado invalido");  // es el fin si no ingresa el factor correcto detecta error y vuelve

			}	// llave de cierre sitch
			
	cont
			
// hay que agregar un contador para ver cuantos hombres y cuantas mujeres			
/* un cocntador es  una variable cuyo valor se incrementa o decrementa en una cantidad constante en cada iteraccion
 puede ir 1+1+ 2+2 de 2 en 2   
el acumulador   es una variable cuya mision es acumular cantidaes variables provenientes de operaciones 
ejemplo como funciona el acumulador
va guardanado los resultados en una variable cuando se vuelve a ejecutar tiene un valor inicial y lo suma 
Ej en una tienda se compra un arroz 2000$ una leche vale 3000$ llega a un total de 5000$ pero 
luego quiere sumarle 1kg de papas agrega las papas pero ya tiene un valor que son los 5000$

sintaxis de contador
el nombre  conta
conta= conta+1
conta=conta-1

sintanxis de acumulador
el nombre acum
acum=acum+valor
al inicio ser  0
en la siguiente de la leche 3000 luego se le suma
en el segundo valor tiene 3000+ 2000 del siguiente producto
 



¿Qué son los CONTADORES y ACUMULADORES en C? - Curso de Programación en C | #11
https://www.youtube.com/watch?v=c0TGT2rj6Jg	            */

		
	
		
// calculos de resultados solicitados

bruto+=sueldo;  			// sueldo 
desctot-=desc;  			// resta descuentos
aumtot+=aum;   				// suma beneficios
neto+=(sueldo-desc+aum); 	// calculo sueldo bruto
mascTot+=contFem+1;
femTot+=contMasc+1;


// informe de todos los resultados

printf("total  sueldo bruto");
printf("total beneficios");
printf("total descuentos");
printf("total sueldo neto");
printf("total vendedores mujes");
printf("total vendedores masculinos");

printf("total sueldo bruto %2.f",sueldo);
printf("total descuentos totales %2.f",desctot);
printf("total aumentos totales %2f",aumtot);
printf("total sueldo neto &2.f"),neto;
printf("total vendedores mujes %d",fem);
printf("total vendedores masculinos",masc);


}

	
	
	




























