#include <stdio.h>
#define N_MAX 100


typedef struct {
	int elementos[N_MAX];
	int n;
	int n_max;
}Conjunto;

void novo_conjunto(Conjunto *con){
	con->n = 0;
	con->n_max = N_MAX;
}

int pertence(Conjunto *con, int val){
	int i;

	for(i = 0; i < con->n; i++){
		if(con->elementos[i] == val){
			return 1;
		}
	}
	return 0;
}

void adiciona(Conjunto *con, int valor){
	int pertence_con = 0;

	pertence_con = pertence(con, valor);

	if(pertence_con || con->n >= con->n_max){
		printf("Não é possível adicionar esse valor, pois esse valor já pertence à esse conjunto ou o vetor atingiu seu número máximo de elementos que poderia ter.\n");
	}else{
		con->elementos[con->n++] = valor;
	}
}

void uniao(Conjunto *c1, Conjunto *c2, Conjunto *uni){
    novo_conjunto(uni);
	int i;

	for(i = 0; i < c1->n; i++){
		adiciona(uni, c1->elementos[i]);
	}

	for(i = 0; i < c2->n; i++){
		adiciona(uni, c2->elementos[i]);
	}
}

void intersecao(Conjunto *c1, Conjunto *c2, Conjunto *inter){
    novo_conjunto(inter);

	int i, pertence_inter;

	for(i = 0; i < c1->n; i++){
		pertence_inter = pertence(c2, c1->elementos[i]);
		if(pertence_inter){
			adiciona(inter, c1->elementos[i]);
		}
	}
}

int main(void){
	Conjunto con1, con2;
	Conjunto uni, intersec;

    novo_conjunto(&con1);
    novo_conjunto(&con2);
    novo_conjunto(&uni);
    novo_conjunto(&intersec);
	int i;

	adiciona(&con1, 2);
	adiciona(&con1, 4);
	adiciona(&con1, 6);
	adiciona(&con1, 8);
	adiciona(&con2, 1);
	adiciona(&con2, 3);
	adiciona(&con2, 5);
	adiciona(&con2, 7);

	printf("Valores do primeiro conjunto: \n");
	for(i = 0; i < con1.n; i++){
		printf("%d\n", con1.elementos[i]);
	}

	printf("Valores do segundo conjunto: \n");
	for(i = 0; i < con2.n; i++){
		printf("%d\n", con2.elementos[i]);
	}

	adiciona(&con1, 2);
	adiciona(&con2, 3);

	adiciona(&con2, 2);

	uniao(&con1, &con2, &uni);
	intersecao(&con1, &con2, &intersec);

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
