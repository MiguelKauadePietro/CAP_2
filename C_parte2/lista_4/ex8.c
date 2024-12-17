#include <stdio.h>


int main(void)
{
    int i, n1, n2, soma = 0, temp;

    printf("Insira o primeiro número: ");
    scanf("%d", &n1);

    printf("Insira o segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }

    for (i = n1; i < n2; i++)
    {
        soma += i;
    }

    printf("Soma: %d\n", soma);

    return 0;
}
