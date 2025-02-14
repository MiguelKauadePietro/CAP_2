#include <stdio.h>
#include <stdlib.h>

void substitui(char *nome1, char *nome2){
    char c;

    FILE *arq1 = fopen(nome1, "r");
    FILE *arq2 = fopen(nome2, "w");

    while ((c = fgetc(arq1)) != EOF)
    {
        if (c == '.')
        {
            c = ',';
        }
        fputc(c, arq2);
    }

    fclose(arq1);
    fclose(arq2);
}

int main(void)
{
    char arq1[20] = "ex3_valores1.txt";
    char arq2[20] = "ex3_valores2.txt";

    substitui(arq1, arq2);

    return 0;
}
