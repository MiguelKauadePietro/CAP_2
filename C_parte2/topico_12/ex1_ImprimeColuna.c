#include <stdio.h>
#define NL 3
#define NC 3


int main(void)
{
    int mat[NL][NC], i, j, indice;

    printf("Insira o índice da coluna: ");
    scanf("%d", &indice);

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < NL; i++)
    {
        printf("Valores apresentados do índice %d: %d\n", indice, mat[i][indice]);
    }

    return 0;
}
