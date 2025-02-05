#include <stdio.h>

typedef struct{
	int pse_x;
	int pse_y;
	int pid_x;
	int pid_y;
}Retangulo;


int area(Retangulo ret){
	int area;

	area = (ret.pid_x - ret.pse_x) * (ret.pse_y - ret.pid_y);

	return area;
}

int perimetro(Retangulo ret){
	int perimetro;

	perimetro = ret.pse_x + ret.pid_x + ret.pse_y + ret.pid_y;

	return perimetro;
}

Retangulo translada(Retangulo ret, int x, int y){
	ret.pse_x += x;
	ret.pid_x += x;
	ret.pse_y += y;
	ret.pid_y += y;

	return ret;
}

void print_transladado(Retangulo ret){
	printf("dados do retângulo transladado: \n\n");
	printf("Eixo X: \n");
	printf("%d\n", ret.pse_x);
	printf("%d\n\n", ret.pid_x);
	printf("Eixo Y: \n");
	printf("%d\n", ret.pse_y);
	printf("%d\n", ret.pid_x);
}

int main(void){
	Retangulo ret;
	ret.pse_x = 1;
	ret.pid_x = 7;
	ret.pse_y = 4;
	ret.pid_y = 2;
	int x = 5;
	int y = 3;

	printf("Área: %d\n", area(ret));
	printf("Perímetro: %d\n", perimetro(ret));
	translada(ret, x, y);

	print_transladado(ret);

	return 0;
}
