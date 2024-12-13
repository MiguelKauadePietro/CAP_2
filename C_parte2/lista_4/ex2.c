#include <stdio.h>


int main(void)
{
    
    int idade;

    printf("Insira a idade do atleta para saber sua categoria: ");
    scanf("%d", &idade);

    if (idade < 5)
    {
        printf("Seu filho eh muito novo para ser uma atleta, ele precisa ter no minimo 5 anos!!!\n");
    }else if (idade >= 5 && idade <= 7){
        printf("Infantil A: 5 a 7 anos\n");
    }else if (idade >= 8 && idade <= 10)
    {
        printf("Infantil B: 8 a 10 anos\n");
    }else if(idade >= 11 && idade <= 13){
        printf("Juvenil A: 11 a 13 anos\n");
    }else if (idade >= 14 && idade <= 17){
        printf("Juvenil B: 14 a 17 anos\n");
    }else{
        printf("Adulto: Maior de 18 anos\n");
    }

    return 0;
}
