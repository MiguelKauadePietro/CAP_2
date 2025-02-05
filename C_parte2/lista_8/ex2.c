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
    Produto produtos[MAX_PRODUTOS];
    int n_produtos;
    float valor_total;
    char forma_pagamento[50];
}Compra;
