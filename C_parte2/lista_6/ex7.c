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

	printf("%d\n", i);
	
	//miguel come chocolate
	//miguel
	//ama
	//

	for(i_apos = 0; i_apos < strlen(subs); i_apos++){
		res[indice + i_apos] = subs[i_apos];
		printf("%c\n", subs[i_apos]);
	}

	printf("%d\n", i_apos);

	//printf("%s\n", res);

	//while(i+i_apos > indice && texto[i] != '\0'){
		//res[i+i_apos] = texto[i+i_apos];
		//i_apos++;
		//printf("%c\n", res[i]);
	//}
	
	for(int j = indice; j < indice + strlen(subs); j++){
		res[j] = texto[j];
		printf("%c ", res[j]);
	}

	res[i_texto] = '\0';
}

int main(void){

	char text[N] = "Ano que vem Paulo ira prestar o vestibular", busca[N] = "Paulo", subs[N] = "Gu Cp viadinho do caraio", res[100];

	substitui_palavra(text, busca, subs, res);

	//printf("%s\n", res);
	
	return 0;
}
