#include <stdio.h>
#include <stdlib.h>
#define MAX_STR 64

typedef struct 
{
    char numero_magico[3];
    unsigned char tamanho;
    int n_linhas;
}Cabecalho;

typedef struct 
{
    char nome[MAX_STR];
    int idade;
    char endereco[MAX_STR];
    float salario;
}Linha;

int main(void)
{

    Cabecalho c;
    Linha *l;

    FILE *p_arq = fopen("ex8_info.tab", "rb");

    if (p_arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }


    fread(c.numero_magico, sizeof(char), 3, p_arq);
    fread(&c.tamanho, sizeof(unsigned char), 1, p_arq);
    fread(&c.n_linhas, sizeof(int), 1, p_arq);

    printf("%c %c %c\n", c.numero_magico[0], c.numero_magico[1], c.numero_magico[2]);
    printf("%d\n", c.tamanho);
    printf("%d\n", c.n_linhas);

    l = malloc(c.n_linhas * sizeof(Linha));

    if (l == NULL)
    {
        printf("Erro de alocação!\n");
        exit(1);
    }
    

    for (int i = 0; i < c.n_linhas; i++)
    {
        fread(&l[i], sizeof(Linha), 1, p_arq);
        printf("%s\n", l[i].nome);
        printf("%d\n", l[i].idade);
        printf("%s\n", l[i].endereco);
        printf("%.2f\n", l[i].salario);
    }

    free(l);
    fclose(p_arq);

    return 0;
}


