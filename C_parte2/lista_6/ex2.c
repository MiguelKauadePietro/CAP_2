#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromo(char str1[]){
    int t1, i;

    t1 = strlen(str1);

    for (i = 0; i < t1; i++)
    {
        if (str1[i] != str1[t1-i-1])
        {
            return 0;
        }
    }

    return 1;

}

int main(void)
{
    char p1[] = "osso";

    printf("%d\n", palindromo(p1));
    return 0;
}
