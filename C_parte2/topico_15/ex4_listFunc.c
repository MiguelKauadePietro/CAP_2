#include <stdio.h>
#define N_MAX 100

typedef struct{
	int valores[N_MAX];
	int n;
	int n_max;
} Lista;

Lista list(void){
	Lista lista;
	lista.n = 0;
	lista.n_max = N_MAX;
	return lista;
}

int len(Lista list){
	return list.n;
}

int sum(Lista list){
	int i, soma = 0;

	for(i = 0; i < list.n; i++){
		soma += list.valores[i];
	}

	return soma;
}

Lista pop(Lista list){
	if(list.n <= 0){
		printf("Não é possível remover o item desta lista, pois ela está vazia!\n");
		return list;
	}
	list.valores[list.n--];

	return list;
}

Lista append(Lista lista, int valor){

	if(lista.n == lista.n_max){
		printf("Não é possível adicionar um item, pois chegou ao tamanho limite do registro\n");
		return lista;
	}

	lista.valores[lista.n++] = valor;

	return lista;

}

void print(Lista list){
	int i;

	for(i = 0; i < list.n; i++){
		printf("%d\n", list.valores[i]);
	}
}


int main(void){

	Lista L;
	int n;

	L.n = 0;

	int i;

	L = append(L, 19);
	L = append(L, 18);
	L = append(L, 17);
	L = append(L, 16);
	L = append(L, 15);

	L = pop(L);
	L = pop(L);

	printf("A lista possui %d valor(es)\n", len(L));
	printf("%d\n", sum(L));
	print(L);

	return 0;
}

