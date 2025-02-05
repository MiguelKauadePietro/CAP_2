#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *p_valores;
    int n;
}Dados;

Dados *recebe_valores(void){

    Dados *data = malloc(sizeof(Dados));

    printf("Insira quantos números serão digitados: ");
    scanf("%d", &data->n);

    data->p_valores = malloc(data->n * sizeof(int));

    int i;

    for ( i = 0; i < data->n; i++)
    {
        printf("Insira o(s) %d número(s)", data->n);
        scanf("%d", &data->p_valores[i]);
    }

    return data;

}

Dados *pares(Dados *data){
    int cont = 0;
    Dados *data2;

    for (int i = 0; i < data->n; i++)
    {
        if (data->p_valores[i] % 2 == 0)
        {
            cont++;
        }
    }

    data2 = malloc(sizeof(Dados));

    data2->p_valores = malloc(cont * sizeof(int)); //! alocação só para o vetor contendo os números pares do vetor original

    data2->n = cont;

    cont = 0;

    for (int i = 0; i < data->n; i++)
    {
        if (data->p_valores[i] % 2 == 0)
        {
            data2->p_valores[cont++] = data->p_valores[i];
        }
    }

    return data2;

}

int main(void)
{
    Dados *d;

    d = recebe_valores();

    d = pares(d);

    for (int i = 0; i < d->n; i++)
    {
        printf("%d\n", d->p_valores[i]);
    }

    free(d->p_valores);
    free(d);

    return 0;
}