#include <stdio.h>


int main()
{
    int n, num, i, maior;

    printf("Insira a quantidade de número a serem digitados: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Insira um número: ");
        scanf("%d", &num);

        if (i == 0)
        {
            maior = num;
        }else{
            if(num > maior){
                maior = num;
            }
        }

    }

    printf("%d é o maior valor\n", maior);

    return 0;
}
