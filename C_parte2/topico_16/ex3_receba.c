#include <stdio.h>

void recebe(int *p){
	scanf("%d", p);
}

int main(void){
	int num;

	recebe(&num);

	printf("%d\n", num);

	return 0;
}
