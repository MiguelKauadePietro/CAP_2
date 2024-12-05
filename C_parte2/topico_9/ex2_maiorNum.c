#include <stdio.h>


int main(void)
{
    int n1, n2, n3, maior = 0;

    printf("Insira o primeiro número: ");
    scanf("%d", &n1);

    printf("Insira o segundo número: ");
    scanf("%d", &n2);

    printf("Insira o terceiro número: ");
    scanf("%d", &n3);

    maior = n1;

    if(n2 > maior){
        maior = n2;
    }

    if(n3 > maior){
        maior = n3;
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}
