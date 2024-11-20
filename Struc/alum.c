/* Se sabe que en una comisión de Programación hay 80 alumnos. De cada alumno se conoce:
 *	Número de DNI (entero)
 *	Apellido y Nombre (80 caracteres)
 *	Fecha de Nacimiento(Dia – Mes –Anio)
 *	Nota1, Nota2 (entero)
 *	Nota Promedio (real, calculado según Nota1 y Nota2)
 * Se solicita:
 * a. Declarar un tipo de dato que contenga la información del alumno.
 * b. Declarar un vector de estructuras del tipo de dato creado en el punto a.
 * c. Cargar en un vector de estructuras, los datos referentes a los alumnos de la comisión, Función INGRESO.
 * d. Indicar cuántos alumnos aprobaron (ambos parciales con nota >= 6 Función RESULTADO.
 * e. Indicar cuando alumnos Nacieron en el primer semestre del año
 */

#include <stdio.h>
#define CN 81
#define TN 3

struct Fecha {
	int dia, mes, anio;
};

struct Lista {
	int DNI, nota1, nota2;;
	char NomApe[CN];
	struct Fecha nacimiento;
	float Pro;
};

void IngresoStrucVec (struct Lista [], int);
void MostrarStrucVec (struct Lista [], int);
struct Fecha IngresoFecha ();
int INTLeerYControlar (int, int, int);
int Resultado (struct Lista[], int, int);
int Fecha (struct Lista[], int, int);

int main (void){

	struct Lista Alumnos[TN];
	int aprovados, enSemestre;

	IngresoStrucVec(Alumnos, TN);
	MostrarStrucVec(Alumnos, TN);

	aprovados = Resultado(Alumnos, TN, 6);
	enSemestre = Fecha(Alumnos, TN, 6);

	printf("\n\n\t La cantidad de personas que aprovaron fueron: %d", aprovados);
	printf("\n\n\t La cantidad de presonas que nacieron en el primer semestre fueron: %d", enSemestre);

	printf("\n\n");

	return 0;
}

/* Definicion de funciones */

/* Se controlan los DNIs, notas y fechas ingresadas  */

int INTLeerYControlar (int det, int ini, int fin){
	int dato, ban = 1;

	if(det >= -1 && det <= 1){

		do {
			scanf("%d", &dato);

			if (det == 0 && (dato < ini || dato > fin)) {
				printf("\n\t Ingrese de vuelta el dato (desde %d hasta %d): ", ini, fin);
			}else if (det == 1 && dato > fin) {
				printf("\n\t Ingrese de vuelta el dato (hasta %d): ",  fin);
			}else if (det == -1 && dato < ini) {
				printf("\n\t Ingrese de vuelta el dato (desde %d): ", ini);
			}else 
				ban = 0;
		}while (ban == 1);

		return dato;
	}else {
		printf("\n\n\t\t ERROR DETERMINANTE NO VALIDO \n\n");
		return -1;
	}
}

/* Ingresa el vector de estructura de cada alumno */

void IngresoStrucVec (struct Lista vec[], int tam){
	int i, sum;

	for (i = 0; i < tam; i++) {
		sum = 0;
		printf("\n\tIngresee el DNI del Alumno: ");
		vec[i].DNI= INTLeerYControlar(0, 10000000, 99999999);

		printf("\n\tIngrese el Nombre y apellido del alumno: ");
		//getchar();
		fflush(stdin);
		fgets(vec[i].NomApe, 81, stdin);

		printf("\n\tIngrese la fecha de nacimiento: \n");
		vec[i].nacimiento = IngresoFecha();

		printf("\n\tIngrese las notas del alumno, Nota 1 (0 a 10): ");
		vec[i].nota1 = INTLeerYControlar(0, 0, 10);
		sum += vec[i].nota1;
		printf("\n\tIngrese Nota 2 (0 a 10): ");
		vec[i].nota2 = INTLeerYControlar(0, 0, 10);
		sum += vec[i].nota2;

		vec[i].Pro = (float) sum / 2;
	}
}

/* Ingreso de sus fechas de nacimiento */

struct Fecha IngresoFecha (){
	struct Fecha ingreso;

	printf("\n\t\tIngrese el mes: ");
	ingreso.mes = INTLeerYControlar(0, 1, 12);
	
	printf("\n\t\tIngrese el dia: ");
	
	if ( ingreso.mes <= 7 && ingreso.mes % 2 || ingreso.mes >= 8 && !(ingreso.mes % 2) ){
		ingreso.dia = INTLeerYControlar(0, 1, 31);
	}else if ( ingreso.mes == 2) {
		ingreso.dia = INTLeerYControlar(0, 1, 29);
	}else {
		ingreso.dia = INTLeerYControlar(0, 1, 30);
	}
	
	printf("\n\t\tIngrese el anio: ");
	ingreso.anio = INTLeerYControlar(-1, 0, 0);

	return ingreso;
}

void MostrarStrucVec (struct Lista vec[], int tam){
	int i;
	printf("\n\n\n \t\t DATOS MUESTRA");

	for (i = 0; i < tam; i++) {
		printf("\n\tEl DNI del Alumno es: %d", vec[i].DNI);

		printf("\n\tEl Nombre y apellido del alumno es: %s", vec[i].NomApe);

		printf("\n\tLa fecha de nacimiento es: \n");
		printf("\n\t\t\t Dia: %05d \n\t\t\t Mes: %05d \n\t\t\t Anio: %06d", vec[i].nacimiento.dia, vec[i].nacimiento.mes, vec[i].nacimiento.anio);

		printf("\n\tLas notas del alumno son:\n");
		printf("\n\t\t\t Nota 1: %6d \n\t\t\t Nota 2: %6d", vec[i].nota1, vec[i].nota2);

		printf("\n\t El promedio de sus notas es: %6.2f", vec[i].Pro);
	}
}

int Resultado (struct Lista vec[], int tam, int punto){
	int i, can = 0;
	for (i = 0; i < tam; i++) 
		if (vec[i].nota1 >= punto && vec[i].nota2 >= punto) 
			can++;
	return can;
}

int Fecha (struct Lista vec[], int tam, int punto){
	int i, can = 0;
	for (i = 0; i < tam; i++) 
		if (vec[i].nacimiento.mes <= punto) 
			can++;
	return can;
}

