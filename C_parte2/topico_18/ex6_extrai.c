#include <stdio.h>
#include <stdlib.h>

float *extrai_linhas(char *arq, int indice){
    float *valores = malloc(3 * sizeof(float));
    int cont = 0;
    FILE *arq1 = fopen(arq, "r");

    while (fscanf(arq1, "%f %f %f", &valores[0], &valores[1], &valores[2]) == 3)
    {
        cont++;

        if (cont == indice)
        {
            break;
        }
    }

    fclose(arq1);

    return valores;

}

int main(void)
{
    char arq[] = "ex6_numeros.txt";
    float *nums = extrai_linhas(arq, 2);

    for (int i = 0; i < 3; i++)
    {
        printf("%.2f\n", nums[i]);
    }

    free(nums);

    return 0;
}
