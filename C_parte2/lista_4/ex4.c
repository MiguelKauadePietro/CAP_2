#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    int n1, n2, n3, temp;
    bool exp1, exp2, exp3;

    printf("Insira o primeiro valor: ");
    scanf("%d", &n1);
    printf("Insira o segundo valor: ");
    scanf("%d", &n2);
    printf("Insira o terceiro valor: ");
    scanf("%d", &n3);

    exp1 = n1 < n2 && n1 < n3;
    exp2 = n2 > n1 && n2 < n3;
    exp3 = n3 > n2 && n3 > n1;

    if (exp1)
    {
        printf("Valor 1 n foi mexido\n");
    }else if (n1 > n2 && n1 < n3)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }else if (n1 > n2 && n1 > n3)
    {
        temp = n1;
        n1 = n3;
        n3 = temp;
    }

    if (exp2)
    {
        printf("Valor 2 n foi mexido\n");
    }else if (n1 > n2 && n2 < n3)
    {
        temp = n1;
        n1 = n2;
        n2 = temp;
    }else if (n2 > n1 && n2 > n3)
    {
        temp = n2;
        n2 = n3;
        n3 = temp;
    }

    if (exp3)
    {
        printf("Valor 3 n foi mexido\n");
    }else if (n1 > n3 && n2 > n3)
    {
        temp = n3;
        n1 = n3;
        n3 = temp;
    }else if (n3 > n1 && n2 > n3)
    {
        temp = n3;
        n3 = n2;
        n2 = temp;
    }

    printf("valor 1: %d\n", n1);
    printf("valor 2: %d\n", n2);
    printf("valor 3: %d\n", n3);

    return 0;
}
