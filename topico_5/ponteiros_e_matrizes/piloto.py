def soma_valores(valores):
    """Recebe como entrada uma matriz e retorna a soma dos valores:
    Parâmetros: A matriz com os valores
    Retorna: A soma dos valores das colunas e linhas da matriz"""

    nl = len(valores)

    nc = len(valores[0])

    soma = 0

    for i in range(0, nl):
        for j in range(0, nc):
            soma += valores[i][j]

    return soma

def testes():

    valores = [
        [3, 1, 2],
        [4, 3, 2],
        [1, 0, 2]
    ]
    print(soma_valores(valores))




testes()