#include <stdio.h>


int main(void)
{
    int idade, total;

    printf("Insira sua idade(em anos): ");
    scanf("%d", &idade);

    total = idade * 365;

    printf("Voce possui %d dias de vida\n", total);

    return 0;
}
