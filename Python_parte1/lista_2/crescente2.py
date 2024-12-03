def crescente(n1, n2, n3):

    champs = []

    if n2 < n1 and n2 < n3:
        temp = n2
        n2 = n1
        n1 = temp
    elif n3 < n1 and n3 < n2:
        temp = n3
        n3 = n1
        n1 = temp

    if n1 > n2 and n1 < n3:
        temp = n1
        n1 = n2
        n2 = temp
    elif n3 > n1 and n3 < n2:
        temp = n3
        n3 = n2
        n3 = temp

    if n1 > n2 and n1 > n3:
        temp = n1
        n1 = n3
        n3 = temp
    elif n2 > n1 and n2 > n3:
        temp = n2
        n2 = n3
        n3 = temp

    champs.append(n1)
    champs.append(n2)
    champs.append(n3)

    return champs


def testes():

    num1 = 1
    num2 = 2
    num3 = 3

    print(crescente(num1, num2, num3))

    num1 = 3
    num2 = 2
    num3 = 1

    print(crescente(num1, num2, num3))

    num1 = 3
    num2 = 1
    num3 = 2

    print(crescente(num1, num2, num3))

    num1 = 0.8
    num2 = 0.11
    num3 = 0.1

    print(crescente(num1, num2, num3))

testes()