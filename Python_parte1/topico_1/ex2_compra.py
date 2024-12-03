#Exercício 2 - Compra de supermercado

numBarras = input("Imprima a quantidade de barras de chocolate que você comprará: ")
precoBarra = input("Imprima o preço das barras de chocolate que você comprará: ")
numPote = input("Imprima a quantidade de potes de sorvete que você comprará: ")
precoPot = input("Imprima o preço dos potes de sorvete que você comprará: ")
numBol = input("Imprima a quantidade de pacotes de bolacha que você comprará: ")
precoBol = input("Imprima o preço dos pacotes de bolacah que você comprará: ")

total = int(numBarras) * float(precoBarra) + int(numPote) * float(precoPot) + int(numBol) * float(precoBol)
print(f" o total da compra foi de: {total} reais")