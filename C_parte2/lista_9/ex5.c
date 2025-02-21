#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void salva(char *nome_arq, int *valores, int n){
    FILE *p_arq = fopen(nome_arq, "wb");

    if (p_arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        fwrite(&valores[i], sizeof(int), n, p_arq);
    }

    fclose(p_arq);

}

int *carrega(char *nome_arq, int n){
    FILE *p_arq = fopen(nome_arq, "rb");
    int *p_valores;

    for (int i = 0; i < n; i++)
    {
        fread(&p_valores[i], sizeof(int), 1, p_arq);
    }


    fclose(p_arq);

    return p_valores;

}

void altera(char *nome_arq, int indice, int valor){

}