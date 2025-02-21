#include <stdio.h>
#include <stdlib.h>

//* Definição do registro Aluno
typedef struct {
    char nome[50];
    int idade;
    int RA;
} Aluno;

//* Definição do registro Classe
typedef struct {
    Aluno *p_alunos;
    int n;
} Classe;

//* Função para criar um novo registro Classe
Classe *cria(int quantidade) {
    Classe *nova_classe = (Classe *)malloc(quantidade * sizeof(Classe)); //* aloca dinamicamente a memória para a nova classe
    if (nova_classe == NULL) { //* verifica se a alocação foi bem sucedida
        return NULL;
    }
    nova_classe->p_alunos = (Aluno *)malloc(quantidade * sizeof(Aluno)); //* aloca os alunos da classe
    if (nova_classe->p_alunos == NULL) {
        free(nova_classe);
        return NULL;
    }
    nova_classe->n = quantidade;
    return nova_classe;
}

//* Segunda versão da função cria
int cria_err(int quantidade, Classe *p_classe) {
    if (p_classe == NULL) {
        return 1;
    }
    p_classe->p_alunos = (Aluno *)malloc(quantidade * sizeof(Aluno)); //* aloca novamente os alunos da classe
    if (p_classe->p_alunos == NULL) { //* verifica se a alocação foi bem sucedida
        return 1;
    }
    p_classe->n = quantidade;
    return 0;
}

//* Função para liberar a memória alocada para a Classe
void libera_classe(Classe *classe) {
    if (classe != NULL) {
        if (classe->p_alunos != NULL) {
            free(classe->p_alunos);
        }
        free(classe);
    }
}

//* Função para testar as funções cria e cria_err
void testa_funcoes() {
    int quantidade = 5;
    Classe *classe1 = cria(quantidade);
    if (classe1 != NULL) {
        printf("Classe1 criada com sucesso!\n");
        libera_classe(classe1);
    } else {
        printf("Falha ao criar Classe1.\n");
    }

    Classe classe2;
    if (cria_err(quantidade, &classe2) == 0) {
        printf("Classe2 criada com sucesso!\n");
        free(classe2.p_alunos);
    } else {
        printf("Falha ao criar Classe2.\n");
    }
}

int main() {
    testa_funcoes();
    return 0;
}
