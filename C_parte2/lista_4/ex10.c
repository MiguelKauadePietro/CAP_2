#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    srand(time(NULL));
    int num_secreto = rand() % 9 + 1, chute, tentativas = 0, opcao;
    float creditos = 0.0, creditosAdd;
    bool acertou = false;
    printf("%d\n", num_secreto);

    while (opcao != 3)
    {
        printf("Menu\n--------\n1. Inserir Créditos (Você possui %.2f)\n2. Jogar\n3. Sair\n", creditos);
        printf("Insira a opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Insira a quantidade de créditos que você deseja depositar: ");
            scanf("%f", &creditosAdd);
            creditos += creditosAdd;
            break;
        case 2:
            while (!acertou)
            {
                if (creditos <= 0)
                {
                    printf("Insira mais créditos para continuar jogando(Inserindo a opção 1)...\n");
                    break;
                }
                tentativas++;

                creditos -= 5.00;
                printf("Insira seu chute: ");
                scanf("%d", &chute);

                if (chute == num_secreto)
                {
                    creditos += 50.00;
                    printf("Parabéns, você acertou o número secreto em %d tentativa(s), tome 50 conto!!!\n", tentativas);
                    acertou = true;
                }
            }
            break;
        case 3:
            printf("Até mais!!!\n");
            break;
        default:
            printf("Opção inválida!\n");
            break;
        }
    }

    return 0;
}
