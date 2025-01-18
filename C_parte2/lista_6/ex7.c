#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 50


void substitui_palavra(char texto[], char busca[], char subs[], char res[]){
	int indice, i = 0, i_apos = 0, i_texto = 0;

	indice = strstr(texto, busca) - texto; //posição exata onde a string busca começa

	while(i < indice){
		res[i] = texto[i];
		i++;
	}

	for(i_apos = 0; i_apos < strlen(subs); i_apos++){
		res[indice + i_apos] = subs[i_apos];
	}

	i_texto = indice + strlen(busca);

	while(texto[i] != '\0'){
		res[i+i_apos] = texto[i_texto];
		i_apos++;
		i_texto++;
	}

	res[i_texto] = '\0';
}

int main(void){

	char text[N] = "Ano que vem Paulo ira prestar o vestibular", busca[N] = "Paulo", subs[N] = "Gu Cp viadinho do caraio", res[100];

	substitui_palavra(text, busca, subs, res);

	printf("%s\n", res);
	
	return 0;
}
