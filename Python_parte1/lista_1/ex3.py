print("Código do produto \n 100 \n 101 \n 112 \n 124 ")
print("Nome \n Cachorro quente \n Refrigerante \n Pão na chapa \n Pão de queijo ")
print("Preço \n R$ 6,00 \n R$ 4,00 \n RS4,50 \n R$ 2,50 ")

codigo = int(input("Insira o código do produto que você deseja comprar: "))

if codigo == 100:
    nome = "Cachorro quente"
    valor = 6.00
    print(f"Você escolheu o {nome}, o valor da compra ficará por {valor} reais")
elif codigo == 101:
    nome = "Refrigerante"
    valor = 4.00
    print(f"Você escolheu o {nome}, o valor da compra ficará por {valor} reais")
elif codigo == 112:
    nome = "Pão na chapa"
    valor = 4.50
    print(f"Você escolheu o {nome}, o valor da compra ficará por {valor} reais")
elif codigo == 124:
    nome = "Pão de queijo"
    valor = 2.50
    print(f"Você escolheu o {nome}, o valor da compra ficará por {valor} reais")
else:
    print("Insira um código válido!!!")