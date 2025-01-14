#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Retangulo{
	int pse_x;
	int pse_y;
	int pid_x;
	int pid_y;
};

int area_retangulo(struct Retangulo ret){
	int area;

	area = (ret.pid_x - ret.pse_x) * (ret.pse_y - ret.pid_y);

	return area;
}

int main(void){

	struct Retangulo r1;

	r1.pse_x = 1;
	r1.pid_x = 5;
	r1.pse_y = 4;
	r1.pid_y = 1;

	printf("%d\n", area_retangulo(r1));

	return 0;
}
