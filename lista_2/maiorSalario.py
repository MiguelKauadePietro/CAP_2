def maior_salario(nomes, salarios):
    tam = len(nomes)

    maior = 0

    for i in range(tam):
        if salarios[i] > maior:
            maior = salarios[i]
            nome = nomes[i]

    return nome


def testes():

    nomes = ["Laura", "Aline", "Pedro", "Lucas"]
    salarios = [4700, 5700, 4600, 4000]

    print(maior_salario(nomes, salarios))




testes()