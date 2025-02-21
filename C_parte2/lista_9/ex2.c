#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    FILE *p_arq1 = fopen("ex2_input1.txt", "r+");
    FILE *p_arq2 = fopen("ex2_input2.txt", "r+");

    if(p_arq1 == NULL || p_arq2 == NULL){
        printf("Não foi possível abrir os arquivos\n");
        exit(1);
    }

    char c1, c2;
    int diferente = 0;

    while (((c1 = fgetc(p_arq1)) != EOF) && ((c2 = fgetc(p_arq2)) != EOF))
    {
        if (c1 != c2)
        {
            diferente = 1;
            break;
        }
    }

    if (diferente)
    {
        printf("Os arquivos são diferentes!\n");
    }else{
        printf("Os arquivos são iguais!\n");
    }

    fclose(p_arq1);
    fclose(p_arq2);

    return 0;
}

