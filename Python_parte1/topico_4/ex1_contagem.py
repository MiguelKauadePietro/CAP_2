def contagem(valores, num):
    """Descreção:
        Função que conta o número de ocorrências
        de um número em uma lista:

        Parâmetros: lista e o número que possa ou não estar na lista

        Retorna: o contador indicando a frequência do número na lista
    """
    cont = 0

    for i in range(len(valores)):
        if num == valores[i]:
            cont += 1

    return cont

def tests():

    #teste 1

    lista = [1, 3, 5, 5, 7, 9]

    num = 5

    result = contagem(lista, num) #valor 2 esperado

    print(result)

    #teste 2

    lista = [1, 3, 5, 5, 7, 9]

    num = 11

    result = contagem(lista, num) #valor 0 esperado

    print(result)

    #teste 3

    lista = []

    num = 2

    result = contagem(lista, num) #valor 0 esperado

    print(result)

tests()