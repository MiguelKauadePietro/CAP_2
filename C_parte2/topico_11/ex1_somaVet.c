#include <stdio.h>


int main(void)
{
    int valores[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}, i, soma = 0, tamanho;

    tamanho = sizeof(valores) / sizeof(valores[0]); //! Formula para descobrir o tamanho do array sem precisar alocar

    for (i = 0; i < tamanho; i++)
    {
        soma += valores[i];
    }

    printf("Soma: %d\n", soma);
    

    return 0;
}
