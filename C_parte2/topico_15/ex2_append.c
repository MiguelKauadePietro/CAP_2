#include <stdio.h>
#define N_MAX 100

typedef struct{
	int valores[N_MAX];
	int n;
} Lista;

Lista append(Lista lista, int valor){

	lista.valores[lista.n++] = valor;

	return lista;
}


int main(void){

	Lista list;
	int n;

	list.n = 0;

	int i;

	list = append(list, 19);
	list = append(list, 18);
	list = append(list, 17);
	list = append(list, 16);
	list = append(list, 15);

	for(i = 0; i < list.n; i++){
		printf("%d\n", list.valores[i]);
	}

	return 0;
}	
