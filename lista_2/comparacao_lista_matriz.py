def compara_lista_e_matriz(mat, list):

    nl = len(mat)
    nc = len(mat[0])

    fl = len(list)

    for i in range(nl):
        for j in range(nc):
            if mat[i][j] == list[i * nc + j]:
                return True

            return False


def testes():

    valores = [[1, 6, 2], [7, 4, 8], [2, 9, 1]]

    lista = [1, 6, 2, 7, 4, 8, 2, 9, 1]

    print(compara_lista_e_matriz(valores, lista))


testes()