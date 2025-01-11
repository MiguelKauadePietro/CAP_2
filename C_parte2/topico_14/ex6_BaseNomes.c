#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N_MAX 10
#define TAM_MAX 30

int main(void)
{
    char mat_nomes[N_MAX][TAM_MAX], nomes[TAM_MAX];
    int cont = 0, i, res = 1;


    while (res != 0)
    {
        fgets(nomes, sizeof(nomes), stdin);
        nomes[strlen(nomes) - 1] = '\0';

        if (strcmp(nomes, "encerrar") == 0)
        {
            res = 0;
        }

        cont++;

        strcpy(mat_nomes[cont], nomes);

        if (cont == N_MAX)
        {
            printf("Número máximo de nomes digitados!\n");
            break;
        }
        
    }

    for (i = 0; i < cont; i++)
    {
        printf("%s\n", mat_nomes[i]);
    }

    return 0;
}
