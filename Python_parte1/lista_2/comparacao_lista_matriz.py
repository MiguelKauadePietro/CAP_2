def compara_lista_e_matriz(mat, list):

    nl = len(mat)
    nc = len(mat[0])

    fl = len(list)

    for i in range(nl):
        for j in range(nc):
            if mat[i][j] != list[i * nc + j]:
                return False

            return True


def testes():

    valores = [[1, 6, 2], [7, 4, 8], [2, 9, 1]]

    lista = [1, 6, 2, 7, 4, 8, 2, 9, 1]

    print(compara_lista_e_matriz(valores, lista))

    valores = [[1, 6, 2], [7, 4, 8], [2, 9, 1]]

    lista = [2, 3, 5, 8, 9, 3, 5, 4, 1]

    print(compara_lista_e_matriz(valores, lista))


testes()