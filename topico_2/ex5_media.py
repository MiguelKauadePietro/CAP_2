n = int(input("Insira quantas vezes irá se repitir: "))

soma = 0

for i in range(0, n):
    n1 = int(input("insira um número e o acumule para achar a média: "))

    soma += n1

media = soma / i
print(media)