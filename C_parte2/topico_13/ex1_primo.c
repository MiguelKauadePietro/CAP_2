#include <stdio.h>

int primo(int n){
    int total;

    if (n <= 1)
    {
        return 0;
    }

    for (int i = 2; i < n; i++)
    {
        total = n % i;

        if (total == 0)
        {
            return 0;
        }
    }
    return 1;
}


int main(void)
{
    printf("%d\n", primo(2));
    printf("%d\n", primo(4));
    printf("%d\n", primo(1));
    printf("%d\n", primo(29));
    printf("%d\n", primo(19));
    printf("%d\n", primo(23));
    printf("%d\n", primo(61));
    printf("%d\n", primo(44));
    printf("%d\n", primo(0));
    return 0;
}
