#include <stdio.h>
#include <stdlib.h>
#define MAX_STR 64

typedef struct
{
    char numero_magico[3]; //* 3
    unsigned char tamanho; //* 1
    int n_linhas; //* 4
}Cabecalho; //* Tam = 8 bytes

typedef struct
{
    char nome[MAX_STR]; //* 64
    int idade; //* 4
    char endereco[MAX_STR]; //* 64
    float salario; //* 4
}Linha; //* Tam = 136 bytes

void atualizaVal(char *nome, int indice, int idade){

    FILE *p_arq = fopen(nome, "r+b"); //* Abrindo o arquivo em modo de leitura e escrita de forma que os dados do arquivo não sejam apagados na hora da leitura

    int pos = sizeof(Cabecalho) + sizeof(Linha) * indice + MAX_STR;

    fseek(p_arq, pos, SEEK_SET); //* Serve para começar em uma determinada posição do arquivo ao invés do começo

    fwrite(&idade, sizeof(int), 1, p_arq); //* Substituindo/escrevendo a nova idade no arquivo bin

    fclose(p_arq);
}

int busca(int *valores, int n){
    
}

int main(void)
{
    char *nome = "ex8_info.tab";
    int i = 2, age = 19;

    atualizaVal(nome, i, age);

    return 0;
}
