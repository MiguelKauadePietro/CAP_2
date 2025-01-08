#include <stdio.h>
#include <string.h>

void substui_palavra(char texto[], char busca[], char subs[], char res[]){

    //! strcpy(), strstr(), strchr()

    int indice, i;

    indice = strstr(texto, busca) - texto;

    strcpy(res, texto);

    for (i = 0; i < strlen(subs); i++)
    {
        res[indice + i] = subs[i];
    }

}

int main(void)
{
    char text[] = "Ano que vem Paulo ira prestar o vestibular", busca[] = "Paulo", subs[] = "Lucas", res[100];

    substui_palavra(text, busca, subs, res);

    printf("%s\n", res);
    return 0;
}
