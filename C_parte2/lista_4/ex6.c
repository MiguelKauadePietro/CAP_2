#include <stdio.h>


int main(void)
{
    int n, n2, n3, i;

    scanf("%d", &n);

    n2 = 2 * n;
    n3 = 3 * n;

    for (i = n2; i < n3; i++)
    {
        printf("%d\n", i);
    }
    



    return 0;
}
