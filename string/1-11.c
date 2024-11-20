#include <stdio.h>

int CantCarac(char[]);
void Copia(char[], char []);
int textIniFin (char [], int);

int main(){
	char TEXTO[100];
	char copia[100];
	int StringCopy, Cant, igual;

	printf("Ingresa un texto: ");
	fgets(TEXTO, sizeof(TEXTO), stdin);
	Cant=CantCarac(TEXTO);
	printf("\nla cantiad de caracteres es %d", Cant);
	Copia(TEXTO, copia);
	printf("\nla copia es: %s",copia);
	
	igual = textIniFin(TEXTO, 1000);

	if(igual)
		printf("\n\n EL primer caracter es igual al ultimo");
	else
		printf("\n\n El primer caracter es distinto al ultimo");
	
}

int CantCarac(char T[]){
	int I;
	while(T[I]!='\0'){
		I++;
	}
	return I;
}

void Copia(char Origen[], char Destino[]){
	int I;
	while(Origen[I]!='\0'){
		Destino[I]=Origen[I];
		I++;		
	}
	Destino[I] = '\0';
}

int textIniFin (char string[], int N){
	int i = 1;
	char aux = string[0];
	while (string[i] != '\0' && i < N) {
		i++;
	}
	if(string[i-1] == aux)
		return 1;
	else
		return 0;
}
