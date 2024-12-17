#include <stdio.h>
#define N 5

int contagem(int valores[], int tam, int n){

    /*Esta é a função de contagem onde recebe o vetor de valores, o tamanho do vetor e o número que vai ser comparado e incrementado em um acumudalor "cont" toda vez que ele for igual ao valor do índice do vetor de valores, e por fim este contador cont será retornado. */

    int i, cont = 0;

    for (i = 0; i < tam; i++)
    {
        if (n == valores[i])
        {
            cont++;
        }
    }

    return cont;

}


int main(void)
{
    int val[N] = {1, 2, 19, 55, 19};

    printf("%d\n", contagem(val, N, 11));

    return 0;
}
