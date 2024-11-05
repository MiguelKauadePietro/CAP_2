lista1 = [4, 2, 6, 8]
lista2 = [4, 2, 6, 8]

iguais = True

for i in range(len(lista1)):
    if lista1[i] != lista2[i]:
        iguais = False
        break

if iguais:
    print("As listas são Iguais")
else:
    print("As listas não são iguais")