n = int(input("Insira quantas vezes você quer repitir: "))


num = int(input("insira alguns valores: "))

soma = num

maior = num
menor = num

for i in range(0, n - 1):
    num = int(input("insira alguns valores: "))

    if num > maior:
        maior = num
    
    if num < menor:
        menor = num

    soma += num

media = soma / n

print(f"A média dos valores é de {media}")
print(f"O maior valor é de {maior}")
print(f"O menor valor é de {menor}")
