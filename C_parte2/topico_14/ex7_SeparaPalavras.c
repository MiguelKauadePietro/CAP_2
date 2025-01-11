#include <stdio.h>
#include<string.h>
#include <ctype.h>
#define TAM_MAX_TXT 30
#define N_MAX_PALAVRAS 30
#define TAM_MAX_PALAVRAS 30

int main(void)
{
    char texto[TAM_MAX_TXT];
    char palavras[N_MAX_PALAVRAS][TAM_MAX_PALAVRAS];
    int i = 0, j_coluna = 0, i_linha = 0;

    fgets(texto, sizeof(texto), stdin);
    texto[strlen(texto) - 1] = '\0';

    while (texto[i])
    {
        j_coluna = 0;
        while (texto[i] != ' ' && texto[i])
        {
            palavras[i_linha][j_coluna] = texto[i];
            j_coluna++;
            i++;
        }
        palavras[i_linha][j_coluna] = '\0';
        i++;
        i_linha++;
    }

    for (i = 0; i < i_linha; i++)
    {
        printf("%s\n", palavras[i]);
    }

    return 0;
}
