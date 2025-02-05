#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *p_valores;
    int n;
}Dados;

void recebe_valores(Dados *data){ //! recebe o registro já alocado mas aloca o vetor do registro
    int i;

    scanf("%d", &data->n);

    data->p_valores = malloc(sizeof(int) * data->n);

    for (i = 0; i < data->n; i++)
    {
        scanf("%d", &data->p_valores[i]);
    }

}

int main(void)
{
    Dados d;

    recebe_valores(&d);

    for (int i = 0; i < d.n; i++)
    {
        printf("%d\n", d.p_valores[i]);
    }

    free(d.p_valores);
    
    return 0;
}
