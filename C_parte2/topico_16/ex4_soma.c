#include <stdio.h>

int soma1(int valores[], int n){
	int i, soma = 0;

	for(i = 0; i < n; i++){
		soma += valores[i];
	}

	return soma;
}

int soma2(int *valores, int n){
	int i, soma = 0;

	for(i = 0; i < n; i++){
		soma += *(valores + i);
	}

	return soma;
}

int soma3(int *valores, int n){
	int i, soma = 0;

	for(i = 0; i < n; i++){
		soma += *valores;
		valores++;
	}

	return soma;
}

int main(void){

	int val[5] = {1, 2, 3, 4, 5}, n = 3;
	int *p_valores;
	p_valores = &val[2];

	printf("%d\n", soma1(p_valores, n));
	printf("%d\n", soma2(p_valores, n));
	printf("%d\n", soma3(p_valores, n));


	return 0;
}
