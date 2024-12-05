#include <stdio.h>

int main(void)
{
    int qtdChoc, qtdBol, qtdSor;
    float precoChoc, precoBol, precoSor, total;

    printf("Insira a quantidade de chocolates a ser comprado: ");
    scanf("%d", &qtdChoc);

    printf("Insira a quantidade de bolachas a ser comprado: ");
    scanf("%d", &qtdBol);

    printf("Insira a quantidade de sorvetes a ser comprado: ");
    scanf("%d", &qtdSor);

    printf("Insira o preço do chocolate: ");
    scanf("%f", &precoChoc);

    printf("Insira o preço da bolacha: ");
    scanf("%f", &precoBol);

    printf("Insira o preço do sorvete: ");
    scanf("%f", &precoSor);


    total = qtdChoc * precoChoc + qtdBol * precoChoc + qtdSor * precoSor;

    printf("Total da compra: %.2f\n", total);

    if(total < 50){
        printf("Pagar no pix\n");
    }else if(total >= 50 && total < 150){
        printf("Pagar no cartão\n");
    }else{
        printf("Fazer empréstimo\n");
    }

    return 0;
}
