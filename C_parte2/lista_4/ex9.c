#include <stdio.h>


int main(void)
{
    int i, n, fat, total = 0;

    printf("Insira um número para descobrir seu fatorial: ");
    scanf("%d", &n);

    fat = n;

    if (n == 0 || n == 1)
    {
        fat = 1;
    }

    for (i = n; i > 0; i--)
    {
        total = fat *= i;
    }

    printf("Fatorial de %d é: %d\n", n, total);

    return 0;
}
