#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_PRODUTOS 3

typedef struct {
	char nome[50];
	int qtd;
	float preco;
}Produto;

typedef struct {
	Produto produtos[MAX_PRODUTOS];
	float valor_total;
	char forma_pagamento[50];
}Compra;


Compra compras_user(int n){

	Produto produtos[n];
	Compra compras;
	compras.valor_total = 0;
	char buffer[100];
	int i;

	for(i = 0; i < n; i++){
		printf("Insira o nome do produto %d: ", i+1);
		fgets(buffer, sizeof(buffer), stdin);
		buffer[strlen(buffer) - 1] = '\0';
		strcpy(produtos[i].nome, buffer);

		printf("Insira a quantidade que será comprada do produto %d: ", i+1);
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%d", &produtos[i].qtd);

		printf("Insira o preço do produto %d: ", i+1);
		fgets(buffer, sizeof(buffer), stdin);
		sscanf(buffer, "%f", &produtos[i].preco);
		
		compras.valor_total += produtos[i].qtd * produtos[i].preco;
	}

	printf("Insira a forma de pagamento: ");
	fgets(compras.forma_pagamento, sizeof(compras.forma_pagamento), stdin);
	compras.forma_pagamento[strlen(compras.forma_pagamento) - 1] = '\0';

	printf("Dados da compra: \n\n");
	printf("Sua forma de pagamento foi %s\n", compras.forma_pagamento);
	printf("O total da compra foi de %.2f\n", compras.valor_total);

	return compras;
}

int main(void){

	int n = 3;

	compras_user(n);


	return 0;

}


