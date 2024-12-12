#include <stdio.h>
#define NL 3
#define NC 3

int main(void)
{
    int mat[NL][NC], i, j, soma = 0;

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            soma += mat[i][j];
        }
    }

    printf("Soma: %d\n", soma);


    return 0;
}
