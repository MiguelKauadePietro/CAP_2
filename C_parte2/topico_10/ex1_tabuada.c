#include <stdio.h>

int main(void)
{
    int i = 0, num;

    printf("Insira um número para saber a sua tabuada: ");
    scanf("%d", &num);

    //! primeiro laço

    for (i = 1; i <= 100; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    //! segundo laço

    // while (i < 100)
    // {
    //     i++;

    //     printf("%d x %d = %d\n", num, i, num * i);
    // }

    //! terceiro loop

    // do
    // {
    //     i++;

    //     printf("%d x %d = %d\n", num, i, num * i);
    // } while (i < 100);


    return 0;
}
