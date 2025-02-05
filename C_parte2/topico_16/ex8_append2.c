#include <stdio.h>
#define N_MAX 100

typedef struct{
	int valores[N_MAX];
	int n;
	int n_max;
} Lista;


//Lista append(Lista lista, int valor){

//	if(lista.n == lista.n_max){
//		printf("Não é possível adicionar um item, pois chegou ao tamanho limite do registro\n");
//		return lista;
//	}

//	lista.valores[lista.n++] = valor;

//	return lista;

//}

int append(Lista *lista, int valor){
	if(lista->n == lista->n_max){
		return -1;
	}

	lista->valores[lista->n++] = valor;
	return 0;
}

int main(void){
	Lista lista;
	int res;

	lista.n_max = N_MAX;

	lista.n = 99;
	
	res = append(&lista, 19);

	printf("%d\n", res);

	res = append(&lista, 199);

	printf("%d\n", res);

	return 0;

}
