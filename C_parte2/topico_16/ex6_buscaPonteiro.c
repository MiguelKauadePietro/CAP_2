#include <stdio.h>

int *busca(int valores[], int n, int num){
	for(int i = 0; i < n; i++){
		if(valores[i] == num){
			return &valores[i];
		}
	}

	return NULL;
}

int *duas_buscas(int valores[], int n, int valor){

	int *p_valor = busca(valores, n, valor);

	if(p_valor == NULL || p_valor == &valores[n-1]){
		return NULL;
	}

	int indice = p_valor - valores;

	n -= (indice + 1);

	p_valor++;
	p_valor = busca(p_valor, n, valor);

	return p_valor;
}


int main(void){
	int valor = 45;

	int valores[6] = {23, 45, 65, 12, 42, 78};

	int *p = duas_buscas(valores, 6, valor);

	if(p == NULL){
		printf("%p\n", p);
	}else{
		printf("%ld\n", p - valores);
	}

	return 0;
}


