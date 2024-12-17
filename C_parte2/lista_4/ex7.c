#include <stdio.h>


int main(void)
{
    int i, n1, n2, n, total;

    printf("Insira a quantidade de multiplicações: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Insira o primeiro número: ");
        scanf("%d", &n1);

        printf("Insira o segundo número: ");
        scanf("%d", &n2);

        total = n1 * n2;

        printf("Total: %d\n", total);
    }



    return 0;
}
