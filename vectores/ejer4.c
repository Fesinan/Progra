/*Una fábrica produce 20 tipos de embalajes mediante 5 máquinas (identificadas por un código
numérico de 4 cifras).
Cada día durante cada producción se genera una planilla, donde se indica:
- Planilla de producción
- tipo de embalaje (1 a 20 ) LeerYControlar con función genérica
- máquina que la produjo
- cantidad producida. LeerYControlar con función genérica
En la última información se ingresó una planilla de producción cero o negativa.
INGRESAR PREVIAMENTE LOS CODIGOS DE LAS MAQUINAS (mediante una función)
Determinar:
a) Cantidad total de embalajes fabricados.
b) Tipo/s de embalaje/s del cual se ha fabricado la mayor cantidad producida. Función Máximo
c) Listado indicando:
Numero de maquina
Cantidad fabricada
xxxx
xxx
xxxx
xxxx
Función para Listar
d) Embalajes (Número/s) no producidos.
pero los Número de Legajo son números correlativos de 1 a 4
 * */
#include <stdio.h>
#define N 5

typedef int Ivec[N];

int LeerYControlar (int, int, int);
void ingresoVecINT (Ivec, int, char *);
void muestraVecINT (Ivec, Ivec, int, char *, char *);
int buscarNVector (Ivec,int, int);
int pideBusqueda (Ivec, int);
void MostrarMayor (Ivec, int);
int buscaMayor (int [], int);
void muestraVecSaltado (int [], int, int);

int main (void) {
	int NPlanilla, tipoEnva, posMaqui, canEmTot = 0;
	Ivec Maquinas, MaqCantPro;
	int Embalajes[20] = {0};

	printf(" \n\t Ingrese los codigos de las Maquinas \n\n");
	ingresoVecINT(Maquinas, N, "\nIngerse el codigo de la maquina(1000 a 9999): ");


	printf("\n \t Ingrese el numero de planilla (0 para salir): ");
	scanf("%d", &NPlanilla);

	while (NPlanilla > 0) {
		printf("\n \t Ingrese el tipo de envase que se utiliza (de 1 a 20): ");
		tipoEnva = LeerYControlar(0, 1, 20) - 1;
		Embalajes[tipoEnva]++;

		printf("\n \t Ingrese el codigo de la maquina que se fabrica: ");
		posMaqui = pideBusqueda(Maquinas, N);

		printf("\n \t Ingrese la cantidad  se fabrica: ");
		MaqCantPro[posMaqui] = LeerYControlar(-1, 0, 0);
		canEmTot++;

		printf("\n \t Ingrese el numero de planilla (0 para salir): ");
		scanf("%d", &NPlanilla);

	}
	if (canEmTot) {
		printf("\n\n\t\tSe embalaron un total de %d productos", canEmTot);
		MostrarMayor(Embalajes, 20);
		muestraVecINT(Maquinas, MaqCantPro, N, "\n\n\t\tNumero de maquina\tCantidad Fabricada\n", "\n\t\t\t%6d\t\t%6d");
		muestraVecSaltado(Embalajes, 20, 0);
		printf("\n\n\n");
	}else {
		printf("\n\n\t\t No se ingreso ningun dato \n\n\t\t Fin del programa");
	}
	return 0;
}

/* Declaracion de Funciones */

/* LeerYControlar
 * 
 * Determinante (det), decide si:
 * det == 0: el dato ingresado debe en un rango entre ini (inicio) y fin.
 * det == 1: el dato ingresado debe ser menor que fin.
 * det == -1: el dato ingresado debe ser mayor que ini.
 *
 */
int LeerYControlar (int det, int ini, int fin){
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


void ingresoVecINT(int vi[], int ca, char *men){
	int i;
	for(i = 0; i < ca; i++){
		printf("%s", men);
		vi[i] = LeerYControlar(0, 1000, 9999);
	}
}

void muestraVecINT(int vi[],int vi2[], int ca, char *men, char *salida){
	int i;
	printf("%s", men);
	for( i = 0; i < ca; i++){
		printf(salida, vi[i], vi2[i]);
	}
}

int pideBusqueda (Ivec mac, int tam){
	int macbus, pos;
	do {
		macbus = LeerYControlar(0, 1000, 9999);
		pos = buscarNVector(mac, macbus, tam);
		if (pos == -1) {
			printf("\n\t El codigo de maquina %d no existe, vuelva a ingresar: ", macbus);	
		}
	}while (pos == -1);

	return pos;
}

int buscarNVector (int vec[], int busca, int Tam){
	int i;
	for (i = 0; i < Tam; i++) {
		if (vec[i] == busca) {
			return i;
		}
	}
	return -1;
}

void MostrarMayor (Ivec vec, int tam){
	int i, max;
	max = buscaMayor(vec, tam);

	printf("\n\n\t El/Los que mas se producieros fueron: ");
	for (i = 0; i < tam; i++) {
		if (vec[i] == max) {
			printf("%8d", vec[i]);
		}
	}
}

int buscaMayor (int vec[], int tam){
	int i, max = vec[0];

	for (i = 0; i < tam; i++) 
		if(vec[i] > max)
			max = vec[i];
	return max;
}
void muestraVecSaltado (int vec[], int tam, int sal){
	int i;
	printf("\n\n\t\tLos Embases no utilizados son: \n\t");
	for (i = 0; i < tam; i++) {
		if (vec[i] == sal)
			printf("%6d", i+1);
	}
}
