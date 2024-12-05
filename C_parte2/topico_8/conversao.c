#include <stdio.h>

int main(void)
{
    //! Casting explícito(conversão)

    char v1 = 11;
    int v2 = 10;

    v2 += (int) v1; //! convertendo e somando os valores de v1 e v2 e armazenando em v2

    printf("%d\n", v2);

    //! Casting implícito(conversão)

    char n1 = 10;
    int n2 = 20;

    n2 += n1 + n2;

    printf("%d\n", n2);

    //! mais exemplos: divisão de inteiros

    float res;

    res = (float) 3/2;

    printf("%.2f\n", res);

    int val1 = 300;
    char val2;

    val2 = val1;

    printf("%d\n", val2);

    return 0;
}
