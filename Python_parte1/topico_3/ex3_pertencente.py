lista = [19, 1, 9, 85, 7, 10]

n = int(input("Insira um número para ver se ele pertence à lista: "))

indice = 0

pertence = False

for i in range(len(lista)):
    if n == lista[i]:
        pertence = True
        indice = i
        break

if pertence:
    print(f"Pertence, e está no indice {indice} da lista")
else:
    print("Não pertence")


#   FORMA MAIS CLEAN(RIDER)

# if n in lista:
#     print("pertence!")
# else:
#     print("não pertence")