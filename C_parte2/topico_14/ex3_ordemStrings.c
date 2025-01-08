#include <stdio.h>

int len(char str[]){

    int tam = 0;

    while (str[tam] != '\0')
    {
        tam++;
    }

    return tam;

}

int ordena_strings(char str1[], char str2[]){

    int i, n = 0;

    if (len(str1) >= len(str2))
    {
        n = len(str1);
    }else{
        n = len(str2);
    }


    for (i = 0; i < n; i++)
    {
        if (str1[i] < str2[i])
        {
            return -1;
        }else if (str2[i] < str1[i])
        {
            return 1;
        }
    }

    return 0;
}

int main(void)
{
    char c1[] = "azar", c2[] = "asas", c3[] = "guina", c4[] = "guina";

    printf("%d\n", ordena_strings(c1, c2));
    printf("%d\n", ordena_strings(c3, c4));

    return 0;
}
