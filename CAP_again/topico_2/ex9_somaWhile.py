continuar = True
soma = 0

while continuar == True:
    opcao = input("insira um valor para acumular ou insira 'sair' para parar: ")

    if opcao != "sair":
        num = int(opcao)
        soma += num
    else:
        continuar = False

print(f"Soma = {soma}")