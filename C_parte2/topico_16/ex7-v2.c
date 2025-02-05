#include <stdio.h>
#define MAX 100

typedef struct {
	int valores[MAX];
	int n;
}Dados;

void recebe_valores(Dados *data){
	scanf("%d", &data->n);

	for(int i = 0; i < data->n; i++){
		scanf("%d", &data->valores[i]);
	}
}

int main(void){
	Dados data2;

	recebe_valores(&data2);

	for(int i = 0; i < data2.n; i++){
		printf("%d\n", data2.valores[i]);
	}

	return 0;
}
