def menor_positivo(valores):
    n = len(valores)

    menor = 0

    for i in range(n):
        if valores[i] > menor:
            menor = valores[i]
    
    for i in range(n):
        if valores[i] > 0 and valores[i] < menor:
            menor = valores[i]

    return menor


def testes():


    val = [5, 3, -6, 9, -4]

    print(menor_positivo(val))


testes()
