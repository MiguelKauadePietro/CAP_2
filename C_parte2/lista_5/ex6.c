#include <stdio.h>
#define N 3

int main(void)
{
    
    int mat[N][N], k, i, j, cont = 0;

    scanf("%d", &k);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (mat[i][j] == k)
            {
                printf("%d %d\n", i, j);
                cont++;
            }
        }
    }

    if (cont == 0)
    {
        printf("Não encontrado!\n");
    }
    

    return 0;
}