#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *p_valores;
    int n;
}Dados;

Dados recebe_valores(void){ //! Só modifica o registro e retorna o mesmo
    Dados data;
    int i;

    scanf("%d", &data.n);

    data.p_valores = malloc(data.n * sizeof(int));

    for (i = 0; i < data.n; i++)
    {
        scanf("%d", &data.p_valores[i]);
    }

    return data;

}

int main(void)
{
    Dados d;

    d = recebe_valores();

    for (int i = 0; i < d.n; i++)
    {
        printf("%d\n", d.p_valores[i]);
    }

    free(d.p_valores);
    
    return 0;
}
