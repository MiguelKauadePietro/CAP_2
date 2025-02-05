#include <stdio.h>

#define MAX 100

typedef struct {
	int valores[MAX];
	int n;
}Dados;

Dados recebe_valores(void){

	Dados data;

	scanf("%d", &data.n);

	for(int i = 0; i < data.n; i++){
		scanf("%d", &data.valores[i]);
	}

	return data;
}

int main(void){

	Dados data = recebe_valores();

	for(int i = 0; i < data.n; i++){
		printf("%d\n", data.valores[i]);
	}


	return 0;
}
