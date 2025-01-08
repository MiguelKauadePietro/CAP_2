#include <stdio.h>

//! Função que recebe como parâmetro uma string, caracter c1(o que vai ser substituido) e o caracter c2(o que vai substituir o c1)

//! no loop ele verifica se a string chegou ao '\0', se não chegou ele incrementa o índice(pré-incrementação) e depois verifica se o valor do índice i é igual à c1, se for, substitui o valor do índice i por c2

void substitui(char str[], char c1, char c2){

    int i = 0;

    // primeira forma

    // while (str[i] != '\0')
    // {
    //     if (str[++i] == c1)
    //     {
    //         str[i] = c2;
    //     }
    // }


    //segunda forma
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c1)
        {
            str[i] = c2;
        }
    }
}

int main(void)
{
    char msg[] = "a,b,c,d", c1 = ',', c2 = ' ';

    substitui(msg, c1, c2);

    printf("%s\n", msg);
    return 0;
}
