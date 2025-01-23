#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 3

typedef struct {
	char nome[50];
	int qtd;
	float preco;
}Produto;

int main(void){
	Produto produtos[N];
	int i;
	char buffer[100];

	for(i = 0; i < N; i++){
		printf("Insira o nome do produto %d: ", i+1);
		fgets(buffer, sizeof(buffer), stdin);
		buffer[strlen(buffer) - 1] = '\0';
		strcpy(produtos[i].nome, buffer);

		printf("Insira a quantidade em estoque do produto %d: ", i+1);
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%d", &produtos[i].qtd);

		printf("Insira o preço do produto %d: ", i+1);
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%f", &produtos[i].preco);
	}

	printf("dados dos produtos:\n\n");

	for(i = 0; i < N; i++){

		printf("produto %d: \n", i+1);
		printf("Nome: %s\n", produtos[i].nome);
		printf("Quantidade em estoque: %d\n", produtos[i].qtd);
		printf("Preço: %.2f\n\n", produtos[i].preco);
	}

	return 0;
}
