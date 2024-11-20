#include <stdio.h>

int CantCarac(char[]);
void Copia(char[], char []);

int main(){
	char TEXTO[1000];
	char copia[1000];
	int StringCopy;
	int Cant;
	printf("Ingresa un texto: ");
	gets(TEXTO);
	Cant=CantCarac(TEXTO);
	printf("la cantiad de caracteres es %d", Cant);
	Copia(TEXTO, copia);
	printf("\nla copia es: %s",copia);
	
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
	Destino[I]=Origen[I]; //Destino[I]='\0';
	}
//ejercicio 3	
void Igual(char VEC[]){
	if(VEC[0]==VEC[])
	}

}
