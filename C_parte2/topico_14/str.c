#include <stdio.h>

//! Padrão para iterar uma string
int contagem(char mensagem[], char carac){
    int i = 0, cont = 0;

    while (mensagem[i] != '/0')
    {
        if (mensagem[i++] == carac)
        {
            cont++;
        }
    }

    return cont;
}

int main(void)
{
    char c;

    

    return 0;
}
