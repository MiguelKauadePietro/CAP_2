def compara_listas(lista1, lista2):
        n = len(lista1)

        for i in range(n):
            if lista1[i] != lista2[i]:
                return False

        return True

def completa_coluna(valores, indice):
    nl = len(valores)

    colunas = [0] * nl

    for i in range(0, nl):
        colunas[i] = valores[i][indice]

    return colunas


def compara_coluna(valores):
        nc = len(valores[0])

        for i_c1 in range(nc):
            for i_c2 in range(nc):
                if i_c1 != i_c2:
                    col1 = completa_coluna(valores, i_c1)
                    col2 = completa_coluna(valores, i_c2)
                    iguais = compara_listas(col1, col2)
                    if iguais:
                        return True

        return False

def testes():

    valores = [
        [1, 2, 3],
        [1, 1, 0],
        [2, 1, 3]]

    print(compara_coluna(valores))

    valores1 = [
        [1, 2, 1],
        [2, 3, 2],
        [4, 2, 4]]

    print(compara_coluna(valores1))


testes()

