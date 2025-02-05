#include <stdio.h>

int *maior(int *v1, int *v2){

	int *maior;

	if(*v1 > *v2){
		maior = v1;
		return maior;
	}

	if(*v2 > *v1){
		maior = v2;
		return maior;
	}
}

int main(void){

	int n1 = 10, n2 = 19, *maior_num;

	maior_num = maior(&n1, &n2);

	printf("%d\n", *maior_num);


	return 0;
}
