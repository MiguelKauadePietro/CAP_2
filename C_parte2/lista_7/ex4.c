#include <stdio.h>
#include<string.h>
#include <ctype.h>

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

Pessoa recebe_pessoa(void){
    Pessoa p;
    char buffer[100];

    //! Inserindo o nome da pessoa
    printf("Digite o nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strlen(p.nome) - 1] = '\0';

    //! Inserindo a idade da pessoa
    printf("Insira a idade: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &p.idade);

    //! Inserindo o endereço da pessoa
    printf("Digite o Endereço: ");
    fgets(p.endereco, sizeof(p.endereco), stdin);
    p.endereco[strlen(p.endereco) - 1] = '\0';

    return p;
}

Funcionario recebe_funcionario(void){
    Funcionario func;
    char buffer[100];
    func.pessoa = recebe_pessoa(); //! Recebendo os dados da pessoa

    //! Inserindo os dados do funcionário

    printf("Insira seu cargo na empresa: ");
    fgets(func.cargo, sizeof(func.cargo), stdin);
    func.cargo[strlen(func.cargo) - 1] = '\0';

    printf("Insira o seu salário: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &func.salario);

    return func;

}

Empresa recebe_varios_funcionarios(void){
    Empresa e;
    int i;
    char buffer[100];

    //! Recebendo a quantidade de funcionários de forma que não contenha lixo no buffer
    printf("Insira a quantidade de funcionários: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &e.n_funcionarios);

    for (i = 0; i < e.n_funcionarios; i++)
    {
        e.funcionarios[i] = recebe_funcionario();
    }

    return e;
}

void imprime(Empresa empresa){
    int i;

    for (i = 0; i < empresa.n_funcionarios; i++)
    {
        printf("Informações do funcionário %d: \n", i+1);
        printf("Nome: %s\n", empresa.funcionarios[i].pessoa.nome);
        printf("Idade: %d\n", empresa.funcionarios[i].pessoa.idade);
        printf("Endereço: %s\n", empresa.funcionarios[i].pessoa.endereco);
        printf("Cargo na empresa: %s\n", empresa.funcionarios[i].cargo);
        printf("Salário: %.2f\n", empresa.funcionarios[i].salario);
    }
}

int main()
{
    Pessoa p;
    Funcionario f;
    Empresa e;

    e = recebe_varios_funcionarios();

    imprime(e);

    return 0;
}

