#include <stdio.h>
#define N 5

int repetido(int valores[], int tam){
    int i, j;

    //! Lógica 1

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam - 1; j++)
        {
            if (i != j)
            {
                if (valores[i] == valores[j])
                {
                    return 1;
                }
            }
        }
    }

    //! Lógica 2

    // for (i = 0; i < tam; i++)
    // {
    //     for (j = i+1; j < tam; j++)
    //     {
    //         if (valores[i] == valores[j])
    //         {
    //             return 1;
    //         }
    //     }
    // }

    return 0;

}

int main(void)
{
    int val[N] = {1, 3, 5, 4, 1}, val2[] = {1, 2, 3, 4, 5};

    printf("%d\n", repetido(val, N));
    printf("%d\n", repetido(val2, N));

    return 0;
}
