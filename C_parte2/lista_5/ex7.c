#include <stdio.h>
#define N 3

int main(void)
{
    
    int mat[N][N], i, j, simetria = 1;

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
            if (mat[i][j] != mat[j][i])
            {
                simetria = 0;
            }
        }
    }

    if (simetria)
    {
        printf("eh simetrica\n");
    }else{
        printf("Nao eh simetrica\n");
    }
    
    
    

    return 0;
}