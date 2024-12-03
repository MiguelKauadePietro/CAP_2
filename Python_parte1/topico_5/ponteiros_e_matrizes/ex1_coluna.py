def completa_coluna(valores, indice):
    nl = len(valores)

    colunas = [0] * nl

    for i in range(0, nl):
        colunas[i] = valores[i][indice]

    return colunas

def testes():

    valores = [ [1, 4, 1],
                [1, 2, 3],
                [2, 1, 1]
    ]

    indice = 1

    print(completa_coluna(valores, indice))

testes()