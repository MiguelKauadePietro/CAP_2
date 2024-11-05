lista = [19, 1, 9, 85, 7, 10]

n = int(input("Insira um número para ver se ele pertence à lista: "))

pertence = False

for i in range(len(lista)):
    if n == lista[i]:
        pertence = True
        break

if pertence:
    print("Pertence")
else:
    print("Não pertence")


#   FORMA MAIS CLEAN(RIDER)

# if n in lista:
#     print("pertence!")
# else:
#     print("não pertence")