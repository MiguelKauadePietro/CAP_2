#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct {
	char nome[50];
	int ra;
	float nota;
}Aluno;

int main(void){

	char buffer[100];
	Aluno dado_alunos;

	printf("Insira o nome do aluno: ");
	fgets(buffer, sizeof(buffer), stdin);
	buffer[strlen(buffer) - 1] = '\0';
	strcpy(dado_alunos.nome, buffer);

	printf("Insira o RA: ");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%d", &dado_alunos.ra);

	printf("Insira a nota: ");
	fgets(buffer, sizeof(buffer), stdin);
	sscanf(buffer, "%f", &dado_alunos.nota);


	printf("Dados do aluno: \n");
	printf("Nome: %s\n", dado_alunos.nome);
	printf("RA: %d\n", dado_alunos.ra);
	printf("Nota: %.1f\n", dado_alunos.nota);
}
