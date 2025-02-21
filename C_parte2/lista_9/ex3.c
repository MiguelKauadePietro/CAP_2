#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int linhas_emBranco(char *nome_arq){
    FILE *p_arq = fopen(nome_arq, "r");

    if(p_arq == NULL){
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    int linhas_branco = 0;
    char linha[200];

    while (fgets(linha, sizeof(linha), p_arq) != NULL){ //* Lê linhas do arquivo até que fgets retorne NULL
        if(linha[0] == '\n'){ //* Se o primeiro caracter da string linha for um \n, ele incrementa linhas_branco
            linhas_branco++;
        }
    }

    fclose(p_arq); //* Fecha o arquivo

    return linhas_branco; //* retorna o número de linhas em branco

}

int main(void)
{

    int num_linhas;

    num_linhas = linhas_emBranco("ex3_input.txt");

    printf("Linhas em branco: %d\n", num_linhas);

    return 0;
}