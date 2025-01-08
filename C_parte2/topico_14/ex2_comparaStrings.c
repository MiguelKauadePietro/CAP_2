#include <stdio.h>

int len(char str[]){

    int tam = 0;

    while (str[tam] != '\0')
    {
        tam++;
    }
    
    return tam;

}

int compara_string(char str1[], char str2[]){
    int i, n;

    if (len(str1) != len(str2))
    {
        return 0;
    }

    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            return 0;
        }
    }

    return 1;

}

int main(void)
{

    char p1[] = "casado", p2[] = "casa";

    printf("%d\n", compara_string(p1, p2));

    return 0;
}
