#include <stdio.h>


int main(void)
{
    float num, soma = 0;
    int continuar = 1;

    while (continuar)
    {
        printf("Digite um valore, ou 's' para sair: ");

        continuar = scanf("%f", &num); //! se for digitado um caracter o continuar será equivalente à 0, caso contrario 1

        if (continuar) //! Se continuar for true(1) ele soma, caso o contrário, sai do loop por causa da condição do while
        {
            soma += num;
        }
    }

    printf("Soma: %.2f\n", soma);
    

    return 0;
}
