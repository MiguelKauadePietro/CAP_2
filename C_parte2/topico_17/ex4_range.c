#include <stdio.h>
#include <stdlib.h>

int *range(int inicial, int final){
    int *r;
    int n;
    int cont = inicial;

    n = final - inicial;

    r = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        r[i] = cont++;
    }

    return r;
}

int main(void)
{
    int *p;
    int i;
    int start = 10;
    int end = 19;

    p = range(start, end);

    for (i = 0; i < (end - start); i++)
    {
        printf("%d\n", p[i]);
    }

    free(p);

    return 0;
}
