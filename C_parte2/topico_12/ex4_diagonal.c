#include <stdio.h>
#define NL 3
#define NC 3

int main(void)
{
    int mat[NL][NC], i, j, diagonalInvalida = 0;

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
            if ((i  != j) && (mat[i][j] != 0))
            {
                diagonalInvalida += 1;
            }
        }
    }

    if (diagonalInvalida > 0)
    {
        printf("Não é diagonal\n");
    }else{
        printf("É diagonal\n");
    }

    return 0;
}
