#include <stdio.h>
#define N_MAX 100


typedef struct {
	int elementos[N_MAX];
	int n;
	int n_max;
}Conjunto;

Conjunto novo_conjunto(void){
	Conjunto conjunto;
	conjunto.n = 0;
	conjunto.n_max = N_MAX;

	return conjunto;
}

int pertence(Conjunto con, int val){
	int i;

	for(i = 0; i < con.n; i++){
		if(con.elementos[i] == val){
			return 1;
		}
	}
	return 0;
}

Conjunto adiciona(Conjunto con, int valor){
	int pertence_con = 0, i;

	pertence_con = pertence(con, valor);

	if(pertence_con || con.n >= con.n_max){
		printf("Não é possível adicionar esse valor, pois esse valor já pertence à esse conjunto\n");
	}else{
		con.elementos[con.n++] = valor;
	}

	return con;
}

Conjunto uniao(Conjunto c1, Conjunto c2){
	Conjunto uni = novo_conjunto();
	int i;

	for(i = 0; i < c1.n; i++){
		uni = adiciona(uni, c1.elementos[i]);
	}

	for(i = 0; i < c2.n; i++){
		uni = adiciona(uni, c2.elementos[i]);
	}

	return uni;
}

Conjunto intersecao(Conjunto c1, Conjunto c2){
	Conjunto inter = novo_conjunto();
	int i, pertence_inter;

	for(i = 0; i < c1.n; i++){
		pertence_inter = pertence(c2, c1.elementos[i]);
		if(pertence_inter){
			inter = adiciona(inter, c1.elementos[i]);
		}
	}

	return inter;
}

int main(void){
	Conjunto con1 = novo_conjunto(), con2 = novo_conjunto();
	Conjunto uni = novo_conjunto(), intersec = novo_conjunto();
	int i;

	con1 = adiciona(con1, 2);
	con1 = adiciona(con1, 4);
	con1 = adiciona(con1, 6);
	con1 = adiciona(con1, 8);
	con2 = adiciona(con2, 1);
	con2 = adiciona(con2, 3);
	con2 = adiciona(con2, 5);
	con2 = adiciona(con2, 7);

	printf("Valores do primeiro conjunto: \n");
	for(i = 0; i < con1.n; i++){
		printf("%d\n", con1.elementos[i]);
	}

	printf("Valores do segundo conjunto: \n");
	for(i = 0; i < con2.n; i++){
		printf("%d\n", con2.elementos[i]);
	}

	con1 = adiciona(con1, 2);
	con2 = adiciona(con2, 3);

	con2 = adiciona(con2, 2);

	uni = uniao(con1, con2);
	intersec = intersecao(con1, con2);

	printf("União dos dois conjuntos: \n");
	for(i = 0; i < uni.n; i++){
		printf("%d\n", uni.elementos[i]);
	}

	printf("Intersecção dos dois conjuntos: \n");
	for(i = 0; i < intersec.n; i++){
		printf("%d\n", intersec.elementos[i]);
	}

	return 0;
}
