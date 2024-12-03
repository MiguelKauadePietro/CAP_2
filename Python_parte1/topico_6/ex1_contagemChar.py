def contagem_char(palavra, caracter):
    tam = len(palavra)

    cont = 0

    for i in range(0, tam):
        if palavra[i] == caracter:
            cont += 1
    return cont

def testes():

    word = "binho bolinha"

    print(contagem_char(word, "b"))

    print(contagem_char(word, "c"))

    print(contagem_char(word, "o"))


    word2 = ""

    print(contagem_char(word2, ""))

testes()