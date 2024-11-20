/* De un string de 1000 caracteeres, determinar cuanto es el porceentaje de espacios en el texto */


#include <stdio.h>
float porcentaje (char []);

int main (void){
	char Text[1001];
	printf("\nIngrese un Texto: ");
	fgets(Text, 1001, stdin);
	printf("\n\tHay el porcentaje de espacios en el texto es: %.2f%\n", porcentaje(Text));
	return 0;
}

float porcentaje (char text[]){
	int con = 0, i = 0;

	while (text[i] != '\0') {
		if ( text[i] == ' ')
			con++;
		i++;
	}

	return ((float) con/i) * 100;
}
