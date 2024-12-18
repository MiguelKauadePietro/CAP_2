#include <stdio.h>
#define N 20

int main(void)
{
    int v[N] = {4, 2, 7, 8, 2, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14}, i, j, temp[N];


    // for (i = 0; i < N; i++)
    // {
    //     scanf("%d", &v[i]);
    // }

    for (i = 0; i < N/2; i++)
    {
        temp[i] = v[i];
        v[i] = v[N - i];
        v[N - i] = temp[i];
    }

    // for (j = N; j > N/2; j--)
    // {
    //     temp[j] = v[N - j];
    //     v[N - j] = v[j];
    //     v[j] = temp[j];
    // }

    for (i = 0; i < N; i++)
    {
        printf("%d\n", v[i]);
    }


    return 0;
}
