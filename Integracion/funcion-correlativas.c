




#include <stdio.h>
#include <string.h>

void correlativas ( struct materias vec[], int ce, char materia[]){
	int i, cont, j;
strcmp();
	for (i = 0; i < ce; i++){
		cont = 0;
		for ( j = 0; j < 5; j++)
			if( strcmpi(vec[i].nombre, materia) == 0 && vec[i].correlativas[j] ){
				printf("\n\t Codigo correlativa, de la materia %s : %6d", materia, vec[i].correlativas[j]);
			}else{
				cont++;}
		if (cont == 5)
			printf("\n\t Materia sin correlativa: %s", materia);
	}
}

void palabraText (char txt[]){
	int i, cont = 0, ban = 0;
	while (txt[i] != '\0') {
		if (txt[i] != ' ')
			ban = 1;
		else{
		 	cont = ban;
			ban = 0;
		}
	}

	printf("La cantidad de palabras son: %d", cont);
}
