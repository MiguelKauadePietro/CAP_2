#include <stdio.h>


int main(void){

	int x = 10;
	int *p; //Declarando o ponteiro de inteiros p

	//p = &x; //p está atribuindo o endereço da variável x

	//printf("x = %d\n", x); //x = 10
	//printf("&x = %p\n", &x); // valor do endereço de x
	//printf("p = %p\n", p); // exibe o ponteiro p que está APONTANDO para o endereço de x
	//printf("*p = %d\n", *p); // exibe o valor do endereço que p está APONTANDO

	//*p = 12; // Alterando o valor do endereço que p está apontando(para isso precisa-se usar o *)
	
	//printf("*p = %d\n", *p);
	//printf("x = %d\n", x); // o x também sofre a alteração da mudança, já que o endereço de x teve seu valor alterado
	
	// Operações
	
	int *p0, *p1, m = 10;
	float g = 20.0;

	p0 = &m;

	printf("*p0 = %d\n", *p0);

	p1 = p0;

	printf("*p1 = %d\n", *p1);

	//p0 = &g; //ERRADO POIS g É DE UM TIPO DIFERENTE DO TIPO DE p0
	
	

	return 0;
}
