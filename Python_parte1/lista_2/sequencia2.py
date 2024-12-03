def sequencia(valores):
    seq = [1, 2]

    tam1 = len(seq)

    tam2 = len(valores)

    cont = 0


    for i in range(tam2 - tam1):
        if valores[i:i+tam1] == seq:
            cont += 1

    return cont


def testes():


    val = [1, 2, 5, 4, 2, 1, 2, 6, 8, 4, 3, 1, 2, 4]

    print(sequencia(val))


testes()