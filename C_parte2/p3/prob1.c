#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TAM_MAX 100

typedef struct {
    char nome_modelo[TAM_MAX];
    char marca[TAM_MAX];
    int ano_fabricacao;
    float preco;
}Celular;

Celular read_info(Celular cell){ //* criando a função read_info para ler as informações do registro

    char buffer[TAM_MAX];

    fgets(cell.nome_modelo, sizeof(cell.nome_modelo), stdin); //* Lendo com fgets por causa do buffer de entrada
    cell.nome_modelo[strlen(cell.nome_modelo) - 1] = '\0';

    fgets(cell.marca, sizeof(cell.marca), stdin);
    cell.marca[strlen(cell.marca) - 1] = '\0';

    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &cell.ano_fabricacao); //* utilizando sscanf por causa do buffer também

    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &cell.preco);

    return cell;

}

void imprime(Celular c){ //* Imprimindo as informações do registro
    printf("%s\n", c.nome_modelo);
    printf("%s\n", c.marca);
    printf("%d\n", c.ano_fabricacao);
    printf("%.2f\n", c.preco);
}

int main(void)
{
    Celular cell;

    cell = read_info(cell);

    imprime(cell);


    return 0;
}
