def verifica_minusculo(text):
    n = len(text)

    cont = 0

    for i in range(n):
        char_ascii = ord(text[i])

        if char_ascii >= 97 and char_ascii <= 122:
            cont += 1

    if cont == n:
        return True

    return False


def testes():

    texto = "chamPs"

    print(verifica_minusculo(texto))

    texto2 = "CHAMPS"

    print(verifica_minusculo(texto2))

    texto3 = "champs"

    print(verifica_minusculo(texto3))



testes()