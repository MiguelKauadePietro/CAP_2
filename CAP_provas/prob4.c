#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N_MAX 50

//Essa função recebe como parâmetro duas strings a string texto e a busca, onde ela vai verificar se os caracteres da string busca estão contidos na string texto e retorna 1 se TODOS os caracteres de busca estiverem contidos e retorna 0 se nenhum caracter estiver contido ou se quase todos estiverem contidos na string texto.

int contidos(char texto[], char busca[]){

	int i, cont = 0, tam, j, g, cont2 = 0, res = 0;
	
	char letra_rep[N_MAX];

	tam = strlen(busca);

	for(i = 0, j = 0, g = 0; j < tam; i++){

		if(busca[j] == texto[i]){
			cont++;
			letra_rep[g] = busca[j];
		}

		if(i == strlen(texto)){
			j++;
			i = 0;
		}

	}

	for(i = 0, j=0; i < strlen(letra_rep); i++){
		
		if(busca[j] == letra_rep[i]){
			cont2++;
		}
		j++;
	}

	res = cont - cont2;

	if(res >= tam){
		return 1;
	}

	return 0;
}


int main(void){

	char text[] = "hoje é um dia ensolarado", search1[] = "ard", search2[] = "bjd", search3[] = "xyz";

	printf("%d\n", contidos(text, search1));

	printf("%d\n", contidos(text, search2));

	printf("%d\n", contidos(text, search3));

	return 0;
}
