#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char nome_arq[100], palavra[100], buffer[500], *achou;

    printf("Insira o nome do arquivo que você deseja ler: ");
    fgets(nome_arq, sizeof(nome_arq), stdin);
    nome_arq[strlen(nome_arq) - 1] = '\0';


    // printf("Insira a palavra que deseja verificar: ");
    fgets(palavra, sizeof(palavra), stdin);
    palavra[strlen(palavra) - 1] = '\0';

    FILE *p_arq = fopen(nome_arq, "r");

    if (p_arq == NULL)
    {
        printf("Falha em abrir o arquivo\n");
        exit(1);
    }

    while (fgets(buffer, sizeof(buffer), p_arq) != NULL)
    {
        achou = strstr(buffer, palavra);

        if (achou != NULL)
        {
            printf("A palavra existe no arquivo\n");
            break;
        }

        printf("A palavra não existe no arquivo\n");
    }

    fclose(p_arq);

    return 0;
}