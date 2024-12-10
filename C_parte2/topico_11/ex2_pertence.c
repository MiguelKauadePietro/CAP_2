#include <stdio.h>


int main(void)
{
    int valores[] = {2, 3, 8, 9, 1, 2, 3, 4, 1, 0}, n, tam, i, indice = -1;

    tam = sizeof(valores) / sizeof(valores[0]);

    scanf("%d", &n);

    for (i = 0; i < tam; i++)
    {
        if (n == valores[i])
        {
            indice = i;
            break;
        }
    }
    
    if (indice == -1)
    {
        printf("Número não encontrado\n");
    }else{
        printf("%d\n", indice);
    }
    

    return 0;
}
