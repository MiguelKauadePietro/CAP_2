#include <stdio.h>
#include <string.h>

typedef struct { //* criação do registro Aluno
    char nome[100];
    char RA[20];
    int idade;
} Aluno;

Aluno* busca_aluno(Aluno alunos[], int n, char* nome) {
    for (int i = 0; i < n; i++) {
        if (strcmp(alunos[i].nome, nome) == 0) { //* verificando se o nome está no vetor
            return &alunos[i];
        }
    }
    return NULL;
}

int main() {
    Aluno alunos[] = { //* testando com valores prontos
        {"Aline Silveira", "123456", 20},
        {"Bruno Souza", "654321", 22},
        {"Carlos Pereira", "111222", 21}
    };
    int n = sizeof(alunos) / sizeof(alunos[0]);

    Aluno* p_aluno = busca_aluno(alunos, n, "Aline Silveira");
    if (p_aluno != NULL) { //* caso aluno for encontrado,exibe as informações
        printf("Aluno encontrado: %s, RA: %s, Idade: %d\n", p_aluno->nome, p_aluno->RA, p_aluno->idade);
    } else {
        printf("Aluno não encontrado.\n"); //* caso não for encontrado o aluno no vetor
    }

    return 0;
}