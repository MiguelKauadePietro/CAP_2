#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    srand(time(NULL));
    int num_secreto = rand() % 20 + 1;
    int rounds = 0, chute;
    bool acertou = false;

    printf("%d\n", num_secreto);

    while (rounds < 5)
    {
        rounds++;
        printf("Insira um chute: ");
        scanf("%d", &chute);

        if (chute == num_secreto)
        {
            printf("Fim de jogo!\n");
            acertou = true;
            rounds = 5;
        }else{
            printf("Você errou, tente novamente!!!\n");
        }
    }

    if (acertou)
    {
        printf("Você acertou, parabéns!!!\n");
    }else{
        printf("Boa sorte da próxima vez!!!\n");
    }
    


    return 0;
}
