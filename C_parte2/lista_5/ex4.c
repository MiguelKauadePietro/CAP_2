#include <stdio.h>
#define N 1000

int main(void)
{
    
    int n, fib[N], i, j, f[N], soma = 0, res[N];

    f[0] = 0;
    f[1] = 1;

    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("1\n");
    }else{
        printf("%d\n", f[0]);
        printf("%d\n", f[1]);
        for (i = 2; i < n; i++)
        {
            f[i] = f[i-1] + f[i-2];
            printf("%d\n", f[i]);
        }
    }

    return 0;
}
