fp = open("champs.txt", "r")

# Leitura de 1 caractere
# text = fp.read()

cont = 1

while True:
    char = fp.read(1)
    if char == "":
        break
    print(char)
    if char == "\n":
        cont += 1


fp.close()

print(cont)

# print(text)