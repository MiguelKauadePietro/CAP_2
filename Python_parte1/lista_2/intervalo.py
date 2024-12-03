def soma_sequencia(n1, n2):

    soma = 0

    if n1 > n2:
        temp = n2
        n2 = n1
        n1 = temp


        for i in range(n1, n2):
            soma += i

    elif n2 > n1:

        for i in range(n1, n2):
            soma += i
    else:
        soma = 0

    return soma


def testes():


    num1 = 1
    num2 = 3

    print(soma_sequencia(num1, num2))

    num1 = -1
    num2 = 10

    print(soma_sequencia(num1, num2))



testes()
