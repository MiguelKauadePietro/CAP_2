#include <stdio.h>
#define N_MAX 100

typedef struct{
	int valores[N_MAX];
	int n;
	int n_max;
} Lista;

int *pop(Lista *lista){
	int *p;

	if(lista->n == 0){
		return NULL;
	}

	lista->n--;
	p = &lista->valores[lista->n];

	return p;
}

int main(void){
	Lista lista = {{1, 2, 3, 4, 5}, 5, 10};
	int *p_res;

	p_res = pop(&lista);

	printf("%d\n", *p_res);

	return 0;
}


