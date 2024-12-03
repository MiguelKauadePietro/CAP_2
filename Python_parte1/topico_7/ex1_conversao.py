def conversao(binario):
    tam = len(binario)

    soma = 0

    for i in range(tam):
        if binario[i] == '1':
            total =  2 ** (tam - (i + 1))
            soma += total

    return soma


def testes():

    num_bin = "010101"

    print(conversao(num_bin))


testes()