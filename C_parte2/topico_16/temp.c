#include <stdio.h>

int main(void){

	int val, *p_val;

	p_val = &val; //INICIALIZAR URGENTEMENTE UM PONTEIRO, POIS SE NÃO INICIALIZAR, esse ponteiro armazenará um valor arbitrário ou seja, um endereço qualquer de memória
	//*p_val é a mesma coisa que val
	

	*p_val = 20;

	*p_val = 2* (*p_val);

	printf("%d\n", *p_val);

	scanf("%d", &(*p_val));

	(*p_val)++;

	printf("%d\n", *p_val);


	return 0;
}
