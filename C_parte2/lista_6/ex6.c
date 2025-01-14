#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 50


int maior_palavra(char str1[N]){
    int i, cont = 0, tamanhos[N], maior = 0, espaco = 0, tam;

    tam = strlen(str1);
	


    for (i = 0; i < tam; i++)
    {
	
        if (str1[i] == ' ')
        {

           tamanhos[espaco] = cont;

	   espaco++;

           cont  = 0;
        }else{

	cont++;

	}

    }

    tamanhos[espaco] = cont;


    for (i = 0; i < espaco+1; i++)
    {
        if (tamanhos[i] > maior)
        {
            maior = tamanhos[i];
        }
    }

    return maior;

}

int main(void)
{
    char p1[N];
    
    fgets(p1, sizeof(p1), stdin);
    p1[strlen(p1) - 1] = '\0';

    printf("%d\n", maior_palavra(p1));

    return 0;
}
