#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void criptografa(char *nome_arqin, char *nome_arqout){

    FILE *p_arq1 = fopen(nome_arqin, "r");
    FILE *p_arq2 = fopen(nome_arqout, "w");

    char c1;

    while ((c1 = fgetc(p_arq1)) != EOF)
    {
        if (c1 >= 65 && c1 <= 90)
        {
            if (c1 == 90)
            {
                c1 = 65;
            }

            c1++;
        }

        if (c1 >= 97 && c1 <= 122)
        {
            if (c1 == 122)
            {
                c1 = 97;
            }

            c1++;
        }

        fputc(c1, p_arq2);

    }
    fclose(p_arq1);
    fclose(p_arq2);
}

int main(void)
{
    char *nome_arq1 = "ex4_input.txt";
    char *nome_arq2 = "ex4_output.txt";

    criptografa(nome_arq1, nome_arq2);

    return 0;
}
