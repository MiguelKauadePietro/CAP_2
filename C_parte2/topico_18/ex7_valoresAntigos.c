#include <stdio.h>
#include <stdlib.h>
#define N_MAX 10

typedef struct {
    int valores[N_MAX];
    int n;
}Dados;

int main(void)
{
    Dados data_novo;

    FILE *p_arq = fopen("ex7_valores.bin", "rb");

    if (p_arq != NULL)
    {
        fread(&data_novo, sizeof(data_novo), 1, p_arq);

        for (int i = 0; i < data_novo.n; i++)
        {
            printf("%d\n", data_novo.valores[i]);
        }
    }

    printf("Seja bem-vindo\nInsira quantos valores você vai inserir: ");
    scanf("%d", &data_novo.n);

    printf("Insira os valores: ");

    for (int i = 0; i < data_novo.n; i++)
    {
        scanf("%d", &data_novo.valores[i]);
    }

    p_arq = fopen("ex7_valores.bin", "wb");

    if (p_arq == NULL)
    {
        printf("Falha ao abrir o arquivo!\n");
        exit(1);
    }

    fwrite(&data_novo, sizeof(data_novo), 1, p_arq);

    fclose(p_arq);

    return 0;
}
