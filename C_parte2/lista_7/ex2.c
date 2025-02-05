#include <stdio.h>

typedef struct {
	float real;
	float imag;
}Complexo;

float real(Complexo comp){
	return comp.real;
}

float imag(Complexo comp){
	return comp.imag;
}

Complexo soma(Complexo n1, Complexo n2){
	n1.real += n2.real;
	n1.imag += n2.imag;

	return n1;
}

void print(Complexo comp){
	printf("%.2f + %.2fi\n", comp.real, comp.imag);
}

int main(void){
	Complexo num1;
	Complexo num2;

	num1.real = 4.1;
	num2.real = 3.2;
	num1.imag = 1.9;
	num2.imag = 2.9;

	printf("parte real dos números: %.2f %.2f\n", real(num1), real(num2));

	printf("parte imaginária dos números: %.2f %.2f\n", imag(num1), imag(num2));

	soma(num1, num2);

	printf("Resultado da soma entre os dois números complexos: \n");
	print(num1);

	return 0;
}
