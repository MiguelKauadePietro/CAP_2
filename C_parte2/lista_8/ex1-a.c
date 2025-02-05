#include <stdio.h>
#include <stdlib.h>

typedef struct{ //! definindo o struct dos dados do retângulo
	int pse_x;
	int pid_x;
	int pse_y;
	int pid_y;
}Retangulo;

int area(Retangulo *ret){ //! Evitando que pegue a cópia do valor do struct ret adicionando um ponteiro que aponta para o mesmo;

	int area;

	area = (ret->pid_x - ret->pse_x) * (ret->pse_y - ret->pid_y);

	return area;
}

int perimetro(Retangulo *ret){
	int perimetro;

	perimetro = ret->pse_x + ret->pid_x + ret->pse_y + ret->pid_y;

	return perimetro;
}


//! Como essa função retornava um struct e alteramos o parâmetro, a função passa a ser void pois, só estamos alterando o valor de *ret e ret passará a ficar fixado na memória pois ele é um ponteiro que aponta para o struct Retângulo;
void translada(Retangulo *ret, int x, int y){
	ret->pse_x += x;
	ret->pid_x += x;
	ret->pse_y += y;
	ret->pid_y += y;
}

void print_transladado(Retangulo *ret){
	printf("dados do retângulo transladado: \n\n");
	printf("Eixo X: \n");
	printf("%d\n", ret->pse_x);
	printf("%d\n\n", ret->pid_x);
	printf("Eixo Y: \n");
	printf("%d\n", ret->pse_y);
	printf("%d\n", ret->pid_x);
}

int main(void){
	Retangulo ret;
	ret.pse_x = 1;
	ret.pid_x = 7;
	ret.pse_y = 4;
	ret.pid_y = 2;
	int x = 5;
	int y = 3;

	printf("Área: %d\n", area(&ret));
	printf("Perímetro: %d\n", perimetro(&ret));
	translada(&ret, x, y);

	print_transladado(&ret);

	return 0;
}



