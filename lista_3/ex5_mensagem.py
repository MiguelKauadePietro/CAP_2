def decodifica_mensagem(str_enorme):
    caracter_bin = []
    char_bin = []
    decodificada = []
    caracteres = []
    temp = []

    tam = len(str_enorme)

    for i in range(0, tam, 7):
        char_bin = str_enorme[i:i+7]
        if char_bin[i] == None:
            break
        print(char_bin)

    # tam2 = len(char_bin)

    # for j in range(tam2):
    #     caracter_bin[j] = ord(char_bin[j])
    #     decodificada[j] = int(caracter_bin[j], 2)
    #     caracteres[j] = chr(decodificada[j])

    # return caracteres


def testes():

    texto = """1000001010000011100001100001110110011000011110110111001011000010100
    0001110011110010111000111110010110010111101001100001010000011001011
    10100001110100100000111010011010011101010110111111011001101111"""

    # print(len(texto))

    print(decodifica_mensagem(texto))

testes()