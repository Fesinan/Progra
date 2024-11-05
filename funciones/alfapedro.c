#include <stdio.h>

int seccion (int);
int edad (int);
float promedio (int, int);

int main() {
	
	int dni, section_mayor, edad_mayor = 0, sueldo, acum_sueldo = 0, total_sueldo, cont_dni, section = 0, age;
	int dni_mayor = 0, sueldo_mayor = 0, section1 = 0, section1_sum = 0, section2 = 0, section2_sum = 0, section3 = 0, section3_sum = 0, edad30_40 = 0;
		
	printf("Ingrese el DNI: ");
	scanf("%d", &dni);
	
	for (cont_dni = 0 ; dni > 0; acum_sueldo++) {
		
		do {
			printf("Ingrese su edad: ");
			scanf("%d", &age);
			
			if (edad(age) == 0) {
				printf("Edad no apta.\n");
				
			}

		} while (edad(age) == 0);
		
		do{
			printf("Ingrese su numero de seccion: ");
			scanf("%d", &section);
			
			if (seccion(section)==0)
				printf("Ingrese una seccion valida.\n");
			
			if(section==1) {
				section1++;
				section1_sum += age;
			}
			
			else if(section==2) {
					section2++;
					section2_sum += age;
			}
				
			else if(section==3) {
					section3++;
					section3_sum += age;
				}
	
		} while (seccion(section)==0);
		
		printf("Ingrese su sueldo: ");
		scanf("%d", &sueldo);
		
		total_sueldo += sueldo;
		
		if (sueldo > sueldo_mayor) {
			sueldo_mayor = sueldo;
			edad_mayor = age;
			dni_mayor = dni;
			section_mayor = section;
		}
		
		if(section==1) {
			if(age >= 30 && age <= 40)
				edad30_40++;
		}
		
		printf("Ingrese el DNI: ");
		scanf("%d", &dni);
	}	
	
		
		printf("\n El sueldo mas alto es %d y es del DNI %d, tiene %d años y es de la seccion %d\n", sueldo_mayor, dni_mayor, edad_mayor, section);
		printf(" Promedio edad seccion 1: %.2f\n", promedio(section1_sum, section1));
		printf(" Promedio edad seccion 2: %.2f\n", promedio(section2_sum, section2));
		printf(" Promedio edad seccion 3: %.2f\n ", promedio(section3_sum, section3));
		printf("%d operarios entre 30 y 40 trabajan en el sector 1.\n", edad30_40);
		printf(" El sueldo promedio de la fabrica es de %.2f", promedio(total_sueldo, acum_sueldo));
		
		return 0;
}

int seccion (int num) {

	if (num <= 3 && num > 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int edad (int A) {
	
	if(A >= 18 && A <= 65){
		return 1;
	}
		return 0;
}

float promedio (int valor1, int valor2) {
	
	float cuenta = (float) valor1 / valor2;
	
	if (valor2 > 0) {	
		return cuenta;
	}
	else {
		return 0;
	}
}
