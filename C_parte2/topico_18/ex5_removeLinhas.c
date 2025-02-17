#include <stdio.h>
#include <stdlib.h>

void remove_linhas(char nome_arq_1[], char nome_arq_2[]) {
    char str[101];
    FILE *p_arq_1 = fopen(nome_arq_1, "r");
    FILE *p_arq_2 = fopen(nome_arq_2, "w");

    if (p_arq_1 == NULL || p_arq_2 == NULL) {
        printf("Erro na abertura do arquivo\n");
        return;
    }
    while (fgets(str, sizeof(str), p_arq_1) != NULL) {
        if (str[0] != '#') {
            fputs(str, p_arq_2);
        // Outra possibilidade:
        // fprintf(p_arq_2, "%s", str);
        }
    }
    fclose(p_arq_1);
    fclose(p_arq_2);
}