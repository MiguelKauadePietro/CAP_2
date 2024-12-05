#include <stdio.h>



int main(void)
{
    int opcao;

    printf("Menu\n-------------\n1. X-burguer\n2. X-bacon\n3. X-tudo\nInsira o número da opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Você pediu um X-Burguer, ficará por R$14,50\n");
        break;
    case 2:
        printf("Você pediu um X-Bacon, ficará por R$19,75\n");
        break;
    case 3:
        printf("Você pediu um X-Tudo, ficará por R$25,95\n");
        break;
    default:
        printf("Opção Inválida");
        break;
    }

    return 0;
}
