#include <stdio.h>


int main(void)
{
    int qtdChoc, qtdSor, qtdBol;
    float precoChoc, precoSor, precoBol, precoTotal;

    qtdChoc = 2;
    precoChoc = 4.5;

    qtdSor = 2;
    precoSor = 10.5;

    qtdBol = 3;
    precoBol = 5.5;

    precoTotal = qtdChoc * precoChoc + qtdSor * precoSor + qtdBol * precoBol;

    printf("O total da compra é de: %.2f\n", precoTotal);

    return 0;
}
