def encontra_valor(mat, val):
    nl = len(mat)
    nc = len(mat[0])
    lc = []

    for i in range(nl):
        for j in range(nc):
            if mat[i][j] == val:
                lc.append(i)
                lc.append(j)
                return lc

    return -1


def testes():

    valores = [[1, 6, 2], [7, 4, 8], [2, 9, 1]]

    n = 7

    n2 = 1

    print(encontra_valor(valores, n))

    print(encontra_valor(valores, n2))



testes()