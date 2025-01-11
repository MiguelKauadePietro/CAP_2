#include <stdio.h>
#include <string.h>  // Para as funções strlen e strcmp
#include <ctype.h>

#define NL 10
#define NC 20

int main(void) {

    char matriz[NL][NC] = {
        {'S', 'Q', 'B', 'P', 'B', 'W', 'C', 'T', 'T', 'I', 'J', 'E', 'B', 'K', 'E', 'R', 'E', 'G', 'B', 'V'},
        {'W', 'D', 'L', 'F', 'F', 'O', 'O', 'L', 'Q', 'D', 'Q', 'B', 'U', 'W', 'L', 'A', 'L', 'X', 'I', 'N'},
        {'T', 'Y', 'A', 'N', 'A', 'G', 'M', 'F', 'X', 'B', 'G', 'E', 'I', 'S', 'E', 'A', 'W', 'L', 'B', 'X'},
        {'J', 'F', 'D', 'I', 'W', 'W', 'P', 'D', 'B', 'C', 'W', 'R', 'Q', 'X', 'O', 'W', 'Z', 'K', 'T', 'O'},
        {'U', 'R', 'V', 'U', 'V', 'A', 'U', 'Z', 'E', 'F', 'C', 'V', 'D', 'C', 'A', 'J', 'M', 'D', 'D', 'H'},
        {'P', 'Q', 'C', 'S', 'I', 'W', 'T', 'N', 'G', 'A', 'G', 'P', 'U', 'E', 'W', 'P', 'P', 'Q', 'E', 'Q'},
        {'W', 'S', 'X', 'R', 'Q', 'Y', 'A', 'Q', 'T', 'F', 'U', 'H', 'E', 'J', 'B', 'N', 'O', 'D', 'X', 'A'},
        {'E', 'E', 'U', 'Y', 'S', 'P', 'C', 'K', 'J', 'D', 'D', 'R', 'A', 'I', 'R', 'W', 'L', 'K', 'K', 'F'},
        {'X', 'M', 'W', 'P', 'P', 'V', 'A', 'M', 'A', 'G', 'B', 'P', 'U', 'O', 'A', 'T', 'Y', 'U', 'O', 'T'},
        {'R', 'R', 'A', 'Z', 'R', 'H', 'O', 'N', 'X', 'S', 'Y', 'S', 'Z', 'V', 'K', 'Z', 'L', 'O', 'D', 'F'},
    };

    char palavra[20], palavra_oculta[20] = "COMPUTACAO";

    int res, i;

    // Mostra a matriz de caracteres
    for (int i = 0; i < NL; i++) {
        for (int j = 0; j < NC; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }

    fgets(palavra, sizeof(palavra), stdin);
    palavra[strlen(palavra) - 1] = '\0';

    for (i = 0; i < strlen(palavra); i++)
    {
        if (palavra[i] >= 'a')
        {
            palavra[i] = toupper(palavra[i]);
        }
    }

    res = strcmp(palavra, palavra_oculta);

    printf("%d\n", res);

    return 0;
}
