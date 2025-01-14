#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Aluno{
	char nome[50];
	int idade;
	int RA;
};


int main(){

struct Aluno aluno;

strcpy(aluno.nome, "Miguel");
aluno.idade = 18;
aluno.RA = 831397;

printf("%s\n", aluno.nome);
printf("%d\n", aluno.idade);
printf("%d\n", aluno.RA);

return 0;

}
