#include <stdio.h>


void troca(int *v1, int *v2){
	int temp;

	temp = *v1;
	*v1 = *v2;
	*v2 = temp;
}

int main(void){
	int val1 = 5, val2 = 34;

	troca(&val1, &val2);

	printf("%d\n", val1);
	printf("%d\n", val2);
}
