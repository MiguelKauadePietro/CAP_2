#include <stdio.h>

//Essa função recebe como parâmetro um vetor(vet) e um inteiro tam(tamanho do respectivo vetor)
//Ela tem por função(KKKKKK) verificar se o vetor está ordenado em ordem crescente ou não, se ele está, a função retorna 1, caso contrário a função retorna 0
int ordenado(int vet[], int tam){
	int i;

	for(i = 0; i < tam-1; i++){
		if(vet[i] > vet[i+1]){
			return 0;
		}
	}
	return 1;
}

int main(void){

	//TESTES
	int vet1[5] = {1, 2, 3, 4, 5}, vet2[5] = {1, 2, 4, 3, 5};

	printf("%d\n", ordenado(vet1, 5));	

	printf("%d\n", ordenado(vet2, 5));

	return 0;

}
