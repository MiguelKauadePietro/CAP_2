#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define T_MAX 50

void maior_palavra(int n){
    char palavra_atual[T_MAX], palavra_maior[T_MAX];
    int i, tam = 0, tam_maior = 0;

    for (i = 0; i < n; i++)
    {
        fgets(palavra_atual, sizeof(palavra_atual), stdin);
        palavra_atual[strlen(palavra_atual) - 1] = '\0';

        tam = strlen(palavra_atual);

        if (tam > tam_maior)
        {
            tam_maior = tam;
            strcpy(palavra_maior, palavra_atual);
        }
    }

    printf("%s\n", palavra_maior);
    
}

int main(int argc, char const *argv[])
{
    int n = 5;

    maior_palavra(n);

    return 0;
}
