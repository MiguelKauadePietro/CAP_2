#include <stdio.h>
#include <string.h>
#include <ctype.h>


int strcmp_atualizado(char str1[], char str2[]){

    int tam1, tam2, i, res, n;

    tam1 = strlen(str1);
    tam2 = strlen(str2);

    if (tam1 >= tam2)
    {
        n = tam1;
    }else{
        n = tam2;
    }

    for (i = 0; i < n; i++)
    {
        if (str1[i] < 'a')
        {
            str1[i] = tolower(str1[i]);
        }

        if (str2[i] < 'a')
        {
            str2[i] = tolower(str2[i]);
        }
    }

    res = strcmp(str1, str2);

    return res;

}


int main(void)
{
    char p1[] = "casa", p2[] = "Casa";

    printf("%d\n", strcmp_atualizado(p1, p2));

    return 0;
}
