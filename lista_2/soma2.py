def soma_listas(list1, list2):

    tam1 = len(list1)

    tam2 = len(list2)

    soma = 0

    soma1 = 0

    for i in range(tam1):
        soma += list1[i]

    for i in range(tam2):
        soma1 += list2[i]

    soma_total = soma + soma1

    return soma_total


def testes():


    valores1 = [5, 4, 2]
    valores2 = [2, 5, 4, 2, 10]

    print(soma_listas(valores1, valores2))


testes()