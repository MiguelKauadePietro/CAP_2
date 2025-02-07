#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_PRODUTOS 100

typedef struct {
    char nome[50];
    int qtd;
    float preco;
}Produto;

typedef struct 
{
    Produto *produtos;
    int n_produtos;
    float valor_total;
    char forma_pagamento[50];
}Compra;

void recebe_produtos(Produto *p){
    char buffer[100];

    printf("Insira o nome do produto: ");
    fgets(p->nome, sizeof(p->nome), stdin);
    p->nome[strlen(p->nome) - 1] = '\0';

    printf("Insira a quantidade: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &p->qtd);

    printf("Insira o preço: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &p->preco);
}

Compra processa_compra(void){
    Compra c;
    char buffer[100];

    printf("Insira a quantidade de produtos: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &c.n_produtos);

    c.produtos = malloc(c.n_produtos * sizeof(Produto));

    for (int i = 0; i < c.n_produtos; i++)
    {
        recebe_produtos(&c.produtos[i]);
        c.valor_total += c.produtos[i].preco * c.produtos[i].qtd;
    }

    return c;
}

void imprime_compra(Compra *c){
    printf("Dados da sua compra: \n");

    for (int i = 0; i < c->n_produtos; i++)
    {
        printf("Nome: %s\n", c->produtos[i].nome);
        printf("Quantidade: %d\n", c->produtos[i].qtd);
        printf("Preço: %.2f\n", c->produtos[i].preco);
    }

    printf("Total da compra: %.2f\n", c->valor_total);

}

int main(void)
{
    Compra c;

    c = processa_compra();

    imprime_compra(&c);

    free(c.produtos);

    return 0;
}

