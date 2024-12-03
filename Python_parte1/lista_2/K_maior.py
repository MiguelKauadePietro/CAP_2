def maior_k(mat, k):
    nl = len(mat)
    nc = len(mat[0])

    cont = 0

    for i in range(nl):
        for j in range(nc):
            if mat[i][j] > k:
                cont += 1

    return cont


def testes():

    valores = [[2, 12, 8], [6, 9, 3], [4, 15, 3]]

    n = 6

    print(maior_k(valores, n))


testes()