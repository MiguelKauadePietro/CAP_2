#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float real;
	float imag;
}Complexo;

float real(Complexo *comp){ //! Retorna o valor apontado no struct Complexo para o valor real;
	return comp->real;
}

float imag(Complexo *comp){ //! Retorna o valor apontado no struct Complexo para o valor imaginário;
	return comp->imag;
}

void soma(Complexo *n1, Complexo *n2){ //! Altera os valores do ponteiro apontado para n1
	n1->real += n2->real;
	n1->imag += n2->imag;

}

void print(Complexo *comp){ //! Printa na tela o número imaginário
	printf("%.2f + %.2fi\n", comp->real, comp->imag);
}

int main(void){
	Complexo num1;
	Complexo num2;

	num1.real = 4.1;
	num2.real = 3.2;
	num1.imag = 1.9;
	num2.imag = 2.9;

	printf("parte real dos números: %.2f %.2f\n", real(&num1), real(&num2));

	printf("parte imaginária dos números: %.2f %.2f\n", imag(&num1), imag(&num2));

	soma(&num1, &num2);

	printf("Resultado da soma entre os dois números complexos: \n");
	print(&num1);

	return 0;
}