#include <stdio.h>
#define N 5

int main(void)
{
    int v[N] = {4, 2, 7, 8, 2}, i, j, res[N];


    for (i = 0; i < N; i++)
    {
        j = N-i-1;
        printf("%d\n", j);

        res[j] = v[i];
    }
    

    for (i = 0; i < N; i++)
    {
        printf("%d\n", res[i]);
    }


    return 0;
}