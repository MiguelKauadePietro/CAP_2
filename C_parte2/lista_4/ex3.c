#include <stdio.h>

int main(void)
{

    int codigo;

    printf("Insira o codigo do produto que voce deseja comprar: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 100:
        printf("Voce selecionou o Cachorro quente, ficara R$ 6,00 reais\n");
        break;
    case 101:
        printf("Voce selecionou o Refrigerante, ficara R$ 4,00 reais\n");
        break;
    case 112:
        printf("Voce selecionou o Pao na chapa, ficara R$ 4,50 reais\n");
        break;
    case 124:
        printf("Voce selecionou o Pao de queijo, ficara R$ 2,50 reais\n");
        break;
    default:
        printf("Opcao invalida!!!\n");
        break;
    }


    return 0;
}