#include <stdio.h>
#define N 5

int main(void)
{


    int valores[N], i, menor = 0;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &valores[i]);
        if (valores[i] > 0)
        {
            menor = valores[i];
        }
    }

    for (i = 0; i < N; i++)
    {
        if (valores[i] > 0)
        {
            if (valores[i] < menor)
            {
            menor = valores[i];
            }
        }

    }

    printf("O menor valor positivo da sequência é: %d\n", menor);

    return 0;
}
