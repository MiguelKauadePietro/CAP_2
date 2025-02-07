#include <stdio.h>
#include <stdlib.h>

void copia(char *arq1, char *arq2){

    FILE *a1 = fopen(arq1, "r");
    FILE *a2 = fopen(arq2, "w");

    char c;

    while ((c = fgetc(a1)) != EOF) //! PADRÃO PARA LER UM ARQUIVO E ARMAZENAR EM UM CARACTER OU STRING
    {
        fputc(c, a2);
    }

    fclose(a1);
    fclose(a2);

}

int main(void)
{
    char arq1[20] = "ex2_arq1.txt";
    char arq2[20] = "ex2_arq2.txt";

    copia(arq1, arq2);

    return 0;
}
