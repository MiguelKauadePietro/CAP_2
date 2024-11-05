valores = []

while True:
    digitado = input("Digite um valor ou 'e' para encerrar: ")

    if digitado == 'e':
        break

    valor = float(digitado)
    valores.append(valor)

print(valores)