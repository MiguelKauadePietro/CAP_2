#include <stdio.h>


int main(void)
{

    int v1[5], v2[] = {4, 2, 6, 5, 7}, cont = 0, i, tam;

    tam = sizeof(v2) / sizeof(v2[0]);

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v1[i]);
    }


    for (i = 0; i < tam; i++)
    {
        if (v1[i] == v2[i])
        {
            cont += 1;
        }
    }

    if (cont == tam)
    {
        printf("Os vetores são iguais\n");
    }else{
        printf("Os vetores não são iguais\n");
    }

    return 0;
}
