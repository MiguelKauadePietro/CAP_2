#include <stdio.h>
#define N 5


int main()
{
    int v1[] = {1, 2, 3, 4, 5,}, v2[N], i;

    for (i = 0; i < N; i++)
    {
        v2[i] = v1[i];
    }

    for (i = 0; i < N; i++)
    {
        printf("%d\n", v2[i]);
    }
    

    return 0;
}
