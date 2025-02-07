#include <stdio.h>
#include <stdlib.h>

int *realoca(int *valores, int n, int n_novo){
    int *novo_vetor;

    novo_vetor = malloc(n_novo * sizeof(int)); //*Alocando o novo_vetor com outro tamanho

    if (novo_vetor == NULL) //*Verificando a alocação
    {
        printf("Não foi possível alocar!\n");
        exit(1);
    }
    

    for (int i = 0; i < n; i++) //*Copiando os valores entre os vetores
    {
        novo_vetor[i] = valores[i];
    }

    free(valores); //* Liberando memória do antigo vetor

    return novo_vetor; //* retornando o ponteiro para o novo vetor

}

int main(void)
{
    int *numeros;
    int n = 3;
    int n_new = 4;

    numeros = malloc(n * sizeof(int));

    if (numeros == NULL)
    {
        printf("Não foi possível alocar!\n");
        exit(1);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numeros[i]);
    }
    
    printf("Antes de realocar: \n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", numeros[i]);
    }
    
    numeros = realoca(numeros, n, n_new);

    for (int i = n; i < n_new; i++)
    {
        scanf("%d", &numeros[i]);
    }

    printf("Depois da realocação: \n");

    for (int i = 0; i < n_new; i++)
    {
        printf("%d\n", numeros[i]);
    }

    free(numeros); //* Liberando memória alocada para o novo vetor

    return 0;
}
