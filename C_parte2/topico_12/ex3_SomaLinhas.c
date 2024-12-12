#include <stdio.h>
#define NL 3
#define NC 3

int main(void)
{
    int mat[NL][NC], vet[NL], i, j, soma = 0;

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < NL; i++)
    {
        soma = 0;
        for (j = 0; j < NC; j++)
        {
            soma += mat[i][j];
        }
        vet[i] = soma;
    }

    for (i = 0; i < NL; i++)
    {
        printf("Vetor de soma: %d\n", vet[i]);
    }

    return 0;
}
