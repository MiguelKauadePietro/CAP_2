#include <stdio.h>

void lerVetor(int vet[], int tam){
    int i;

    for (i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
}

void imprimeInverso(int vet[], int res[], int tam){
    int i;

    for (i = 0; i < tam; i++)
    {
        res[i] = vet[tam-i-1];
    }

    for (i = 0; i < tam; i++)
    {
        printf("%d\n", res[i]);
    }

}

float calcularMediaPares(int vetor[], int tamanho){

    int i, cont;
    float media, soma = 0;

    for (i = 0; i < tamanho; i++)
    {
        cont++;
        soma += vetor[i];
    }

    media = soma / cont;

    return media;
}

int encontraMaior(int vetor[], int tamanho){
    int i, maior = 0;

    maior = vetor[0];

    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    return maior;
}

int encontraMenor(int vetor[], int tamanho){
    int i, menor = 0;

    menor = vetor[0];

    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    return menor;
}