#include <stdio.h>
#define NL 3
#define NC 3


int main()
{
    int mat[NL][NC], vet[NL], i, j, indice;

    printf("Insira o índice que deseja extrair: ");
    scanf("%d", &indice);

    for (i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    
    for (i = 0; i < NL; i++)
    {
        vet[i] = mat[i][indice];
    }

    for (i = 0; i < NL; i++)
    {
        printf("valores do vetor extraídos: %d\n", vet[i]);
    }
    

    return 0;
}
