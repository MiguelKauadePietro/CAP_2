#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N_MAX 50

void idades_nomes(int n){
    int i, idade, maior = 0;
    char nomes[N_MAX], buffer[N_MAX], pessoa_velha[N_MAX];

    for (i = 0; i < n; i++)
    {
        printf("Digite o nome: ");
        fgets(nomes, sizeof(nomes), stdin);
        nomes[strlen(nomes) - 1] = '\0';

        printf("Digite a idade: ");
        fgets(buffer, sizeof(buffer), stdin);
        buffer[strlen(buffer) - 1] = '\0';
        sscanf(buffer, "%d", &idade);

        if (idade > maior)
        {
            maior = idade;
            strcpy(pessoa_velha, nomes);
        }
    }
    printf("%s\n", pessoa_velha);
}

int main(void)
{
    int n = 5;

    idades_nomes(n);

    return 0;
}
