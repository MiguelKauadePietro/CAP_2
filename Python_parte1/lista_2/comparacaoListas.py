def compara_listas(lista1, lista2):
    tam = len(lista1)

    cont = 0

    for i in range(tam):
        if lista1[i] > lista2[i]:
            cont += 1
    
    return cont


def testes():

    valores1 = [6, 2, 8, 4, 8, 9, 12, 16, 4, 7]
    valores2 = [8, 2, 5, 8, 3, 6, 18, 12, 4, 6]

    print(compara_listas(valores1, valores2))

testes()