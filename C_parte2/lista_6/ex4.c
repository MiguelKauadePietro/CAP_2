#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 50

int abre_fecha(char str1[N]){
    int i, cont = 0;

    for (i = 0; i < strlen(str1); i++)
    {
        if (str1[i] == '(')
        {
            cont++;
        }

        if (str1[i] == ')')
        {
            cont--;
        }
    }

    if (cont < 0 || cont > 0)
    {
        return 0;
    }

    return 1;

}

int main()
{
    char p1[N];

    fgets(p1, sizeof(p1), stdin);
    p1[strlen(p1) - 1] = '\0';

    printf("%d\n", abre_fecha(p1));

    return 0;
}
