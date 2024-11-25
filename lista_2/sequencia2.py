def sequencia(valores):
    tam = len(valores)

    cont = 0

    seq = [1, 2]

    for i in range(0, tam, 2):
        if valores[i] == seq:
            cont += 1
    return cont


def testes():


    val = [1, 2, 5, 4, 2, 1, 2, 6, 8, 4, 3, 1, 2, 4]

    print(sequencia(val))


testes()