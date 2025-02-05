#include <stdio.h>
#include <stdlib.h>

int main(void){
	int n;
	int *valores;

	scanf("%d", &n);

	valores = malloc(n * sizeof(int)); //Aloca os valores dinâmicamente na memória

	for(int i = 0; i < n; i++){
		scanf("%d", &valores[i]);
	}

	for(int i = 0; i < n; i++){
		printf("%d\n", valores[i]);
	}

	free(valores);

	return 0;
}
