#include <stdio.h>
#include <stdlib.h>
#define TAM 50;

int main(void)
{
    FILE *p_arq = fopen("ex1_escritaArq.txt", "w"); //* Abro o arquivo para escrita(w)
    if (p_arq == NULL) //* Verifico se o arquivo foi aberto com sucesso
    {
        printf("Erro ao abrir o arquivo!\n");
        exit(1);
    }

    int n1 = 19;
    char nome[] = "Miguel";

    fprintf(p_arq, "%d\n", n1); //* Escrevo a variável n1(19) no arquivo
    fputs(nome, p_arq); //* Escrevo o nome(*char ou string) no arquivo

    fclose(p_arq); //* Fechamento do arquivo

    return 0;
}
