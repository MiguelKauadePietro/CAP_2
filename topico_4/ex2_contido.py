
def subsequencia_igual(valores1, valores2):

    for indice1 in range(len(valores1) - len(valores2)):
        igual = False
        for indice2 in range(len(valores2)):
            val1 = valores1[indice1+indice2]
            val2 = valores2[indice2]

            if val1 == val2:
                igual = True

    return igual

numeros1 = [7, 9, 1, 4, 2, 6, 5, 7, 5, 8, 2, 1, 9, 4, 3]
numeros2 = [4, 2, 6, 5, 7]

res = subsequencia_igual(numeros1, numeros2)

print(res)