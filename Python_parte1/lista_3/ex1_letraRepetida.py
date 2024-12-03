def verifica_letra_repetida(palavra):
    tam = len(palavra)

    letra = ""
    cont = 0

    for i in range(tam):
        if palavra[i] == letra:
            cont += 1

        letra = palavra[i]

    if cont > 0:
        return True

    return False

def testes():

    text = "não"

    print(verifica_letra_repetida(text))


testes()