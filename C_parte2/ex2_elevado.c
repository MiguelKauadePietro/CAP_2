#include <stdio.h>
#include <math.h>

int main(void)
{
    long int n, quadrado, cubo;

    scanf("%ld", &n);

    quadrado = n * n;
    cubo = quadrado * n;

    printf("O número %ld elevado ao quadrado: %ld\n", n, quadrado);
    printf("O número %ld elevado ao cubo: %ld\n", n, cubo);

    return 0;
}

//! gcc (arquivo.c) -Wall -o exe -> o "-Wall" serve para executar todos os erros que o gcc normalmente não aponta