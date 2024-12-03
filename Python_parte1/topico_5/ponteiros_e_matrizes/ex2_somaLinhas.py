def soma_linhas(valores):
    nl = len(valores)
    nc = len(valores[0])

    coluna = [0] * nl

    for i in range(0, nl):
        for j in range(0, nc):
            coluna[i] += valores[i][j]

    return coluna

def testes():


    valores = [ [1 ,2 ,1],
                [1, 2, 3],
                [2, 2, 1]
    ]

    print(soma_linhas(valores))


testes()