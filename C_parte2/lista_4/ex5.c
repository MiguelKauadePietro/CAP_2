#include <stdio.h>
#include <math.h>

int main(void)
{
    float a, b, c, x1, x2, delta;

    printf("Insira os valores de a, b e c: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if (a == 0)
    {
        if (b == 0)
        {
            printf("Não existe nenhuma raíz\n");
        }else{
            x1 = -c / b;
            printf("Há apenas uma raíz real: %.2f\n", x1);
        }
    }else{
        delta = pow(b, 2) - (4*a) * c;

        if (delta < 0)
        {
            printf("Não há raízes reais\n");
        }else if (delta == 0)
        {
            x1 = -b / (2 * a);
            printf("Há apenas uma raíz real: %.2f\n", x1);
        }else{
            x1 = -b + sqrt(pow(b, 2) - 4*a * c) / (2*a);
            x2 = -b - sqrt(pow(b, 2) - 4*a * c) / (2*a);
            printf("Há apenas 2 raízes reais: %.2f e %.2f\n", x1, x2);
        }
    }

    return 0;
}

