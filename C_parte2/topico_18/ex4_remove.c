#include <stdio.h>
#include <stdlib.h>


void copia(char *nome1, char *nome2){
    FILE *arq1 = fopen(nome1, "r");
    FILE *arq2 = fopen(nome2, "w");
    int copia = 1;

    char c;

    while ((c = fgetc(arq1)) != EOF)
    {
        if (c == '<')
        {
            copia = !copia;
        }
        else if (c == '>')
        {
            copia = 1;
        }
        else if (copia)
        {
            fputc(c, arq2);
        }
    }

    fclose(arq1);
    fclose(arq2);

}

int main(void)
{

    char arq1[20] = "ex4_text.txt";
    char arq2[20] = "ex4_result.txt";

    copia(arq1, arq2);

    return 0;
}
