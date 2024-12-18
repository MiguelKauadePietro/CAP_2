#include <stdio.h>
#define N 100

int main(void)
{
    int s1[N], s2[N], i, n, cont = 0;

    printf("Insira o tamanho das sequências(não pode ser maior que 100): ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Insira os valores da primeira sequência: ");
        scanf("%d", &s1[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("Insira os valores da segunda sequência: ");
        scanf("%d", &s2[i]);
    }


    for (i = 0; i < n; i++)
    {
        if (s1[i] > s2[i])
        {
            cont++;
        }
    }

    printf("%d valor(es) da primeira sequência são maiores que os outros %d valor(es) da segunda sequência\n", cont, cont);

    return 0;
}
