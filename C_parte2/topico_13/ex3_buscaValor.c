#include <stdio.h>
#define N 5

/*Esta é a função de busca onde recebe o vetor de valores, o tamanho do vetor e o número que vai ser comparado e retornado o índice onde acontece a primeira ocorrência de igualdade entre o número e o valor do índice no vetor*/

int busca_valor(int valores[],int tam, int n){
    int i;

    for (i = 0; i < tam; i++)
    {
        if (n == valores[i])
        {
            return i;
        }
    }

    return -1;

}

int main(void)
{
    int val[] = {1, 2, 2, 4, 6};

    printf("%d\n", busca_valor(val, N, 3));
    printf("%d\n", busca_valor(val, N, 2));
    printf("%d\n", busca_valor(val, N, 6));

    return 0;
}
