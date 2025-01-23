#include <stdio.h>
#define N 10 

int main(void){
	int i, n, menor = 0, valores[N], cont = 0;

	//Entrada de quantos valores serão digitados

	printf("Insira a quantidade de valores a ser digitada: ");
	scanf("%d", &n);

	for(i = 0; i < n; i++){ //Itera sobre os valores digitados
		printf("Insira os valores aqui: ");
		scanf("%d", &valores[i]);
	}

	for(i = 0; i < n; i++){
		if(valores[i] > menor){ //Se valores for maior que 0
			menor = valores[i];
			cont++; //Contador para verificar se teve um número maior que zero(positivo)
		}
	}
		
	for(i = 0; i < n; i++){

		if(valores[i] >= 0 && valores[i] < menor){
			menor = valores[i];
		}
	}


	if(cont == 0){ //se o contador foi igual à 0, ele imprime que não há nenhum valor positivo no conjunto de valores
		printf("Não há valores positivos!\n");
	}else{
		printf("O menor valor é: %d\n", menor); //caso tenha um valor menor positivo, ele retorna qual valor foi o menor
	}
	return 0;
}
