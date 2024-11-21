def produto_listas(list1, list2):
    nl = len(list1)

    soma = 0

    for i in range(0, nl):
        soma += list1[i] * list2[i]

    return soma


def completa_coluna(valores, indice):
    nl = len(valores)

    colunas = [0] * nl

    for i in range(0, nl):
        colunas[i] = valores[i][indice]

    return colunas


def produto(mat1, mat2):
    nl1 = len(mat1)
    nl2 = len(mat2)
    nc1 = len(mat1[0])
    nc2 = len(mat2[0])

    mat_res = [[0] * nc2 for i in range(nl1)]

    for i in range(0, nl1):
        linha1 = mat1[i]
        for j in range(0, nc2):
            col1 = completa_coluna(mat2, j)
            produto = produto_listas(mat1[i], col1)
            mat_res[i][j] = produto

    return mat_res


def testes():

    lista1 = [2, 3, 1]
    lista2 = [0, 3, 1]

    print(produto_listas(lista1, lista2))

    m1 = [[1, 2, 3], [0, 1, 2]]
    m2 = [[1, 1, 2], [2, 1, 1], [1, 0, 2]]

    print(produto(m1, m2))


testes()