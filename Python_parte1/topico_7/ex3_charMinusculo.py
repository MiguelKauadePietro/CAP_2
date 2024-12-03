def verifica_minusculo(caracter):
    c_ascii = ord(caracter)

    ASCII_A = 97

    ASCII_Z = 122

    # o código ascii das letras minúsculas vão de 97 até 122

    if c_ascii >= ASCII_A and c_ascii <= ASCII_Z:
        return True

    return False


def testes():

    letra = "a"

    print(verifica_minusculo(letra))

    letra2 = "A"

    print(verifica_minusculo(letra2))




testes()