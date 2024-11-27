def compara_strings(str1, str2):
    t1 = len(str1)
    t2 = len(str2)

    for i in range(t1):
        if str1[i] != str2[i]:
            return i

    return "palavras iguais"


def testes():

    p1 = "carro"
    p2 = "champs"

    print(compara_strings(p1, p2))


testes()