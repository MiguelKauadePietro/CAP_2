def verifica_diagonal(valores):
    nl = len(valores)
    nc = len(valores[0])

    for i in range(0, nl):
        for j in range(0, nc):
            if i != j and valores[i][j] != 0:
                return False

    return True

def testes():

    valores = [[4, 0, 0], [0, 2, 0], [0, 0, 6]]

    print(verifica_diagonal(valores))

    valores1 = [[4, 1, 0], [0, 2, 0], [0, 0, 6]]

    print(verifica_diagonal(valores1))



testes()

