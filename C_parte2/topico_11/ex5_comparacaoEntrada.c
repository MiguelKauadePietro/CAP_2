#include <stdio.h>
#define N 100


int main(void)
{
    int n, v1[N], v2[N], i, cont = 0;

    printf("Insira a quantidade de valores(não pode ser maior que 100): ");
    scanf("%d", &n);

    if (n > N)
    {
        printf("O valor que você inseriu ultrapassou o esperado!!!\n");
        return 1;
    }


    for (i = 0; i < n; i++)
    {
        printf("Insira valores do primeiro vetor: ");
        scanf("%d", &v1[i]);
    }


    for (i = 0; i < n; i++)
    {
        printf("Insira valores do segundo vetor: ");
        scanf("%d", &v2[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (v1[i] == v2[i])
        {
            cont += 1;
        }
    }

    if (cont == n)
    {
        printf("Os valores são iguais!!!\n");
    }else{
        printf("Os valores não são iguais!!!\n");
    }

    return 0;
}
