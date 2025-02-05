#include <stdio.h>
#include <stdlib.h>

int *recebe_valores(int n){

	int i;
	int *p;

	p = malloc(n * sizeof(int));

	if(p == NULL){
		printf("Não foi possível alocar dinamicamente!\n");
		exit(1);
	}

	for(i = 0; i < n; i++){
		scanf("%d", &p[i]);
	}

	return p;
}

int main(void){
	int *valores, val;

	scanf("%d", &val);

	valores = recebe_valores(val);

	for(int i = 0; i < val; i++){
		printf("%d\n", valores[i]);
	}

	free(valores);

	return 0;
}
