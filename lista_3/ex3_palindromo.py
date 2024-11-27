def verifica_palindromo(text):
    n = len(text)


    for i in range(n):
        if text[i] == text[n - i - 1]:
            return True

        return False


def testes():

    texto = "aspas"

    print(verifica_palindromo(texto))



testes()