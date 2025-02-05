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

int main(void)
{
    Dados *d;

    d = recebe_valores();

    int i;

    for (i = 0; i < d->n; i++)
    {
        printf("%d\n", d->p_valores[i]);
    }

    free(d->p_valores);
    free(d);
    
    return 0;
}
