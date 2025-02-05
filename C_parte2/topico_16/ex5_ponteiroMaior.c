#include <stdio.h>

int *ponteiro_maior(int valores[], int n){
	int i, maior = -1;
	int *maior_num;

	for(i = 0; i < n; i++){
		if(valores[i] > maior){
			maior_num = &valores[i];
			maior = valores[i];
		}
	}

	if(maior == -1){
		maior_num = &maior;
		return maior_num;
	}else{
		return maior_num;
	}
}

int main(void){

	int val[5] = {1, 2, 4, -2, 19}, n = 5;
	int *bigger_num;

	bigger_num = ponteiro_maior(val, n);

	printf("%d\n", *bigger_num);


	return 0;
}
