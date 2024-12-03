def verifica_negativos(valores):
    cont = 0
    tam = len(valores)

    for i in range(tam):
        if valores[i] < 0:
            cont += 1

    return cont


def testes():


    numbers = [-1, 19, -19, 190, -190]

    print(verifica_negativos(numbers))




testes()