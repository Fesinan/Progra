/*Un laboratorio dispone de una lista con sus 50 medicamentos. De cada uno conoce:
 Código del medicamento (entero, de 3 cifras)
 Precio (real)
 Stock (entero)
Se solicita:
a. Declarar un tipo de dato que contenga la información del medicamento.
b. Declarar un vector de estructura de tipo de datos creado en a.
c. Cargar en un sector de estructuras, los datos referentes a los medicamentos. Función INGRESO.
d. Informar los códigos de los medicamentos cuyo stock es inferior a 10 unidades. Función INFORME.
e. Precio Promedio
* */
#include <stdio.h>
#define N 3

struct Lista {
	int Codigo;
	float Precio;
	int Stock;
};

float FLTLeerYControlar (int , float , float );
int INTLeerYControlar (int , int , int );
void IngresoStrucVec (struct Lista [], int);
void MostrarStrucVec (struct Lista [], int);
void Promedio (struct Lista [], int);


int main (void){
	struct Lista medicamento[N];
	IngresoStrucVec(medicamento, N);
	MostrarStrucVec(medicamento, N);
	Promedio(medicamento, N);
}

int INTLeerYControlar (int det, int ini, int fin){
	int dato, ban = 1;

	if(det >= -1 && det <= 1){
		do {
			scanf("%d", &dato);

			if (det == 0 && (dato < ini || dato > fin)) {
				printf("\n\t Ingrese de vuelta el dato (desde %d hasta %d): ", ini, fin);
			} else if (det == 1 && dato > fin) {
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

float FLTLeerYControlar (int det, float ini, float fin){
	int ban = 1;
	float dato;

	if(det >= -1 && det <= 1){
		do {
			scanf("%f", &dato);

			if (det == 0 && (dato < ini || dato > fin)) {
				printf("\n\t Ingrese de vuelta el dato (desde %.0f hasta %.0f): ", ini, fin);
			} else if (det == 1 && dato > fin) {
				printf("\n\t Ingrese de vuelta el dato (hasta %.0f): ",  fin);
			}else if (det == -1 && dato < ini) {
				printf("\n\t Ingrese de vuelta el dato (desde %.0f): ", ini);
			}else 
			ban = 0;

		}while (ban == 1);

		return dato;
	}else {
		printf("\n\n\t\t ERROR DETERMINANTE NO VALIDO \n\n");
		return -1;
	}
}

void IngresoStrucVec (struct Lista vec[], int tam){
	int i;
	for (i = 0; i < tam; i++) {
		printf("\n\tIngresee el codigo del producto: ");
		vec[i].Codigo = INTLeerYControlar(0, 100, 999);
		printf("\n\tIngrese el precio del producto: ");
		vec[i].Precio = FLTLeerYControlar(-1, 0, 0);
		printf("\n\tIngrese la cantidad de existencia: ");
		vec[i].Stock = INTLeerYControlar(-1, 0, 0);
	}
}

void MostrarStrucVec (struct Lista vec[], int tam){
	int i, stoc;
	for (i = 0; i < tam; i++) {
		printf("\n\tEl codigo del producto es: %6d", vec[i].Codigo );
		printf("\n\tEl precio del producto es: %10.2f", vec[i].Precio );
		printf("\n\tLa cantidad de existencia es: %6d", vec[i].Stock );
	}
}

void Promedio (struct Lista vec[], int tam){
	int i = 0;
	float valor = 0, pro;
	for (i = 0; i < 3; i++) {
		valor += vec[i].Precio;
	}
	pro = valor/tam;
	printf("\n\t El promedio de los precios es: 67\n");
}
