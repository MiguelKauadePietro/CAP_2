#include <stdio.h>
#include <stdlib.h>
#define N_ALLOC_INICIAL 8

typedef struct 
{
    int *p_valores;
    int n;
    int n_alloc;
}Lista;

Lista list(void){
    Lista l;

    l.n = 0;
    l.n_alloc = 8; //* 8 valores inicialmente para serem alocados
    l.p_valores = malloc(l.n_alloc * sizeof(Lista)); //* Alocando na memória o vetor com n_alloc posições
    if (l.p_valores == NULL) //* Se a alocação retornar NULL retorna um erro
    {
        printf("Não foi possível alocar!\n");
        exit(1);
    }
    

    return l;
}

void append(Lista *lista, int valor){ //* Função append
    if (lista->n > lista->n_alloc) //* caso o número de elementos na lista for maior que o número de elementos alocados dinâmicamente pela função list, é dobrado o valor de n_aloc e é realocado esse valor na memória
    {
        lista->n_alloc *= 2;
        lista->p_valores = realloc(lista->p_valores, lista->n_alloc * sizeof(int));
        if (lista->p_valores == NULL)
        {
            printf("Não foi possível alocar!\n");
            exit(1);
        }
    }

    lista->p_valores[lista->n++] = valor;
}


void pop(Lista *lista){
	if(lista->n <= 0){ //* Caso o vetor estiver vazio, ele retorna um erro e sai da função com um return vazio(função void)
		printf("Não é possível remover o item desta lista, pois ela está vazia!\n");
        return;
	}

    if (lista->n == (lista->n_alloc / 2)) //* Caso o n for metade do valor de n_alloc, ele redefine n_alloc e realoca o vetor na memória
    {
        lista->n_alloc /= 2;
        lista->p_valores = realloc(lista->p_valores, lista->n_alloc * sizeof(int));
        if (lista->p_valores == NULL)
        {
            printf("Não foi possível alocar!\n");
            exit(1);
        }
    }

	lista->p_valores[lista->n--]; //* Decrementa o número de valores do vetor
}

int main(void)
{
    Lista lista;

    lista = list();

    for (int i = 0; i < 8; i++)
    {
        append(&lista, i);
    }

    printf("%d\n", lista.n_alloc);

    append(&lista, 8);

    printf("%d\n", lista.n_alloc);

    for (int i = 9; i < 17; i++)
    {
        append(&lista, i);
    }

    printf("%d\n", lista.n_alloc);

    pop(&lista);

    for (int i = 0; i < 17; i++)
    {
        printf("%d\n", lista.p_valores[i]);
    }

    printf("%d\n", lista.n_alloc);

    free(lista.p_valores);

    return 0;
}
