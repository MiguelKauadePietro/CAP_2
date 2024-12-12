#include <stdio.h>
#define NL 100
#define NC 100

int main(void)
{
    int ra[NL], i, j, qtd, qtdNotas;
    float notas[NL][NC];

    scanf("%d", &qtd);

    for (i = 0; i < qtd; i++)
    {
        printf("\nInsira o RA do aluno %d: ", i+1);
        scanf("%d", &ra[i]);
        for (j = 0; j < 3; j++)
        {
            printf("\nDigite as notas do aluno cujo RA %d: ", ra[i]);
            scanf("%f", &notas[i][j]);
        }
    }

    printf("\nAs notas digitadas foram:\n");

    for (i = 0; i < qtd; i++)
    {
        printf("%d\n", ra[i]);
        for (j = 0; j < 3; j++)
        {
            printf("%.1f\n", notas[i][j]);
        }
    }

    return 0;
}
