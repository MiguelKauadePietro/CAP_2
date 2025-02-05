#include <stdio.h>
#include<string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_TAM 50
#define MAX_FUNC 1000

typedef struct {
    char nome[MAX_TAM];
    int idade;
    char endereco[MAX_TAM];
}Pessoa;

typedef struct {
    Pessoa pessoa;
    char cargo[MAX_TAM];
    float salario;
}Funcionario;

typedef struct {
    Funcionario funcionarios[MAX_FUNC];
    int n_funcionarios;
}Empresa;

void recebe_pessoa(Pessoa *p){
    char buffer[100];

    //! Inserindo o nome da pessoa
    printf("Digite o nome: ");
    fgets(p->nome, sizeof(p->nome), stdin);
    p->nome[strlen(p->nome) - 1] = '\0';

    //! Inserindo a idade da pessoa
    printf("Insira a idade: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &p->idade);

    //! Inserindo o endereço da pessoa
    printf("Digite o Endereço: ");
    fgets(p->endereco, sizeof(p->endereco), stdin);
    p->endereco[strlen(p->endereco) - 1] = '\0';
}

void recebe_funcionario(Funcionario *func){ //! Passando um ponteiro que aponta para o registro Funcionário para que seja "fixado" na memória os valores e não seja copiado para a função ou que não seja atribuido valores

    //* Inserindo os dados do funcionário como pessoa
    char buffer[100];
    recebe_pessoa(&func->pessoa);

    //* Inserindo os dados do funcionário

    printf("Insira seu cargo na empresa: ");
    fgets(func->cargo, sizeof(func->cargo), stdin);
    func->cargo[strlen(func->cargo) - 1] = '\0';

    printf("Insira o seu salário: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &func->salario);
}

void recebe_varios_funcionarios(Empresa *e){

    int i;
    char buffer[100];

    //* Recebendo a quantidade de funcionários de forma que não contenha lixo no buffer
    printf("Insira a quantidade de funcionários: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &e->n_funcionarios);

    for (i = 0; i < e->n_funcionarios; i++)
    {
        recebe_funcionario(&e->funcionarios[i]);
    }
}

void imprime(Empresa *empresa){
    int i;

    for (i = 0; i < empresa->n_funcionarios; i++)
    {
        printf("Informações do funcionário %d: \n", i+1);
        printf("Nome: %s\n", empresa->funcionarios[i].pessoa.nome);
        printf("Idade: %d\n", empresa->funcionarios[i].pessoa.idade);
        printf("Endereço: %s\n", empresa->funcionarios[i].pessoa.endereco);
        printf("Cargo na empresa: %s\n", empresa->funcionarios[i].cargo);
        printf("Salário: %.2f\n", empresa->funcionarios[i].salario);
    }
}

int main()
{
    Empresa e;

    recebe_varios_funcionarios(&e);

    imprime(&e);

    return 0;
}