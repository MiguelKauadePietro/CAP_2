def simetrica(mat):

    nl = len(mat)
    nc = len(mat[0])

    for i in range(nl):
        for j in range(nc):
            if mat[i][j] != mat[j][i]:
                return False

    return True


def testes():

    valores = [[3, 2, 5], [2, 3, 6], [5, 6, 7]]

    print(simetrica(valores))


testes()